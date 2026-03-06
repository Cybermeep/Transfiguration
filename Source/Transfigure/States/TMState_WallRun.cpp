// Source/TMovement/Private/States/TMState_WallRun.cpp
// FULL REPLACEMENT — DetectWall is now static, CanEnter() calls it directly.

#include "States/TMState_WallRun.h"
#include "Character/TMCharacter.h"
#include "States/TMState_WallJump.h"
#include "States/TMState_Jump.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Destruction/DestructionManager.h"

// ── BUG 6 FIX: Static DetectWall — no instance required ──
// Takes the character explicitly so CanEnter() can call it without
// constructing a throwaway TMState_WallRun object.
bool TMState_WallRun::DetectWall(ATMCharacter* Char, FVector& OutNormal, bool& OutOnLeft)
{
    UWorld* World = Char->GetWorld();
    FHitResult Hit;
    FCollisionQueryParams Params;
    Params.AddIgnoredActor(Char);

    FVector Start = Char->GetActorLocation();
    const float TraceLen = 80.f;

    // Check right side first
    FVector RightEnd = Start + Char->GetActorRightVector() * TraceLen;
    if (World->LineTraceSingleByChannel(Hit, Start, RightEnd, ECC_WorldStatic, Params))
    {
        OutNormal = Hit.ImpactNormal;
        OutOnLeft = false;
        return true;
    }

    // Check left side
    FVector LeftEnd = Start - Char->GetActorRightVector() * TraceLen;
    if (World->LineTraceSingleByChannel(Hit, Start, LeftEnd, ECC_WorldStatic, Params))
    {
        OutNormal = Hit.ImpactNormal;
        OutOnLeft = true;
        return true;
    }

    return false;
}

bool TMState_WallRun::CanEnter(ATMCharacter* Char)
{
    auto* CMC = Char->GetCharacterMovement();
    if (CMC->IsMovingOnGround()) return false;
    if (Char->GetVelocity().Size2D() < 400.f) return false;

    // ── BUG 6 FIX: Call static DetectWall directly — no temp instance ──
    FVector Dummy;
    bool bDummy;
    if (!DetectWall(Char, Dummy, bDummy)) return false;

    if (!Char->CanWallRunAtLocation(Char->GetActorLocation())) return false;

    return true;
}

void TMState_WallRun::Enter()
{
    Owner->SetStateName("WallRun");

    // Use static DetectWall with Owner
    DetectWall(Owner, WallNormal, bWallOnLeft);
    JumpsAtEntry = Owner->JumpsRemaining;

    auto* CMC = Owner->GetCharacterMovement();

    // Zero vertical velocity so we run horizontally along the wall
    FVector V = Owner->GetVelocity();
    V.Z = 0.f;
    CMC->Velocity = V;

    CMC->GravityScale = Owner->WallRunGravityScale;
    Owner->JumpsRemaining = 1; // Allow one wall jump
}

void TMState_WallRun::Tick(float DeltaTime)
{
    FVector NewNormal;
    bool bLeft;

    // If no wall is detected this frame, fall into air state
    if (!DetectWall(Owner, NewNormal, bLeft))
    {
        Owner->TransitionTo<TMState_Jump>();
        return;
    }

    WallNormal = NewNormal;

    // Player consumed their wall jump — transition to wall jump state
    if (Owner->JumpsRemaining < 1)
    {
        Owner->TransitionTo<TMState_WallJump>();
        return;
    }

    // Project movement along the wall surface
    FVector WallForward = FVector::CrossProduct(
        WallNormal,
        bWallOnLeft ? FVector::DownVector : FVector::UpVector);
    WallForward.Normalize();

    Owner->GetCharacterMovement()->Velocity = WallForward * Owner->WallRunSpeed;
}

void TMState_WallRun::Exit()
{
    Owner->GetCharacterMovement()->GravityScale = 1.f;
}
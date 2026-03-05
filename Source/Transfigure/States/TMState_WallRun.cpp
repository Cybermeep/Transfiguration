// Source/TMovement/Private/States/TMState_WallRun.cpp

#include "States/TMState_WallRun.h"
#include "Character/TMCharacter.h"
#include "States/TMState_WallJump.h"
#include "States/TMState_Jump.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Destruction/DestructionManager.h"

bool TMState_WallRun::DetectWall(ATMCharacter* Char, FVector& OutNormal, bool& OutOnLeft)
{
    UWorld* World = Char->GetWorld();
    FHitResult Hit;
    FCollisionQueryParams Params;
    Params.AddIgnoredActor(Char);

    FVector Start = Char->GetActorLocation();
    float TraceLen = 80.f;

    FVector RightEnd = Start + Char->GetActorRightVector() * TraceLen;
    if (World->LineTraceSingleByChannel(Hit, Start, RightEnd, ECC_WorldStatic, Params))
    {
        OutNormal = Hit.ImpactNormal;
        OutOnLeft = false;
        return true;
    }

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

    FVector Dummy; bool bDummy;
    if (!DetectWall(Char, Dummy, bDummy)) return false;
    if (!Char->CanWallRunAtLocation(Char->GetActorLocation())) return false;

    return true;
}

void TMState_WallRun::Enter()
{
    Owner->SetStateName("WallRun");
    DetectWall(Owner, WallNormal, bWallOnLeft);
    JumpsAtEntry = Owner->JumpsRemaining;

    auto* CMC = Owner->GetCharacterMovement();

    FVector V = Owner->GetVelocity();
    V.Z = 0.f;
    CMC->Velocity = V;

    CMC->GravityScale = Owner->WallRunGravityScale;
    Owner->JumpsRemaining = 1;
}

void TMState_WallRun::Tick(float DeltaTime)
{
    FVector NewNormal;
    bool bLeft;

    if (!DetectWall(Owner, NewNormal, bLeft))
    {
        Owner->TransitionTo<TMState_Jump>();
        return;
    }

    WallNormal = NewNormal;

    if (Owner->JumpsRemaining < 1)
    {
        Owner->TransitionTo<TMState_WallJump>();
        return;
    }

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
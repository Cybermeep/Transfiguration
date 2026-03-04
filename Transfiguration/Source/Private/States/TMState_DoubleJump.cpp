// Source/TMovement/Private/States/TMState_DoubleJump.cpp

#include "States/TMState_DoubleJump.h"
#include "Character/TMCharacter.h"
#include "States/TMState_Jump.h"
#include "States/TMState_WallRun.h"
#include "GameFramework/CharacterMovementComponent.h"

void TMState_DoubleJump::Enter()
{
    Owner->SetStateName("DoubleJump");

    FVector V = Owner->GetVelocity();
    V.Z = 0.f;
    Owner->GetCharacterMovement()->Velocity = V;

    Owner->LaunchCharacter(
        FVector(0, 0, Owner->JumpZVelocity),
        false, true);
}

void TMState_DoubleJump::Tick(float DeltaTime)
{
    if (Owner->GetCharacterMovement()->IsMovingOnGround())
    {
        Owner->JumpsRemaining = 2;
        Owner->TransitionTo<TMState_Jump>();
        return;
    }

    if (TMState_WallRun::CanEnter(Owner))
    {
        Owner->TransitionTo<TMState_WallRun>();
    }
}

void TMState_DoubleJump::Exit() {}
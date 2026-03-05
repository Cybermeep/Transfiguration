// Source/TMovement/Private/States/TMState_WallJump.cpp

#include "States/TMState_WallJump.h"
#include "Character/TMCharacter.h"
#include "States/TMState_Jump.h"
#include "GameFramework/CharacterMovementComponent.h"

void TMState_WallJump::Enter()
{
    Owner->SetStateName("WallJump");

    FVector LaunchVelocity = -Owner->GetActorForwardVector() * Owner->WallJumpLateralBoost;
    LaunchVelocity.Z = Owner->JumpZVelocity;

    Owner->LaunchCharacter(LaunchVelocity, false, true);
    Owner->JumpsRemaining = 1;
}

void TMState_WallJump::Tick(float DeltaTime)
{
    if (Owner->GetCharacterMovement()->IsMovingOnGround() ||
        Owner->GetVelocity().Z < 0)
    {
        Owner->TransitionTo<TMState_Jump>();
    }
}

void TMState_WallJump::Exit() {}
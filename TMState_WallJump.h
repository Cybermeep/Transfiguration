// Source/TMovement/Private/States/TMState_Jump.cpp

#include "States/TMState_Jump.h"
#include "Character/TMCharacter.h"
#include "States/TMState_Walk.h"
#include "States/TMState_DoubleJump.h"
#include "States/TMState_WallRun.h"
#include "GameFramework/CharacterMovementComponent.h"

void TMState_Jump::Enter()
{
    Owner->SetStateName("Jump");
    Owner->LaunchCharacter(
        FVector(0, 0, Owner->JumpZVelocity),
        /*bXYOverride=*/false,
        /*bZOverride=*/true);
}

void TMState_Jump::Tick(float DeltaTime)
{
    auto* CMC = Owner->GetCharacterMovement();

    if (CMC->IsMovingOnGround())
    {
        Owner->JumpsRemaining = 2;
        Owner->TransitionTo<TMState_Walk>();
        return;
    }

    if (Owner->JumpsRemaining < 1)
    {
        Owner->TransitionTo<TMState_DoubleJump>();
        return;
    }

    if (TMState_WallRun::CanEnter(Owner))
    {
        Owner->TransitionTo<TMState_WallRun>();
    }
}

void TMState_Jump::Exit() {}
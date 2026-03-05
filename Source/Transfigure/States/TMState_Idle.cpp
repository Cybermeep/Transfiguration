// TMState_Idle.cpp

#include "States/TMState_Idle.h"
#include "Character/TMCharacter.h"
#include "States/TMState_Walk.h"
#include "States/TMState_Jump.h"
#include "States/TMState_Sprint.h"
#include "GameFramework/CharacterMovementComponent.h"

void TMState_Idle::Enter()
{
    Owner->SetStateName("Idle");
    Owner->GetCharacterMovement()->MaxWalkSpeed = Owner->WalkSpeed;
}

void TMState_Idle::Tick(float DeltaTime)
{
    auto* CMC = Owner->GetCharacterMovement();

    // If the player is moving, transition to Walk.
    if (Owner->GetVelocity().Size2D() > 10.f)
    {
        Owner->TransitionTo<TMState_Walk>();
        return;
    }

    // If the player holds Sprint without moving, prepare to sprint.
    if (Owner->bSprintHeld)
    {
        Owner->TransitionTo<TMState_Sprint>();
        return;
    }

    // If somehow airborne while idle (e.g. fell off ledge), go to Jump.
    if (!CMC->IsMovingOnGround())
    {
        Owner->JumpsRemaining = 2;
        Owner->TransitionTo<TMState_Jump>();
    }
}

void TMState_Idle::Exit()
{
    // Nothing to clean up when leaving Idle.
}
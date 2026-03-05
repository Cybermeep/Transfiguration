// Source/TMovement/Private/States/TMState_Slide.cpp

#include "States/TMState_Slide.h"
#include "Character/TMCharacter.h"
#include "States/TMState_Walk.h"
#include "GameFramework/CharacterMovementComponent.h"

void TMState_Slide::Enter()
{
    Owner->SetStateName("Slide");
    auto* CMC = Owner->GetCharacterMovement();

    Owner->Crouch();

    FVector FwdImpulse = Owner->GetActorForwardVector() * Owner->SlideImpulse;
    CMC->AddImpulse(FwdImpulse, /*bVelChange=*/true);

    CMC->GroundFriction = 0.2f;
    CMC->BrakingDecelerationWalking = 300.f;
}

void TMState_Slide::Tick(float DeltaTime)
{
    SlideTimer += DeltaTime;

    float Speed2D = Owner->GetVelocity().Size2D();
    if (Speed2D < 200.f || SlideTimer > MaxSlideDuration)
    {
        Owner->TransitionTo<TMState_Walk>();
    }
}

void TMState_Slide::Exit()
{
    Owner->UnCrouch();
    auto* CMC = Owner->GetCharacterMovement();
    CMC->GroundFriction = 8.f;
    CMC->BrakingDecelerationWalking = 2048.f;
    SlideTimer = 0.f;
}
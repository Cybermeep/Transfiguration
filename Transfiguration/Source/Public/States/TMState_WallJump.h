// Source/TMovement/Public/States/TMState_WallJump.h

#pragma once

#include "StateMachine/TMStateBase.h"

class TMState_WallJump : public TMStateBase
{
public:
    explicit TMState_WallJump(ATMCharacter* InOwner) : TMStateBase(InOwner) {}
    virtual void Enter() override;
    virtual void Tick(float DeltaTime) override;
    virtual void Exit() override;
};
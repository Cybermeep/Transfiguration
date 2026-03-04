// Source/TMovement/Public/States/TMState_WallRun.h

#pragma once

#include "StateMachine/TMStateBase.h"

class TMState_WallRun : public TMStateBase
{
public:
    explicit TMState_WallRun(ATMCharacter* InOwner) : TMStateBase(InOwner) {}
    virtual void Enter() override;
    virtual void Tick(float DeltaTime) override;
    virtual void Exit() override;

    static bool CanEnter(ATMCharacter* Char);

private:
    FVector WallNormal;
    bool bWallOnLeft = false;
    int32 JumpsAtEntry = 0;

    bool DetectWall(FVector& OutNormal, bool& OutOnLeft) const;
};
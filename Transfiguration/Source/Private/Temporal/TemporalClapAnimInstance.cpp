// Source/TMovement/Private/Temporal/TemporalClapAnimInstance.cpp

#include "Temporal/TemporalClapAnimInstance.h"
#include "Character/TMCharacter.h"
#include "GameFramework/CharacterMovementComponent.h"

void UTemporalClapAnimInstance::NativeInitializeAnimation()
{
    Super::NativeInitializeAnimation();
}

void UTemporalClapAnimInstance::NativeUpdateAnimation(float DeltaSeconds)
{
    Super::NativeUpdateAnimation(DeltaSeconds);
}

void UTemporalClapAnimInstance::PlayClapAnimation()
{
    if (!ClapMontage) return;

    bIsClapping = true;

    ATMCharacter* Owner = Cast<ATMCharacter>(TryGetPawnOwner());
    if (Owner && Owner->bIsTemporalActive)
    {
        ClapPlayRate = 1.0f / Owner->TemporalTimeDilation;
    }
    else
    {
        ClapPlayRate = 1.0f;
    }

    Montage_Play(ClapMontage, ClapPlayRate);
    OnClapStart();
}

void UTemporalClapAnimInstance::StopClapAnimation()
{
    if (!bIsClapping) return;

    bIsClapping = false;
    Montage_Stop(ClapBlendOutTime);
}

void UTemporalClapAnimInstance::HandleNotify(FName NotifyName)
{
    if (NotifyName == ClapPeakNotifyName)
    {
        OnClapPeak();
        OnClapPeakEvent.Broadcast();
    }
    else if (NotifyName == ClapEndNotifyName)
    {
        OnClapEnd();
        OnClapEndEvent.Broadcast();
        bIsClapping = false;
    }
}
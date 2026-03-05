// Source/TMovement/Public/Temporal/TemporalClapAnimInstance.h

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "TemporalClapAnimInstance.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FTemporalClapAnimEvent);

UCLASS()
class TRANSFIGURE_API UTemporalClapAnimInstance : public UAnimInstance
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintCallable, Category = "Temporal|Animation")
        void PlayClapAnimation();

    UFUNCTION(BlueprintCallable, Category = "Temporal|Animation")
        void StopClapAnimation();

    UFUNCTION(BlueprintImplementableEvent, Category = "Temporal|Animation")
        void OnClapStart();

    UFUNCTION(BlueprintImplementableEvent, Category = "Temporal|Animation")
        void OnClapPeak();

    UFUNCTION(BlueprintImplementableEvent, Category = "Temporal|Animation")
        void OnClapEnd();

    UPROPERTY(BlueprintAssignable)
        FTemporalClapAnimEvent OnClapPeakEvent;

    UPROPERTY(BlueprintAssignable)
        FTemporalClapAnimEvent OnClapEndEvent;

    UPROPERTY(BlueprintReadOnly, Category = "Temporal|Animation")
        bool bIsClapping = false;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Temporal|Animation")
        UAnimMontage* ClapMontage;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Temporal|Animation")
        FName ClapPeakNotifyName = "ClapPeak";

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Temporal|Animation")
        FName ClapEndNotifyName = "ClapEnd";

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Temporal|Animation")
        float ClapBlendInTime = 0.2f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Temporal|Animation")
        float ClapBlendOutTime = 0.3f;

    UFUNCTION()
        void HandleNotify(FName NotifyName);

protected:
    virtual void NativeInitializeAnimation() override;
    virtual void NativeUpdateAnimation(float DeltaSeconds) override;

private:
    float ClapPlayRate = 1.0f;
    float OriginalBlendTime;
};
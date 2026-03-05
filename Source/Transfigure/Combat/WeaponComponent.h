// Source/TMovement/Public/Combat/WeaponComponent.h

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "WeaponComponent.generated.h"

class ATMCharacter;

USTRUCT(BlueprintType)
struct FWeaponHitInfo
{
    GENERATED_BODY()

        UPROPERTY()
        FVector HitLocation;

    UPROPERTY()
        AActor* HitActor;

    UPROPERTY()
        bool bWasHeadshot = false;

    UPROPERTY()
        bool bWasKill = false;

    UPROPERTY()
        float DamageDealt = 0.0f;
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnWeaponHit, const FWeaponHitInfo&, HitInfo);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnWeaponKill, AActor*, KilledEnemy);

UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class TRANSFIGURE_API UWeaponComponent : public UActorComponent
{
    GENERATED_BODY()

public:
    UWeaponComponent();

    // Mana rewards
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon|Mana")
        float ManaPerHit = 2.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon|Mana")
        float ManaPerKill = 10.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon|Mana")
        float ManaPerHeadshot = 15.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon|Mana")
        float ManaPerMelee = 20.0f;

    // Elemental infusion
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon|Elemental")
        bool bEnableElementalInfusion = true;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon|Elemental")
        float ElementalInfusionDuration = 5.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon|Elemental")
        TMap<ETransfigurationElement, float> ElementalDamageMultipliers;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon|Elemental")
        TMap<ETransfigurationElement, TSubclassOf<UDamageType>> ElementalDamageTypes;

    // Delegates
    UPROPERTY(BlueprintAssignable)
        FOnWeaponHit OnWeaponHit;

    UPROPERTY(BlueprintAssignable)
        FOnWeaponKill OnWeaponKill;

    // Public methods
        UFUNCTION(BlueprintCallable, Category = "Weapon")
        void ProcessHit(FHitResult Hit, bool bWasHeadshot, bool bWasKill);

    UFUNCTION(BlueprintCallable, Category = "Weapon")
        void OnMeleeKill(AActor* Target);

    UFUNCTION(BlueprintCallable, Category = "Weapon|Elemental")
        void InfuseWeaponWithElement(ETransfigurationElement Element);

    UFUNCTION(BlueprintPure, Category = "Weapon|Elemental")
        bool IsWeaponInfused() const { return bIsInfused; }

    UFUNCTION(BlueprintPure, Category = "Weapon|Elemental")
        ETransfigurationElement GetCurrentInfusion() const { return CurrentInfusion; }

    UFUNCTION(BlueprintCallable, Category = "Weapon|Elemental")
        void ClearInfusion();

protected:
    virtual void BeginPlay() override;
    virtual void TickComponent(float DeltaTime, ELevelTick TickType,
        FActorComponentTickFunction* ThisTickFunction) override;

private:
    UPROPERTY()
        ATMCharacter* OwnerCharacter;

    UPROPERTY()
        bool bIsInfused = false;

    UPROPERTY()
        ETransfigurationElement CurrentInfusion = ETransfigurationElement::Fire;

    UPROPERTY()
        float InfusionTimeRemaining = 0.0f;

    UPROPERTY()
        FTimerHandle InfusionTimerHandle;

    UFUNCTION()
        void ApplyElementalDamage(AActor* Target, const FHitResult& Hit, float BaseDamage);

    UFUNCTION()
        void UpdateInfusion(float DeltaTime);

    UFUNCTION()
        void OnInfusionExpired();
};
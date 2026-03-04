// Source/TMovement/Public/Enemy/BaseEnemy.h

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "BaseEnemy.generated.h"

class AEnemyObjectPool;
class UWidgetComponent;

UENUM(BlueprintType)
enum class EEnemyState : uint8
{
    Idle UMETA(DisplayName = "Idle"),
    Patrolling UMETA(DisplayName = "Patrolling"),
    Alerted UMETA(DisplayName = "Alerted"),
    Combat UMETA(DisplayName = "Combat"),
    Stunned UMETA(DisplayName = "Stunned"),
    Dead UMETA(DisplayName = "Dead")
};

UCLASS()
class TMOVEMENT_API ABaseEnemy : public ACharacter
{
    GENERATED_BODY()

public:
    ABaseEnemy();

    // Pool lifecycle
    UFUNCTION(BlueprintCallable, Category = "Enemy|Pool")
        virtual void OnSpawnFromPool();

    UFUNCTION(BlueprintCallable, Category = "Enemy|Pool")
        virtual void OnReturnToPool();

    // Combat
    UFUNCTION(BlueprintCallable, Category = "Enemy|Combat")
        virtual void TakePoolDamage(float DamageAmount, FVector HitLocation);

    UFUNCTION(BlueprintCallable, Category = "Enemy|Combat")
        bool IsAlive() const { return bIsAlive; }

    UFUNCTION(BlueprintCallable, Category = "Enemy|Combat")
        bool IsElite() const { return bIsElite; }

    // Pod system
    UFUNCTION(BlueprintCallable, Category = "Enemy|Pod")
        void SetPodID(int32 NewPodID) { PodID = NewPodID; }

    UFUNCTION(BlueprintPure, Category = "Enemy|Pod")
        int32 GetPodID() const { return PodID; }

    UFUNCTION(BlueprintCallable, Category = "Enemy|Pod")
        void SetOwningPool(AEnemyObjectPool* Pool) { OwningPool = Pool; }

    // Awareness
    UFUNCTION(BlueprintCallable, Category = "Enemy|Awareness")
        void SetAlertnessLevel(float Level) { AlertnessLevel = Level; }

    UFUNCTION(BlueprintPure, Category = "Enemy|Awareness")
        float GetAlertnessLevel() const { return AlertnessLevel; }

    UFUNCTION(BlueprintCallable, Category = "Enemy|Awareness")
        void DetectGrappleLine(const FVector& LineStart, const FVector& LineEnd);

    UFUNCTION(BlueprintCallable, Category = "Enemy|Awareness")
        void ReactToDestruction(FVector DestructionLocation, float Radius);

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Enemy|Config")
        float Health = 100.f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Enemy|Config")
        float MaxHealth = 100.f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Enemy|Config")
        float AwarenessRange = 2000.f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Enemy|Config")
        bool bIsElite = false;

    UPROPERTY(BlueprintReadOnly, Category = "Enemy|State")
        EEnemyState CurrentState = EEnemyState::Idle;

protected:
    virtual void BeginPlay() override;
    virtual void Tick(float DeltaTime) override;

    UPROPERTY()
        int32 PodID = -1;

    UPROPERTY()
        AEnemyObjectPool* OwningPool = nullptr;

    UPROPERTY()
        bool bIsAlive = true;

    UPROPERTY()
        float AlertnessLevel = 1.0f;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
        TObjectPtr<UWidgetComponent> HealthBarWidget;

    UFUNCTION()
        virtual void Die();

    UFUNCTION(BlueprintImplementableEvent, Category = "Enemy|VFX")
        void OnSpawnEffects();

    UFUNCTION(BlueprintImplementableEvent, Category = "Enemy|VFX")
        void OnDeathEffects();

    UFUNCTION(BlueprintImplementableEvent, Category = "Enemy|VFX")
        void OnReturnEffects();

    UFUNCTION(BlueprintImplementableEvent, Category = "Enemy|VFX")
        void OnDamageEffects(FVector HitLocation);

    UFUNCTION(BlueprintImplementableEvent, Category = "Enemy|Awareness")
        void OnGrappleDetected(const FVector& LineLocation);

    UFUNCTION(BlueprintImplementableEvent, Category = "Enemy|Awareness")
        void OnDestructionDetected(FVector DestructionLocation);
};
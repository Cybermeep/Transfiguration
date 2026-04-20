// Source/TMovement/Private/Enemy/BaseEnemy.cpp

#include "Enemy/BaseEnemy.h"
#include "Enemy/EnemyObjectPool.h"
#include "Components/WidgetComponent.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/CharacterMovementComponent.h"

ABaseEnemy::ABaseEnemy()
{
    PrimaryActorTick.bCanEverTick = true;

    HealthBarWidget = CreateDefaultSubobject<UWidgetComponent>(TEXT("HealthBarWidget"));
    HealthBarWidget->SetupAttachment(RootComponent);
    HealthBarWidget->SetWidgetSpace(EWidgetSpace::Screen);
    HealthBarWidget->SetDrawSize(FVector2D(100, 20));
}

void ABaseEnemy::BeginPlay()
{
    Super::BeginPlay();
    Health = MaxHealth;
}

void ABaseEnemy::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    // Update health bar visibility
    if (HealthBarWidget)
    {
        HealthBarWidget->SetVisibility(bIsAlive && Health < MaxHealth);
    }
}

void ABaseEnemy::OnSpawnFromPool()
{
    bIsAlive = true;
    Health = MaxHealth;
    CurrentState = EEnemyState::Idle;
    AlertnessLevel = 1.0f;

    SetActorHiddenInGame(false);
    SetActorEnableCollision(true);

    GetCharacterMovement()->SetMovementMode(MOVE_Walking);

    OnSpawnEffects();

    UE_LOG(LogTemp, Verbose, TEXT("BaseEnemy: Spawned from pool with PodID %d"), PodID);
}

void ABaseEnemy::OnReturnToPool()
{
    bIsAlive = false;
    CurrentState = EEnemyState::Dead;

    SetActorHiddenInGame(true);
    SetActorEnableCollision(false);
    GetCharacterMovement()->StopMovementImmediately();

    OnReturnEffects();

    UE_LOG(LogTemp, Verbose, TEXT("BaseEnemy: Returned to pool"));
}

void ABaseEnemy::TakePoolDamage(float DamageAmount, FVector HitLocation)
{
    if (!bIsAlive) return;

    Health -= DamageAmount;
    CurrentState = EEnemyState::Combat;
    OnDamageEffects(HitLocation);

    if (Health <= 0.0f)
    {
        Die();
    }
}

void ABaseEnemy::Die()
{
    if (!bIsAlive) return;

    bIsAlive = false;
    CurrentState = EEnemyState::Dead;
    OnDeathEffects();

    GetCharacterMovement()->StopMovementImmediately();

    if (OwningPool)
    {
        FTimerHandle DeathHandle;
        GetWorldTimerManager().SetTimer(DeathHandle, [this]()
            {
                OwningPool->ReturnEnemy(this);
            }, 1.0f, false);
    }
    else
    {
        SetLifeSpan(1.0f);
    }
}

void ABaseEnemy::DetectGrappleLine(const FVector& LineStart, const FVector& LineEnd)
{
    if (!bIsAlive || CurrentState == EEnemyState::Stunned) return;

    float DistanceToLine = FMath::PointDistToSegment(
        GetActorLocation(),
        LineStart,
        LineEnd
    );

    if (DistanceToLine < 200.0f)
    {
        OnGrappleDetected(LineStart + (LineEnd - LineStart) * 0.5f);

        if (CurrentState == EEnemyState::Idle || CurrentState == EEnemyState::Patrolling)
        {
            CurrentState = EEnemyState::Alerted;
        }
    }
}

void ABaseEnemy::ReactToDestruction(FVector DestructionLocation, float Radius)
{
    if (!bIsAlive) return;

    float Distance = FVector::Dist(GetActorLocation(), DestructionLocation);
    if (Distance < Radius * 1.5f)
    {
        OnDestructionDetected(DestructionLocation);

        if (Distance < Radius)
        {
            // Take damage from destruction
            float DestructionDamage = (1.0f - (Distance / Radius)) * 50.0f;
            TakePoolDamage(DestructionDamage, DestructionLocation);
        }

        CurrentState = EEnemyState::Alerted;
    }
}
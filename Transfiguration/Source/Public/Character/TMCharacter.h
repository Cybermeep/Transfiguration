// Source/TMovement/Public/Character/TMCharacter.h

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "StateMachine/TMStateMachine.h"
#include "InputActionValue.h"
#include "Transfiguration/TransfigurationTypes.h"
#include "TMCharacter.generated.h"

class UInputMappingContext;
class UInputAction;
class UTransfigurationCastingComponent;
class UTransfigurationComboDetector;
class UBuffEffectComponent;
class UGrappleComponent;

UCLASS()
class TMOVEMENT_API ATMCharacter : public ACharacter
{
    GENERATED_BODY()

public:
    ATMCharacter();

    // ── MOVEMENT PARAMETERS ──
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TM|Movement")
        float WalkSpeed = 600.f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TM|Movement")
        float SprintSpeed = 1000.f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TM|Movement")
        float SlideImpulse = 1400.f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TM|Movement")
        float JumpZVelocity = 700.f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TM|Movement")
        float WallRunGravityScale = 0.1f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TM|Movement")
        float WallRunSpeed = 850.f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TM|Movement")
        float WallJumpLateralBoost = 500.f;

    // ── MAGIC SCALING ──
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TM|Magic|Scaling")
        float MinSpeedForMagicScaling = 0.f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TM|Magic|Scaling")
        float MaxSpeedForMagicScaling = 2000.f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TM|Magic|Scaling")
        float MinDamageScale = 1.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TM|Magic|Scaling")
        float MaxDamageScale = 3.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TM|Magic|Scaling")
        float MinCooldownScale = 1.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TM|Magic|Scaling")
        float MaxCooldownScale = 0.3f;

    // ── PERSISTENT SIGILS ──
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TM|Magic|Sigils")
        float HealingSigilRate = 10.f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TM|Magic|Sigils")
        float SpeedBuffMultiplier = 1.5f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TM|Magic|Sigils")
        float SpeedBuffDuration = 3.f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TM|Magic|Sigils")
        float DamageBuffMultiplier = 1.5f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TM|Magic|Sigils")
        float DamageBuffDuration = 3.f;

    // ── MANA SYSTEM ──
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TM|Mana")
        float MaxMana = 100.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TM|Mana")
        float StartingMana = 100.0f;

    UPROPERTY(BlueprintReadOnly, Category = "TM|Mana")
        float CurrentMana = 100.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TM|Mana|Regeneration")
        float ManaRegenRate = 5.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TM|Mana|Regeneration")
        float ManaRegenDelay = 2.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TM|Mana|Combat")
        float ManaOnKill = 10.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TM|Mana|Combat")
        float ManaOnHeadshot = 15.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TM|Mana|Combat")
        float ManaOnMelee = 20.0f;

    // ── TEMPORAL CLAP ──
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TM|Temporal")
        bool bCanUseTemporalClap = true;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TM|Temporal")
        float TemporalClapCooldown = 15.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TM|Temporal")
        float TemporalTimeDilation = 0.2f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TM|Temporal")
        float TemporalClapDuration = 3.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TM|Temporal")
        float ClapAnimationDuration = 1.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TM|Temporal|Mana")
        float TemporalClapManaCost = 50.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TM|Temporal|Mana")
        bool bTemporalClapRefundOnNoSigils = true;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TM|Temporal|Mana")
        float TemporalClapRefundPercent = 0.75f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TM|Temporal|Camera")
        float TemporalCameraTiltAngle = 15.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TM|Temporal|Camera")
        float TemporalCameraFOV = 100.0f;

    UPROPERTY(BlueprintReadOnly, Category = "TM|Temporal")
        bool bIsTemporalActive = false;

    UPROPERTY(BlueprintReadOnly, Category = "TM|Temporal")
        float TemporalTimeRemaining = 0.0f;

    // ── STATE ──
    UPROPERTY(BlueprintReadOnly, Category = "TM|State")
        FString CurrentStateName = "Idle";

    // ── UFUNCTIONs ──
    UFUNCTION(BlueprintCallable, Category = "TM|Movement")
        bool IsWallRunning() const;

    UFUNCTION(BlueprintCallable, Category = "TM|Movement")
        bool IsSliding() const;

    UFUNCTION(BlueprintCallable, Category = "TM|Movement")
        bool IsSprinting() const;

    UFUNCTION(BlueprintCallable, Category = "TM|Movement")
        float GetCurrentSpeed() const;

    UFUNCTION(BlueprintCallable, Category = "TM|Movement")
        float GetSpeedScalingFactor() const;

    // ── MANA FUNCTIONS ──
    UFUNCTION(BlueprintCallable, Category = "TM|Mana")
        bool ConsumeMana(float ManaCost);

    UFUNCTION(BlueprintCallable, Category = "TM|Mana")
        void AddMana(float ManaAmount);

    UFUNCTION(BlueprintPure, Category = "TM|Mana")
        float GetManaPercentage() const { return CurrentMana / MaxMana; }

    UFUNCTION(BlueprintPure, Category = "TM|Mana")
        bool HasEnoughMana(float ManaCost) const { return CurrentMana >= ManaCost; }

    // ── TEMPORAL FUNCTIONS ──
    UFUNCTION(BlueprintCallable, Category = "TM|Temporal")
        void ActivateTemporalClap();

    UFUNCTION(BlueprintCallable, Category = "TM|Temporal")
        void EndTemporalClap();

    UFUNCTION(BlueprintPure, Category = "TM|Temporal")
        bool CanActivateTemporalClap() const;

    // ── BUFF FUNCTIONS ──
    UFUNCTION(BlueprintCallable, Category = "TM|Magic|Buffs")
        void ApplySpeedBuff(float Multiplier, float Duration);

    UFUNCTION(BlueprintCallable, Category = "TM|Magic|Buffs")
        void ApplyDamageBuff(float Multiplier, float Duration);

    UFUNCTION(BlueprintCallable, Category = "TM|Magic|Buffs")
        float GetHealth() const { return Health; }

    UFUNCTION(BlueprintCallable, Category = "TM|Magic|Buffs")
        float GetMaxHealth() const { return MaxHealth; }

    UFUNCTION(BlueprintCallable, Category = "TM|Magic|Buffs")
        void SetHealth(float NewHealth) { Health = NewHealth; }

    // ── GRAPPLE FUNCTIONS ──
    UFUNCTION(BlueprintPure, Category = "TM|Grapple")
        bool IsGrappling() const;

    UFUNCTION(BlueprintPure, Category = "TM|Grapple")
        EGrappleTier GetGrappleTier() const;

    UFUNCTION(BlueprintCallable, Category = "TM|Grapple")
        void UpgradeGrappleTier();

    // ── DESTRUCTION FUNCTIONS ──
    UFUNCTION(BlueprintCallable, Category = "TM|Destruction")
        bool IsLocationDestructible(FVector Location) const;

    UFUNCTION(BlueprintCallable, Category = "TM|Destruction")
        bool CanWallRunAtLocation(FVector Location) const;

    // ── DELEGATES ──
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnManaChanged, float, NewMana, float, MaxMana);
    UPROPERTY(BlueprintAssignable, Category = "TM|Mana")
        FOnManaChanged OnManaChanged;

    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnManaDepleted, float, TimeUntilRegen);
    UPROPERTY(BlueprintAssignable, Category = "TM|Mana")
        FOnManaDepleted OnManaDepleted;

    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnManaRegenStarted);
    UPROPERTY(BlueprintAssignable, Category = "TM|Mana")
        FOnManaRegenStarted OnManaRegenStarted;

    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FTemporalClapDelegate);
    UPROPERTY(BlueprintAssignable, Category = "TM|Temporal")
        FTemporalClapDelegate OnTemporalClapStarted;

    UPROPERTY(BlueprintAssignable, Category = "TM|Temporal")
        FTemporalClapDelegate OnTemporalClapEnded;

    UPROPERTY(BlueprintAssignable, Category = "TM|Temporal")
        FTemporalClapDelegate OnClapAnimationComplete;

    // ── COMPONENTS ──
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Magic")
        TObjectPtr<UTransfigurationCastingComponent> TransfigurationCasting;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Magic")
        TObjectPtr<UTransfigurationComboDetector> ComboDetector;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Grapple")
        TObjectPtr<UGrappleComponent> GrappleComponent;

    // ── STATE MANAGEMENT ──
    void SetStateName(const FString& Name) { CurrentStateName = Name; }

    template<typename T>
    void TransitionTo()
    {
        StateMachine.TransitionTo(std::make_unique<T>(this));
    }

    // ── RUNTIME FLAGS ──
    bool bSprintHeld = false;
    bool bSlidePressed = false;
    int32 JumpsRemaining = 2;
    bool bWantsToTeleport = false;

protected:
    virtual void BeginPlay() override;
    virtual void Tick(float DeltaTime) override;
    virtual void SetupPlayerInputComponent(UInputComponent* PlayerInputComponent) override;

private:
    TMStateMachine StateMachine;

    // ── INPUT ASSETS ──
    UPROPERTY(EditAnywhere, Category = "TM|Input")
        TObjectPtr<UInputMappingContext> DefaultMappingContext;

    UPROPERTY(EditAnywhere, Category = "TM|Input")
        TObjectPtr<UInputAction> IA_Move;

    UPROPERTY(EditAnywhere, Category = "TM|Input")
        TObjectPtr<UInputAction> IA_Look;

    UPROPERTY(EditAnywhere, Category = "TM|Input")
        TObjectPtr<UInputAction> IA_Jump;

    UPROPERTY(EditAnywhere, Category = "TM|Input")
        TObjectPtr<UInputAction> IA_Sprint;

    UPROPERTY(EditAnywhere, Category = "TM|Input")
        TObjectPtr<UInputAction> IA_Slide;

    UPROPERTY(EditAnywhere, Category = "TM|Input")
        TObjectPtr<UInputAction> IA_DrawSigil;

    UPROPERTY(EditAnywhere, Category = "TM|Input")
        TObjectPtr<UInputAction> IA_PlaceSigil;

    UPROPERTY(EditAnywhere, Category = "TM|Input")
        TObjectPtr<UInputAction> IA_TriggerSigil;

    UPROPERTY(EditAnywhere, Category = "TM|Input")
        TObjectPtr<UInputAction> IA_TriggerAll;

    UPROPERTY(EditAnywhere, Category = "TM|Input")
        TObjectPtr<UInputAction> IA_TemporalClap;

    UPROPERTY(EditAnywhere, Category = "TM|Input")
        TObjectPtr<UInputAction> IA_Grapple;

    UPROPERTY(EditAnywhere, Category = "TM|Input")
        TObjectPtr<UInputAction> IA_GrappleKick;

    UPROPERTY(EditAnywhere, Category = "TM|Input")
        TObjectPtr<UInputAction> IA_GrappleSlam;

    UPROPERTY(EditAnywhere, Category = "TM|Input")
        TObjectPtr<UInputAction> IA_GrappleToss;

    UPROPERTY(EditAnywhere, Category = "TM|Input")
        TObjectPtr<UInputAction> IA_GrappleEvade;

    UPROPERTY(EditAnywhere, Category = "TM|Input")
        TObjectPtr<UInputAction> IA_GrapplePull;

    UPROPERTY(EditAnywhere, Category = "TM|Input")
        TObjectPtr<UInputAction> IA_WebTrap;

    // ── INPUT HANDLERS ──
    void OnMove(const FInputActionValue& Value);
    void OnLook(const FInputActionValue& Value);
    void OnJumpPressed();
    void OnSprintStarted();
    void OnSprintEnded();
    void OnSlidePressed();
    void OnDrawSigilPressed();
    void OnPlaceSigilPressed();
    void OnTriggerSigilPressed();
    void OnTriggerAllPressed();
    void OnTemporalClapPressed();
    void OnGrapplePressed();
    void OnGrappleKickPressed();
    void OnGrappleSlamPressed();
    void OnGrappleTossPressed();
    void OnGrappleEvadePressed();
    void OnGrapplePullPressed();
    void OnWebTrapPressed();

    // ── MANA SYSTEM ──
    FTimerHandle ManaRegenDelayHandle;
    FTimerHandle ManaRegenTickHandle;
    bool bManaRegenActive = false;

    void StartManaRegen();
    void StopManaRegen();
    void RegenerateManaTick();

    // ── TEMPORAL SYSTEM ──
    FTimerHandle TemporalTimerHandle;
    FTimerHandle ClapAnimationTimerHandle;
    FTimerHandle CooldownTimerHandle;

    float OriginalTimeDilation;
    float OriginalCameraFOV;
    FRotator OriginalCameraRotation;

    void StartTemporalEffects();
    void EndTemporalEffects();
    void ExecuteClapSigilActivation();
    void BeginTemporalCooldown();

    // ── HEALTH ──
    UPROPERTY()
        float Health = 100.f;

    UPROPERTY()
        float MaxHealth = 100.f;

    UPROPERTY()
        float CurrentDamageMultiplier = 1.0f;
};
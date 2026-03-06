// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Character/TMCharacter.h"

#ifdef TRANSFIGURE_TMCharacter_generated_h
#error "TMCharacter.generated.h already included, missing '#pragma once' in TMCharacter.h"
#endif
#define TRANSFIGURE_TMCharacter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

enum class EGrappleTier : uint8;

// ********** Begin Delegate FOnManaChanged ********************************************************
#define FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Character_TMCharacter_h_223_DELEGATE \
static void FOnManaChanged_DelegateWrapper(const FMulticastScriptDelegate& OnManaChanged, float NewMana, float MaxMana);


// ********** End Delegate FOnManaChanged **********************************************************

// ********** Begin Delegate FOnManaDepleted *******************************************************
#define FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Character_TMCharacter_h_227_DELEGATE \
static void FOnManaDepleted_DelegateWrapper(const FMulticastScriptDelegate& OnManaDepleted, float TimeUntilRegen);


// ********** End Delegate FOnManaDepleted *********************************************************

// ********** Begin Delegate FOnManaRegenStarted ***************************************************
#define FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Character_TMCharacter_h_231_DELEGATE \
static void FOnManaRegenStarted_DelegateWrapper(const FMulticastScriptDelegate& OnManaRegenStarted);


// ********** End Delegate FOnManaRegenStarted *****************************************************

// ********** Begin Delegate FTemporalClapDelegate *************************************************
#define FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Character_TMCharacter_h_235_DELEGATE \
static void FTemporalClapDelegate_DelegateWrapper(const FMulticastScriptDelegate& TemporalClapDelegate);


// ********** End Delegate FTemporalClapDelegate ***************************************************

// ********** Begin Class ATMCharacter *************************************************************
#define FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Character_TMCharacter_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCanWallRunAtLocation); \
	DECLARE_FUNCTION(execIsLocationDestructible); \
	DECLARE_FUNCTION(execUpgradeGrappleTier); \
	DECLARE_FUNCTION(execGetGrappleTier); \
	DECLARE_FUNCTION(execIsGrappling); \
	DECLARE_FUNCTION(execSetHealth); \
	DECLARE_FUNCTION(execGetMaxHealth); \
	DECLARE_FUNCTION(execGetHealth); \
	DECLARE_FUNCTION(execApplyDamageBuff); \
	DECLARE_FUNCTION(execApplySpeedBuff); \
	DECLARE_FUNCTION(execCanActivateTemporalClap); \
	DECLARE_FUNCTION(execEndTemporalClap); \
	DECLARE_FUNCTION(execActivateTemporalClap); \
	DECLARE_FUNCTION(execHasEnoughMana); \
	DECLARE_FUNCTION(execGetManaPercentage); \
	DECLARE_FUNCTION(execAddMana); \
	DECLARE_FUNCTION(execConsumeMana); \
	DECLARE_FUNCTION(execGetSpeedScalingFactor); \
	DECLARE_FUNCTION(execGetCurrentSpeed); \
	DECLARE_FUNCTION(execIsSprinting); \
	DECLARE_FUNCTION(execIsSliding); \
	DECLARE_FUNCTION(execIsWallRunning);


TRANSFIGURE_API UClass* Z_Construct_UClass_ATMCharacter_NoRegister();

#define FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Character_TMCharacter_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATMCharacter(); \
	friend struct Z_Construct_UClass_ATMCharacter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TRANSFIGURE_API UClass* Z_Construct_UClass_ATMCharacter_NoRegister(); \
public: \
	DECLARE_CLASS2(ATMCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Transfigure"), Z_Construct_UClass_ATMCharacter_NoRegister) \
	DECLARE_SERIALIZER(ATMCharacter)


#define FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Character_TMCharacter_h_22_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ATMCharacter(ATMCharacter&&) = delete; \
	ATMCharacter(const ATMCharacter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATMCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATMCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATMCharacter) \
	NO_API virtual ~ATMCharacter();


#define FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Character_TMCharacter_h_19_PROLOG
#define FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Character_TMCharacter_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Character_TMCharacter_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Character_TMCharacter_h_22_INCLASS_NO_PURE_DECLS \
	FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Character_TMCharacter_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ATMCharacter;

// ********** End Class ATMCharacter ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Character_TMCharacter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS

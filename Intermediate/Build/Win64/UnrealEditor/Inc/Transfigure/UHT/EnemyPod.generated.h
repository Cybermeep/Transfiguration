// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Enemy/EnemyPod.h"

#ifdef TRANSFIGURE_EnemyPod_generated_h
#error "EnemyPod.generated.h already included, missing '#pragma once' in EnemyPod.h"
#endif
#define TRANSFIGURE_EnemyPod_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;
class ABaseEnemy;
class AEnemyObjectPool;
class AEnemyPod;
class ATMCharacter;
class UPrimitiveComponent;
enum class EPodState : uint8;
struct FHitResult;

// ********** Begin Delegate FOnPodStateChanged ****************************************************
#define FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Enemy_EnemyPod_h_15_DELEGATE \
TRANSFIGURE_API void FOnPodStateChanged_DelegateWrapper(const FMulticastScriptDelegate& OnPodStateChanged, EPodState NewState);


// ********** End Delegate FOnPodStateChanged ******************************************************

// ********** Begin Delegate FOnPodDefeated ********************************************************
#define FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Enemy_EnemyPod_h_16_DELEGATE \
TRANSFIGURE_API void FOnPodDefeated_DelegateWrapper(const FMulticastScriptDelegate& OnPodDefeated);


// ********** End Delegate FOnPodDefeated **********************************************************

// ********** Begin Delegate FOnPodReinforcing *****************************************************
#define FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Enemy_EnemyPod_h_17_DELEGATE \
TRANSFIGURE_API void FOnPodReinforcing_DelegateWrapper(const FMulticastScriptDelegate& OnPodReinforcing, int32 ReinforceCount);


// ********** End Delegate FOnPodReinforcing *******************************************************

// ********** Begin Class AEnemyPod ****************************************************************
#define FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Enemy_EnemyPod_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execUpdateEnemyCoverPositions); \
	DECLARE_FUNCTION(execIncreaseEnemyAlertness); \
	DECLARE_FUNCTION(execSendEnemyToLocation); \
	DECLARE_FUNCTION(execSetEnemyPatrolBehavior); \
	DECLARE_FUNCTION(execGetPlayerInRange); \
	DECLARE_FUNCTION(execIsSpawnPointSafe); \
	DECLARE_FUNCTION(execReinforcementTimeout); \
	DECLARE_FUNCTION(execOnNeighborPodEngaged); \
	DECLARE_FUNCTION(execNotifyNearbyPods); \
	DECLARE_FUNCTION(execCheckEscapeConditions); \
	DECLARE_FUNCTION(execSpawnPodEnemies); \
	DECLARE_FUNCTION(execOnActivationEndOverlap); \
	DECLARE_FUNCTION(execOnActivationOverlap); \
	DECLARE_FUNCTION(execFindCoverPositions); \
	DECLARE_FUNCTION(execOnEnvironmentDestroyed); \
	DECLARE_FUNCTION(execGetThreatLevel); \
	DECLARE_FUNCTION(execIsClear); \
	DECLARE_FUNCTION(execGetNearbyPods); \
	DECLARE_FUNCTION(execIsPlayerInEscapeRange); \
	DECLARE_FUNCTION(execTriggerReinforcements); \
	DECLARE_FUNCTION(execOnEnemySpawned); \
	DECLARE_FUNCTION(execOnEnemyDefeated); \
	DECLARE_FUNCTION(execDeactivatePod); \
	DECLARE_FUNCTION(execActivatePod); \
	DECLARE_FUNCTION(execInitializePod);


TRANSFIGURE_API UClass* Z_Construct_UClass_AEnemyPod_NoRegister();

#define FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Enemy_EnemyPod_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEnemyPod(); \
	friend struct Z_Construct_UClass_AEnemyPod_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TRANSFIGURE_API UClass* Z_Construct_UClass_AEnemyPod_NoRegister(); \
public: \
	DECLARE_CLASS2(AEnemyPod, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Transfigure"), Z_Construct_UClass_AEnemyPod_NoRegister) \
	DECLARE_SERIALIZER(AEnemyPod)


#define FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Enemy_EnemyPod_h_22_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AEnemyPod(AEnemyPod&&) = delete; \
	AEnemyPod(const AEnemyPod&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemyPod); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemyPod); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEnemyPod) \
	NO_API virtual ~AEnemyPod();


#define FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Enemy_EnemyPod_h_19_PROLOG
#define FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Enemy_EnemyPod_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Enemy_EnemyPod_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Enemy_EnemyPod_h_22_INCLASS_NO_PURE_DECLS \
	FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Enemy_EnemyPod_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AEnemyPod;

// ********** End Class AEnemyPod ******************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Enemy_EnemyPod_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Enemy/EnemyObjectPool.h"

#ifdef TRANSFIGURE_EnemyObjectPool_generated_h
#error "EnemyObjectPool.generated.h already included, missing '#pragma once' in EnemyObjectPool.h"
#endif
#define TRANSFIGURE_EnemyObjectPool_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;
class ABaseEnemy;

// ********** Begin Delegate FOnPoolExhausted ******************************************************
#define FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Enemy_EnemyObjectPool_h_11_DELEGATE \
TRANSFIGURE_API void FOnPoolExhausted_DelegateWrapper(const FMulticastScriptDelegate& OnPoolExhausted, int32 RequestedCount);


// ********** End Delegate FOnPoolExhausted ********************************************************

// ********** Begin Delegate FOnEnemyReturned ******************************************************
#define FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Enemy_EnemyObjectPool_h_12_DELEGATE \
TRANSFIGURE_API void FOnEnemyReturned_DelegateWrapper(const FMulticastScriptDelegate& OnEnemyReturned, ABaseEnemy* Enemy);


// ********** End Delegate FOnEnemyReturned ********************************************************

// ********** Begin Class AEnemyObjectPool *********************************************************
#define FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Enemy_EnemyObjectPool_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execPerformPoolMaintenance); \
	DECLARE_FUNCTION(execOnEnemyDestroyed); \
	DECLARE_FUNCTION(execCanSpawn); \
	DECLARE_FUNCTION(execGetAvailableCount); \
	DECLARE_FUNCTION(execGetPoolSize); \
	DECLARE_FUNCTION(execGetActiveCount); \
	DECLARE_FUNCTION(execGetPodEnemies); \
	DECLARE_FUNCTION(execGetActiveEnemies); \
	DECLARE_FUNCTION(execReturnPodEnemies); \
	DECLARE_FUNCTION(execReturnEnemy); \
	DECLARE_FUNCTION(execRequestEnemies); \
	DECLARE_FUNCTION(execRequestEnemy); \
	DECLARE_FUNCTION(execInitializePool);


TRANSFIGURE_API UClass* Z_Construct_UClass_AEnemyObjectPool_NoRegister();

#define FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Enemy_EnemyObjectPool_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEnemyObjectPool(); \
	friend struct Z_Construct_UClass_AEnemyObjectPool_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TRANSFIGURE_API UClass* Z_Construct_UClass_AEnemyObjectPool_NoRegister(); \
public: \
	DECLARE_CLASS2(AEnemyObjectPool, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Transfigure"), Z_Construct_UClass_AEnemyObjectPool_NoRegister) \
	DECLARE_SERIALIZER(AEnemyObjectPool)


#define FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Enemy_EnemyObjectPool_h_17_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AEnemyObjectPool(AEnemyObjectPool&&) = delete; \
	AEnemyObjectPool(const AEnemyObjectPool&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemyObjectPool); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemyObjectPool); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEnemyObjectPool) \
	NO_API virtual ~AEnemyObjectPool();


#define FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Enemy_EnemyObjectPool_h_14_PROLOG
#define FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Enemy_EnemyObjectPool_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Enemy_EnemyObjectPool_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Enemy_EnemyObjectPool_h_17_INCLASS_NO_PURE_DECLS \
	FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Enemy_EnemyObjectPool_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AEnemyObjectPool;

// ********** End Class AEnemyObjectPool ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Enemy_EnemyObjectPool_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS

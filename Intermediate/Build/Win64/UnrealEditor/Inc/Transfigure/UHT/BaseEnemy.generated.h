// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Enemy/BaseEnemy.h"

#ifdef TRANSFIGURE_BaseEnemy_generated_h
#error "BaseEnemy.generated.h already included, missing '#pragma once' in BaseEnemy.h"
#endif
#define TRANSFIGURE_BaseEnemy_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AEnemyObjectPool;

// ********** Begin Class ABaseEnemy ***************************************************************
#define FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Enemy_BaseEnemy_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDie); \
	DECLARE_FUNCTION(execReactToDestruction); \
	DECLARE_FUNCTION(execDetectGrappleLine); \
	DECLARE_FUNCTION(execGetAlertnessLevel); \
	DECLARE_FUNCTION(execSetAlertnessLevel); \
	DECLARE_FUNCTION(execSetOwningPool); \
	DECLARE_FUNCTION(execGetPodID); \
	DECLARE_FUNCTION(execSetPodID); \
	DECLARE_FUNCTION(execIsElite); \
	DECLARE_FUNCTION(execIsAlive); \
	DECLARE_FUNCTION(execTakePoolDamage); \
	DECLARE_FUNCTION(execOnReturnToPool); \
	DECLARE_FUNCTION(execOnSpawnFromPool);


#define FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Enemy_BaseEnemy_h_26_CALLBACK_WRAPPERS
TRANSFIGURE_API UClass* Z_Construct_UClass_ABaseEnemy_NoRegister();

#define FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Enemy_BaseEnemy_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABaseEnemy(); \
	friend struct Z_Construct_UClass_ABaseEnemy_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TRANSFIGURE_API UClass* Z_Construct_UClass_ABaseEnemy_NoRegister(); \
public: \
	DECLARE_CLASS2(ABaseEnemy, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Transfigure"), Z_Construct_UClass_ABaseEnemy_NoRegister) \
	DECLARE_SERIALIZER(ABaseEnemy)


#define FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Enemy_BaseEnemy_h_26_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ABaseEnemy(ABaseEnemy&&) = delete; \
	ABaseEnemy(const ABaseEnemy&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseEnemy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseEnemy); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABaseEnemy) \
	NO_API virtual ~ABaseEnemy();


#define FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Enemy_BaseEnemy_h_23_PROLOG
#define FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Enemy_BaseEnemy_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Enemy_BaseEnemy_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Enemy_BaseEnemy_h_26_CALLBACK_WRAPPERS \
	FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Enemy_BaseEnemy_h_26_INCLASS_NO_PURE_DECLS \
	FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Enemy_BaseEnemy_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ABaseEnemy;

// ********** End Class ABaseEnemy *****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Enemy_BaseEnemy_h

// ********** Begin Enum EEnemyState ***************************************************************
#define FOREACH_ENUM_EENEMYSTATE(op) \
	op(EEnemyState::Idle) \
	op(EEnemyState::Patrolling) \
	op(EEnemyState::Alerted) \
	op(EEnemyState::Combat) \
	op(EEnemyState::Stunned) \
	op(EEnemyState::Dead) 

enum class EEnemyState : uint8;
template<> struct TIsUEnumClass<EEnemyState> { enum { Value = true }; };
template<> TRANSFIGURE_API UEnum* StaticEnum<EEnemyState>();
// ********** End Enum EEnemyState *****************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS

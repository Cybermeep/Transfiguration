// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Grapple/CombatGrappleMove.h"

#ifdef TRANSFIGURE_CombatGrappleMove_generated_h
#error "CombatGrappleMove.generated.h already included, missing '#pragma once' in CombatGrappleMove.h"
#endif
#define TRANSFIGURE_CombatGrappleMove_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class ABaseEnemy;
class ATMCharacter;
enum class ETransfigurationElement : uint8;

// ********** Begin Class UCombatGrappleMove *******************************************************
#define FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Grapple_CombatGrappleMove_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execApplyMomentumDamage); \
	DECLARE_FUNCTION(execApplyElementalDamage); \
	DECLARE_FUNCTION(execExecuteMove);


#define FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Grapple_CombatGrappleMove_h_16_CALLBACK_WRAPPERS
TRANSFIGURE_API UClass* Z_Construct_UClass_UCombatGrappleMove_NoRegister();

#define FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Grapple_CombatGrappleMove_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCombatGrappleMove(); \
	friend struct Z_Construct_UClass_UCombatGrappleMove_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TRANSFIGURE_API UClass* Z_Construct_UClass_UCombatGrappleMove_NoRegister(); \
public: \
	DECLARE_CLASS2(UCombatGrappleMove, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Transfigure"), Z_Construct_UClass_UCombatGrappleMove_NoRegister) \
	DECLARE_SERIALIZER(UCombatGrappleMove)


#define FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Grapple_CombatGrappleMove_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCombatGrappleMove(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCombatGrappleMove(UCombatGrappleMove&&) = delete; \
	UCombatGrappleMove(const UCombatGrappleMove&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCombatGrappleMove); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCombatGrappleMove); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCombatGrappleMove) \
	NO_API virtual ~UCombatGrappleMove();


#define FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Grapple_CombatGrappleMove_h_13_PROLOG
#define FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Grapple_CombatGrappleMove_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Grapple_CombatGrappleMove_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Grapple_CombatGrappleMove_h_16_CALLBACK_WRAPPERS \
	FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Grapple_CombatGrappleMove_h_16_INCLASS_NO_PURE_DECLS \
	FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Grapple_CombatGrappleMove_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCombatGrappleMove;

// ********** End Class UCombatGrappleMove *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Grapple_CombatGrappleMove_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS

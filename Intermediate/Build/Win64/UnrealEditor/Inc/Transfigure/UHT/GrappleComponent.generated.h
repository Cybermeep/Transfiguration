// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Grapple/GrappleComponent.h"

#ifdef TRANSFIGURE_GrappleComponent_generated_h
#error "GrappleComponent.generated.h already included, missing '#pragma once' in GrappleComponent.h"
#endif
#define TRANSFIGURE_GrappleComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;
enum class ECombatGrappleMove : uint8;
enum class EGrappleState : uint8;
enum class EGrappleTier : uint8;
enum class ETransfigurationElement : uint8;
struct FGrappleLineData;

// ********** Begin Delegate FOnGrappleStateChanged ************************************************
#define FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Grapple_GrappleComponent_h_14_DELEGATE \
TRANSFIGURE_API void FOnGrappleStateChanged_DelegateWrapper(const FMulticastScriptDelegate& OnGrappleStateChanged, EGrappleState NewState);


// ********** End Delegate FOnGrappleStateChanged **************************************************

// ********** Begin Delegate FOnGrappleLineCreated *************************************************
#define FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Grapple_GrappleComponent_h_15_DELEGATE \
TRANSFIGURE_API void FOnGrappleLineCreated_DelegateWrapper(const FMulticastScriptDelegate& OnGrappleLineCreated, FGrappleLineData const& LineData);


// ********** End Delegate FOnGrappleLineCreated ***************************************************

// ********** Begin Delegate FOnCombatGrappleExecuted **********************************************
#define FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Grapple_GrappleComponent_h_16_DELEGATE \
TRANSFIGURE_API void FOnCombatGrappleExecuted_DelegateWrapper(const FMulticastScriptDelegate& OnCombatGrappleExecuted, ECombatGrappleMove MoveType);


// ********** End Delegate FOnCombatGrappleExecuted ************************************************

// ********** Begin Class UGrappleComponent ********************************************************
#define FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Grapple_GrappleComponent_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetActiveLines); \
	DECLARE_FUNCTION(execSetCurrentTier); \
	DECLARE_FUNCTION(execGetCurrentTier); \
	DECLARE_FUNCTION(execGetMomentumPreservation); \
	DECLARE_FUNCTION(execGetCurrentTierLines); \
	DECLARE_FUNCTION(execIsEnemyGrappleable); \
	DECLARE_FUNCTION(execFindWebConnectionPoints); \
	DECLARE_FUNCTION(execCanCreateWebLine); \
	DECLARE_FUNCTION(execCreateWebLine); \
	DECLARE_FUNCTION(execSetEvadeDirection); \
	DECLARE_FUNCTION(execGetCurrentState); \
	DECLARE_FUNCTION(execCancelAiming); \
	DECLARE_FUNCTION(execReleaseGrapple); \
	DECLARE_FUNCTION(execExecuteCombatMove); \
	DECLARE_FUNCTION(execFireGrapple); \
	DECLARE_FUNCTION(execStartAiming);


TRANSFIGURE_API UClass* Z_Construct_UClass_UGrappleComponent_NoRegister();

#define FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Grapple_GrappleComponent_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGrappleComponent(); \
	friend struct Z_Construct_UClass_UGrappleComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TRANSFIGURE_API UClass* Z_Construct_UClass_UGrappleComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UGrappleComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Transfigure"), Z_Construct_UClass_UGrappleComponent_NoRegister) \
	DECLARE_SERIALIZER(UGrappleComponent)


#define FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Grapple_GrappleComponent_h_21_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGrappleComponent(UGrappleComponent&&) = delete; \
	UGrappleComponent(const UGrappleComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGrappleComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGrappleComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGrappleComponent) \
	NO_API virtual ~UGrappleComponent();


#define FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Grapple_GrappleComponent_h_18_PROLOG
#define FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Grapple_GrappleComponent_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Grapple_GrappleComponent_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Grapple_GrappleComponent_h_21_INCLASS_NO_PURE_DECLS \
	FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Grapple_GrappleComponent_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGrappleComponent;

// ********** End Class UGrappleComponent **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Grapple_GrappleComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS

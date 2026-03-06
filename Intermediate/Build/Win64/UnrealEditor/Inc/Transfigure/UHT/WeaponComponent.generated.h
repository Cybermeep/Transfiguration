// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Combat/WeaponComponent.h"

#ifdef TRANSFIGURE_WeaponComponent_generated_h
#error "WeaponComponent.generated.h already included, missing '#pragma once' in WeaponComponent.h"
#endif
#define TRANSFIGURE_WeaponComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;
enum class ETransfigurationElement : uint8;
struct FHitResult;
struct FWeaponHitInfo;

// ********** Begin ScriptStruct FWeaponHitInfo ****************************************************
#define FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Combat_WeaponComponent_h_18_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FWeaponHitInfo_Statics; \
	TRANSFIGURE_API static class UScriptStruct* StaticStruct();


struct FWeaponHitInfo;
// ********** End ScriptStruct FWeaponHitInfo ******************************************************

// ********** Begin Delegate FOnWeaponHit **********************************************************
#define FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Combat_WeaponComponent_h_36_DELEGATE \
TRANSFIGURE_API void FOnWeaponHit_DelegateWrapper(const FMulticastScriptDelegate& OnWeaponHit, FWeaponHitInfo const& HitInfo);


// ********** End Delegate FOnWeaponHit ************************************************************

// ********** Begin Delegate FOnWeaponKill *********************************************************
#define FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Combat_WeaponComponent_h_37_DELEGATE \
TRANSFIGURE_API void FOnWeaponKill_DelegateWrapper(const FMulticastScriptDelegate& OnWeaponKill, AActor* KilledEnemy);


// ********** End Delegate FOnWeaponKill ***********************************************************

// ********** Begin Class UWeaponComponent *********************************************************
#define FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Combat_WeaponComponent_h_42_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnInfusionExpired); \
	DECLARE_FUNCTION(execUpdateInfusion); \
	DECLARE_FUNCTION(execApplyElementalDamage); \
	DECLARE_FUNCTION(execClearInfusion); \
	DECLARE_FUNCTION(execGetCurrentInfusion); \
	DECLARE_FUNCTION(execIsWeaponInfused); \
	DECLARE_FUNCTION(execInfuseWeaponWithElement); \
	DECLARE_FUNCTION(execOnMeleeKill); \
	DECLARE_FUNCTION(execProcessHit);


TRANSFIGURE_API UClass* Z_Construct_UClass_UWeaponComponent_NoRegister();

#define FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Combat_WeaponComponent_h_42_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWeaponComponent(); \
	friend struct Z_Construct_UClass_UWeaponComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TRANSFIGURE_API UClass* Z_Construct_UClass_UWeaponComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UWeaponComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Transfigure"), Z_Construct_UClass_UWeaponComponent_NoRegister) \
	DECLARE_SERIALIZER(UWeaponComponent)


#define FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Combat_WeaponComponent_h_42_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWeaponComponent(UWeaponComponent&&) = delete; \
	UWeaponComponent(const UWeaponComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWeaponComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWeaponComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UWeaponComponent) \
	NO_API virtual ~UWeaponComponent();


#define FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Combat_WeaponComponent_h_39_PROLOG
#define FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Combat_WeaponComponent_h_42_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Combat_WeaponComponent_h_42_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Combat_WeaponComponent_h_42_INCLASS_NO_PURE_DECLS \
	FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Combat_WeaponComponent_h_42_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWeaponComponent;

// ********** End Class UWeaponComponent ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Combat_WeaponComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS

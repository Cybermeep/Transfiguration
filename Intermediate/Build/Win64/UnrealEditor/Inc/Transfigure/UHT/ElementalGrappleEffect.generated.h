// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Grapple/ElementalGrappleEffect.h"

#ifdef TRANSFIGURE_ElementalGrappleEffect_generated_h
#error "ElementalGrappleEffect.generated.h already included, missing '#pragma once' in ElementalGrappleEffect.h"
#endif
#define TRANSFIGURE_ElementalGrappleEffect_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;
class UPrimitiveComponent;
enum class ETransfigurationElement : uint8;
struct FHitResult;

// ********** Begin Class AElementalGrappleEffect **************************************************
#define FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Grapple_ElementalGrappleEffect_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnDamageVolumeOverlap); \
	DECLARE_FUNCTION(execApplyDamageTick); \
	DECLARE_FUNCTION(execApplyEffectToEnemy); \
	DECLARE_FUNCTION(execInitializeEffect);


TRANSFIGURE_API UClass* Z_Construct_UClass_AElementalGrappleEffect_NoRegister();

#define FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Grapple_ElementalGrappleEffect_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAElementalGrappleEffect(); \
	friend struct Z_Construct_UClass_AElementalGrappleEffect_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TRANSFIGURE_API UClass* Z_Construct_UClass_AElementalGrappleEffect_NoRegister(); \
public: \
	DECLARE_CLASS2(AElementalGrappleEffect, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Transfigure"), Z_Construct_UClass_AElementalGrappleEffect_NoRegister) \
	DECLARE_SERIALIZER(AElementalGrappleEffect)


#define FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Grapple_ElementalGrappleEffect_h_16_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AElementalGrappleEffect(AElementalGrappleEffect&&) = delete; \
	AElementalGrappleEffect(const AElementalGrappleEffect&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AElementalGrappleEffect); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AElementalGrappleEffect); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AElementalGrappleEffect) \
	NO_API virtual ~AElementalGrappleEffect();


#define FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Grapple_ElementalGrappleEffect_h_13_PROLOG
#define FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Grapple_ElementalGrappleEffect_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Grapple_ElementalGrappleEffect_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Grapple_ElementalGrappleEffect_h_16_INCLASS_NO_PURE_DECLS \
	FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Grapple_ElementalGrappleEffect_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AElementalGrappleEffect;

// ********** End Class AElementalGrappleEffect ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Grapple_ElementalGrappleEffect_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS

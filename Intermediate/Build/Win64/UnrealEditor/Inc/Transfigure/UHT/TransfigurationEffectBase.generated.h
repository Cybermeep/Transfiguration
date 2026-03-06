// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Transfiguration/TransfigurationEffectBase.h"

#ifdef TRANSFIGURE_TransfigurationEffectBase_generated_h
#error "TransfigurationEffectBase.generated.h already included, missing '#pragma once' in TransfigurationEffectBase.h"
#endif
#define TRANSFIGURE_TransfigurationEffectBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;
class UTransfigurationDefinition;

// ********** Begin Class UTransfigurationEffectBase ***********************************************
#define FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Transfiguration_TransfigurationEffectBase_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execQueueEnvironmentalDestruction); \
	DECLARE_FUNCTION(execGetScaledCooldown); \
	DECLARE_FUNCTION(execGetScaledDamage);


TRANSFIGURE_API UClass* Z_Construct_UClass_UTransfigurationEffectBase_NoRegister();

#define FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Transfiguration_TransfigurationEffectBase_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTransfigurationEffectBase(); \
	friend struct Z_Construct_UClass_UTransfigurationEffectBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TRANSFIGURE_API UClass* Z_Construct_UClass_UTransfigurationEffectBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UTransfigurationEffectBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Transfigure"), Z_Construct_UClass_UTransfigurationEffectBase_NoRegister) \
	DECLARE_SERIALIZER(UTransfigurationEffectBase)


#define FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Transfiguration_TransfigurationEffectBase_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTransfigurationEffectBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTransfigurationEffectBase(UTransfigurationEffectBase&&) = delete; \
	UTransfigurationEffectBase(const UTransfigurationEffectBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTransfigurationEffectBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTransfigurationEffectBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTransfigurationEffectBase) \
	NO_API virtual ~UTransfigurationEffectBase();


#define FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Transfiguration_TransfigurationEffectBase_h_10_PROLOG
#define FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Transfiguration_TransfigurationEffectBase_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Transfiguration_TransfigurationEffectBase_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Transfiguration_TransfigurationEffectBase_h_13_INCLASS_NO_PURE_DECLS \
	FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Transfiguration_TransfigurationEffectBase_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTransfigurationEffectBase;

// ********** End Class UTransfigurationEffectBase *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Transfiguration_TransfigurationEffectBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS

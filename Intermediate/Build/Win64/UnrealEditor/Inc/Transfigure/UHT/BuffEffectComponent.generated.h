// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Transfiguration/BuffEffectComponent.h"

#ifdef TRANSFIGURE_BuffEffectComponent_generated_h
#error "BuffEffectComponent.generated.h already included, missing '#pragma once' in BuffEffectComponent.h"
#endif
#define TRANSFIGURE_BuffEffectComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

enum class EBuffType : uint8;

// ********** Begin Delegate FOnBuffApplied ********************************************************
#define FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Transfiguration_BuffEffectComponent_h_10_DELEGATE \
TRANSFIGURE_API void FOnBuffApplied_DelegateWrapper(const FMulticastScriptDelegate& OnBuffApplied, EBuffType BuffType, float Duration);


// ********** End Delegate FOnBuffApplied **********************************************************

// ********** Begin Delegate FOnBuffExpired ********************************************************
#define FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Transfiguration_BuffEffectComponent_h_11_DELEGATE \
TRANSFIGURE_API void FOnBuffExpired_DelegateWrapper(const FMulticastScriptDelegate& OnBuffExpired, EBuffType BuffType);


// ********** End Delegate FOnBuffExpired **********************************************************

// ********** Begin Class UBuffEffectComponent *****************************************************
#define FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Transfiguration_BuffEffectComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetBuffMultiplier); \
	DECLARE_FUNCTION(execHasBuff); \
	DECLARE_FUNCTION(execRemoveBuff); \
	DECLARE_FUNCTION(execApplyBuff);


TRANSFIGURE_API UClass* Z_Construct_UClass_UBuffEffectComponent_NoRegister();

#define FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Transfiguration_BuffEffectComponent_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBuffEffectComponent(); \
	friend struct Z_Construct_UClass_UBuffEffectComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TRANSFIGURE_API UClass* Z_Construct_UClass_UBuffEffectComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UBuffEffectComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Transfigure"), Z_Construct_UClass_UBuffEffectComponent_NoRegister) \
	DECLARE_SERIALIZER(UBuffEffectComponent)


#define FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Transfiguration_BuffEffectComponent_h_16_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBuffEffectComponent(UBuffEffectComponent&&) = delete; \
	UBuffEffectComponent(const UBuffEffectComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBuffEffectComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBuffEffectComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UBuffEffectComponent) \
	NO_API virtual ~UBuffEffectComponent();


#define FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Transfiguration_BuffEffectComponent_h_13_PROLOG
#define FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Transfiguration_BuffEffectComponent_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Transfiguration_BuffEffectComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Transfiguration_BuffEffectComponent_h_16_INCLASS_NO_PURE_DECLS \
	FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Transfiguration_BuffEffectComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBuffEffectComponent;

// ********** End Class UBuffEffectComponent *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Transfiguration_BuffEffectComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS

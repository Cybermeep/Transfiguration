// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Temporal/TemporalClapAnimInstance.h"

#ifdef TRANSFIGURE_TemporalClapAnimInstance_generated_h
#error "TemporalClapAnimInstance.generated.h already included, missing '#pragma once' in TemporalClapAnimInstance.h"
#endif
#define TRANSFIGURE_TemporalClapAnimInstance_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Delegate FTemporalClapAnimEvent ************************************************
#define FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Temporal_TemporalClapAnimInstance_h_11_DELEGATE \
TRANSFIGURE_API void FTemporalClapAnimEvent_DelegateWrapper(const FMulticastScriptDelegate& TemporalClapAnimEvent);


// ********** End Delegate FTemporalClapAnimEvent **************************************************

// ********** Begin Class UTemporalClapAnimInstance ************************************************
#define FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Temporal_TemporalClapAnimInstance_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execStopClapAnimation); \
	DECLARE_FUNCTION(execPlayClapAnimation);


#define FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Temporal_TemporalClapAnimInstance_h_16_CALLBACK_WRAPPERS
TRANSFIGURE_API UClass* Z_Construct_UClass_UTemporalClapAnimInstance_NoRegister();

#define FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Temporal_TemporalClapAnimInstance_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTemporalClapAnimInstance(); \
	friend struct Z_Construct_UClass_UTemporalClapAnimInstance_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TRANSFIGURE_API UClass* Z_Construct_UClass_UTemporalClapAnimInstance_NoRegister(); \
public: \
	DECLARE_CLASS2(UTemporalClapAnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Transfigure"), Z_Construct_UClass_UTemporalClapAnimInstance_NoRegister) \
	DECLARE_SERIALIZER(UTemporalClapAnimInstance)


#define FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Temporal_TemporalClapAnimInstance_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTemporalClapAnimInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTemporalClapAnimInstance(UTemporalClapAnimInstance&&) = delete; \
	UTemporalClapAnimInstance(const UTemporalClapAnimInstance&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTemporalClapAnimInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTemporalClapAnimInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTemporalClapAnimInstance) \
	NO_API virtual ~UTemporalClapAnimInstance();


#define FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Temporal_TemporalClapAnimInstance_h_13_PROLOG
#define FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Temporal_TemporalClapAnimInstance_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Temporal_TemporalClapAnimInstance_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Temporal_TemporalClapAnimInstance_h_16_CALLBACK_WRAPPERS \
	FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Temporal_TemporalClapAnimInstance_h_16_INCLASS_NO_PURE_DECLS \
	FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Temporal_TemporalClapAnimInstance_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTemporalClapAnimInstance;

// ********** End Class UTemporalClapAnimInstance **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Temporal_TemporalClapAnimInstance_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS

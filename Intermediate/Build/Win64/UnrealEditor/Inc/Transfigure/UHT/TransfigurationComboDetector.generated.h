// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Transfiguration/TransfigurationComboDetector.h"

#ifdef TRANSFIGURE_TransfigurationComboDetector_generated_h
#error "TransfigurationComboDetector.generated.h already included, missing '#pragma once' in TransfigurationComboDetector.h"
#endif
#define TRANSFIGURE_TransfigurationComboDetector_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

enum class ETransfigurationElement : uint8;

// ********** Begin Delegate FOnComboDetected ******************************************************
#define FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Transfiguration_TransfigurationComboDetector_h_12_DELEGATE \
TRANSFIGURE_API void FOnComboDetected_DelegateWrapper(const FMulticastScriptDelegate& OnComboDetected, FName ComboSpellID);


// ********** End Delegate FOnComboDetected ********************************************************

// ********** Begin Delegate FOnChainProgress ******************************************************
#define FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Transfiguration_TransfigurationComboDetector_h_13_DELEGATE \
TRANSFIGURE_API void FOnChainProgress_DelegateWrapper(const FMulticastScriptDelegate& OnChainProgress, int32 ChainLength);


// ********** End Delegate FOnChainProgress ********************************************************

// ********** Begin Class UTransfigurationComboDetector ********************************************
#define FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Transfiguration_TransfigurationComboDetector_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execResetComboChain); \
	DECLARE_FUNCTION(execAddToComboChain); \
	DECLARE_FUNCTION(execStartComboChain);


TRANSFIGURE_API UClass* Z_Construct_UClass_UTransfigurationComboDetector_NoRegister();

#define FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Transfiguration_TransfigurationComboDetector_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTransfigurationComboDetector(); \
	friend struct Z_Construct_UClass_UTransfigurationComboDetector_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TRANSFIGURE_API UClass* Z_Construct_UClass_UTransfigurationComboDetector_NoRegister(); \
public: \
	DECLARE_CLASS2(UTransfigurationComboDetector, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Transfigure"), Z_Construct_UClass_UTransfigurationComboDetector_NoRegister) \
	DECLARE_SERIALIZER(UTransfigurationComboDetector)


#define FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Transfiguration_TransfigurationComboDetector_h_18_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTransfigurationComboDetector(UTransfigurationComboDetector&&) = delete; \
	UTransfigurationComboDetector(const UTransfigurationComboDetector&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTransfigurationComboDetector); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTransfigurationComboDetector); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTransfigurationComboDetector) \
	NO_API virtual ~UTransfigurationComboDetector();


#define FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Transfiguration_TransfigurationComboDetector_h_15_PROLOG
#define FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Transfiguration_TransfigurationComboDetector_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Transfiguration_TransfigurationComboDetector_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Transfiguration_TransfigurationComboDetector_h_18_INCLASS_NO_PURE_DECLS \
	FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Transfiguration_TransfigurationComboDetector_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTransfigurationComboDetector;

// ********** End Class UTransfigurationComboDetector **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Transfiguration_TransfigurationComboDetector_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS

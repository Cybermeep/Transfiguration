// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Transfiguration/TransfigurationGameInstance.h"

#ifdef TRANSFIGURE_TransfigurationGameInstance_generated_h
#error "TransfigurationGameInstance.generated.h already included, missing '#pragma once' in TransfigurationGameInstance.h"
#endif
#define TRANSFIGURE_TransfigurationGameInstance_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UTransfigurationRegistry;

// ********** Begin Class UTransfigurationGameInstance *********************************************
#define FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Transfiguration_TransfigurationGameInstance_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetSpellRegistry);


TRANSFIGURE_API UClass* Z_Construct_UClass_UTransfigurationGameInstance_NoRegister();

#define FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Transfiguration_TransfigurationGameInstance_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTransfigurationGameInstance(); \
	friend struct Z_Construct_UClass_UTransfigurationGameInstance_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TRANSFIGURE_API UClass* Z_Construct_UClass_UTransfigurationGameInstance_NoRegister(); \
public: \
	DECLARE_CLASS2(UTransfigurationGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Transfigure"), Z_Construct_UClass_UTransfigurationGameInstance_NoRegister) \
	DECLARE_SERIALIZER(UTransfigurationGameInstance)


#define FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Transfiguration_TransfigurationGameInstance_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTransfigurationGameInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTransfigurationGameInstance(UTransfigurationGameInstance&&) = delete; \
	UTransfigurationGameInstance(const UTransfigurationGameInstance&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTransfigurationGameInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTransfigurationGameInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTransfigurationGameInstance) \
	NO_API virtual ~UTransfigurationGameInstance();


#define FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Transfiguration_TransfigurationGameInstance_h_10_PROLOG
#define FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Transfiguration_TransfigurationGameInstance_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Transfiguration_TransfigurationGameInstance_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Transfiguration_TransfigurationGameInstance_h_13_INCLASS_NO_PURE_DECLS \
	FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Transfiguration_TransfigurationGameInstance_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTransfigurationGameInstance;

// ********** End Class UTransfigurationGameInstance ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Transfiguration_TransfigurationGameInstance_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS

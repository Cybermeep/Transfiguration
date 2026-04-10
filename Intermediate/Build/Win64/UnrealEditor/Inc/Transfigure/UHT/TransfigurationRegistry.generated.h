// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Transfiguration/TransfigurationRegistry.h"

#ifdef TRANSFIGURE_TransfigurationRegistry_generated_h
#error "TransfigurationRegistry.generated.h already included, missing '#pragma once' in TransfigurationRegistry.h"
#endif
#define TRANSFIGURE_TransfigurationRegistry_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UTransfigurationDefinition;
enum class ETransfigurationElement : uint8;

// ********** Begin Class UTransfigurationRegistry *************************************************
#define FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Transfiguration_TransfigurationRegistry_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetAllSpellIDs); \
	DECLARE_FUNCTION(execHasSpell); \
	DECLARE_FUNCTION(execGetSpellsByElement); \
	DECLARE_FUNCTION(execGetSpell);


TRANSFIGURE_API UClass* Z_Construct_UClass_UTransfigurationRegistry_NoRegister();

#define FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Transfiguration_TransfigurationRegistry_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTransfigurationRegistry(); \
	friend struct Z_Construct_UClass_UTransfigurationRegistry_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TRANSFIGURE_API UClass* Z_Construct_UClass_UTransfigurationRegistry_NoRegister(); \
public: \
	DECLARE_CLASS2(UTransfigurationRegistry, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Transfigure"), Z_Construct_UClass_UTransfigurationRegistry_NoRegister) \
	DECLARE_SERIALIZER(UTransfigurationRegistry)


#define FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Transfiguration_TransfigurationRegistry_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTransfigurationRegistry(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTransfigurationRegistry(UTransfigurationRegistry&&) = delete; \
	UTransfigurationRegistry(const UTransfigurationRegistry&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTransfigurationRegistry); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTransfigurationRegistry); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTransfigurationRegistry) \
	NO_API virtual ~UTransfigurationRegistry();


#define FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Transfiguration_TransfigurationRegistry_h_11_PROLOG
#define FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Transfiguration_TransfigurationRegistry_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Transfiguration_TransfigurationRegistry_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Transfiguration_TransfigurationRegistry_h_14_INCLASS_NO_PURE_DECLS \
	FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Transfiguration_TransfigurationRegistry_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTransfigurationRegistry;

// ********** End Class UTransfigurationRegistry ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Transfiguration_TransfigurationRegistry_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS

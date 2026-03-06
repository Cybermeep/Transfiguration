// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Transfiguration/SigilActor.h"

#ifdef TRANSFIGURE_SigilActor_generated_h
#error "SigilActor.generated.h already included, missing '#pragma once' in SigilActor.h"
#endif
#define TRANSFIGURE_SigilActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;
class ASigilActor;
class UPrimitiveComponent;
class UTransfigurationDefinition;
struct FHitResult;

// ********** Begin Delegate FOnSigilTriggered *****************************************************
#define FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Transfiguration_SigilActor_h_14_DELEGATE \
TRANSFIGURE_API void FOnSigilTriggered_DelegateWrapper(const FMulticastScriptDelegate& OnSigilTriggered, ASigilActor* TriggeredSigil);


// ********** End Delegate FOnSigilTriggered *******************************************************

// ********** Begin Class ASigilActor **************************************************************
#define FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Transfiguration_SigilActor_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnProximityOverlap); \
	DECLARE_FUNCTION(execGetSpellDefinition); \
	DECLARE_FUNCTION(execIsArmed); \
	DECLARE_FUNCTION(execTriggerManual); \
	DECLARE_FUNCTION(execInitialize);


#define FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Transfiguration_SigilActor_h_19_CALLBACK_WRAPPERS
TRANSFIGURE_API UClass* Z_Construct_UClass_ASigilActor_NoRegister();

#define FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Transfiguration_SigilActor_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASigilActor(); \
	friend struct Z_Construct_UClass_ASigilActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TRANSFIGURE_API UClass* Z_Construct_UClass_ASigilActor_NoRegister(); \
public: \
	DECLARE_CLASS2(ASigilActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Transfigure"), Z_Construct_UClass_ASigilActor_NoRegister) \
	DECLARE_SERIALIZER(ASigilActor)


#define FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Transfiguration_SigilActor_h_19_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ASigilActor(ASigilActor&&) = delete; \
	ASigilActor(const ASigilActor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASigilActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASigilActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASigilActor) \
	NO_API virtual ~ASigilActor();


#define FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Transfiguration_SigilActor_h_16_PROLOG
#define FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Transfiguration_SigilActor_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Transfiguration_SigilActor_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Transfiguration_SigilActor_h_19_CALLBACK_WRAPPERS \
	FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Transfiguration_SigilActor_h_19_INCLASS_NO_PURE_DECLS \
	FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Transfiguration_SigilActor_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ASigilActor;

// ********** End Class ASigilActor ****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Transfiguration_SigilActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS

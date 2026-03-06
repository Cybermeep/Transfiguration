// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Transfiguration/PersistentSigilActor.h"

#ifdef TRANSFIGURE_PersistentSigilActor_generated_h
#error "PersistentSigilActor.generated.h already included, missing '#pragma once' in PersistentSigilActor.h"
#endif
#define TRANSFIGURE_PersistentSigilActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;
class UPrimitiveComponent;
struct FHitResult;

// ********** Begin Class APersistentSigilActor ****************************************************
#define FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Transfiguration_PersistentSigilActor_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnTriggerVolumeEndOverlap); \
	DECLARE_FUNCTION(execOnTriggerVolumeOverlap); \
	DECLARE_FUNCTION(execApplyBuffToOverlappingActors); \
	DECLARE_FUNCTION(execApplyHealingToOverlappingActors);


TRANSFIGURE_API UClass* Z_Construct_UClass_APersistentSigilActor_NoRegister();

#define FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Transfiguration_PersistentSigilActor_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPersistentSigilActor(); \
	friend struct Z_Construct_UClass_APersistentSigilActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TRANSFIGURE_API UClass* Z_Construct_UClass_APersistentSigilActor_NoRegister(); \
public: \
	DECLARE_CLASS2(APersistentSigilActor, ASigilActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Transfigure"), Z_Construct_UClass_APersistentSigilActor_NoRegister) \
	DECLARE_SERIALIZER(APersistentSigilActor)


#define FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Transfiguration_PersistentSigilActor_h_14_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	APersistentSigilActor(APersistentSigilActor&&) = delete; \
	APersistentSigilActor(const APersistentSigilActor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APersistentSigilActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APersistentSigilActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APersistentSigilActor) \
	NO_API virtual ~APersistentSigilActor();


#define FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Transfiguration_PersistentSigilActor_h_11_PROLOG
#define FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Transfiguration_PersistentSigilActor_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Transfiguration_PersistentSigilActor_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Transfiguration_PersistentSigilActor_h_14_INCLASS_NO_PURE_DECLS \
	FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Transfiguration_PersistentSigilActor_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class APersistentSigilActor;

// ********** End Class APersistentSigilActor ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Transfiguration_PersistentSigilActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS

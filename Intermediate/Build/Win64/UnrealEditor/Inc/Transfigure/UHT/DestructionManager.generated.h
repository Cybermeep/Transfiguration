// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Destruction/DestructionManager.h"

#ifdef TRANSFIGURE_DestructionManager_generated_h
#error "DestructionManager.generated.h already included, missing '#pragma once' in DestructionManager.h"
#endif
#define TRANSFIGURE_DestructionManager_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;
class ADestructionManager;
class UWorld;

// ********** Begin Delegate FOnDestructionProcessed ***********************************************
#define FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Destruction_DestructionManager_h_14_DELEGATE \
TRANSFIGURE_API void FOnDestructionProcessed_DelegateWrapper(const FMulticastScriptDelegate& OnDestructionProcessed, FVector Location, float Radius);


// ********** End Delegate FOnDestructionProcessed *************************************************

// ********** Begin Class ADestructionManager ******************************************************
#define FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Destruction_DestructionManager_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetInstance); \
	DECLARE_FUNCTION(execProcessDestructionQueue); \
	DECLARE_FUNCTION(execQueueDestruction);


TRANSFIGURE_API UClass* Z_Construct_UClass_ADestructionManager_NoRegister();

#define FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Destruction_DestructionManager_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADestructionManager(); \
	friend struct Z_Construct_UClass_ADestructionManager_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TRANSFIGURE_API UClass* Z_Construct_UClass_ADestructionManager_NoRegister(); \
public: \
	DECLARE_CLASS2(ADestructionManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Transfigure"), Z_Construct_UClass_ADestructionManager_NoRegister) \
	DECLARE_SERIALIZER(ADestructionManager)


#define FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Destruction_DestructionManager_h_19_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ADestructionManager(ADestructionManager&&) = delete; \
	ADestructionManager(const ADestructionManager&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADestructionManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADestructionManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADestructionManager) \
	NO_API virtual ~ADestructionManager();


#define FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Destruction_DestructionManager_h_16_PROLOG
#define FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Destruction_DestructionManager_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Destruction_DestructionManager_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Destruction_DestructionManager_h_19_INCLASS_NO_PURE_DECLS \
	FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Destruction_DestructionManager_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ADestructionManager;

// ********** End Class ADestructionManager ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Destruction_DestructionManager_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS

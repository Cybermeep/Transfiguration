// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Destruction/DestructibleChunk.h"

#ifdef TRANSFIGURE_DestructibleChunk_generated_h
#error "DestructibleChunk.generated.h already included, missing '#pragma once' in DestructibleChunk.h"
#endif
#define TRANSFIGURE_DestructibleChunk_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UProceduralMeshComponent;
struct FChunkCollisionData;

// ********** Begin ScriptStruct FChunkCollisionData ***********************************************
#define FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Destruction_DestructibleChunk_h_14_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FChunkCollisionData_Statics; \
	TRANSFIGURE_API static class UScriptStruct* StaticStruct();


struct FChunkCollisionData;
// ********** End ScriptStruct FChunkCollisionData *************************************************

// ********** Begin Class ADestructibleChunk *******************************************************
#define FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Destruction_DestructibleChunk_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnPhysicsSleep); \
	DECLARE_FUNCTION(execApplyPhysics); \
	DECLARE_FUNCTION(execGetCollisionData); \
	DECLARE_FUNCTION(execIsValid); \
	DECLARE_FUNCTION(execApplyDamage); \
	DECLARE_FUNCTION(execInitializeFromMesh);


TRANSFIGURE_API UClass* Z_Construct_UClass_ADestructibleChunk_NoRegister();

#define FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Destruction_DestructibleChunk_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADestructibleChunk(); \
	friend struct Z_Construct_UClass_ADestructibleChunk_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TRANSFIGURE_API UClass* Z_Construct_UClass_ADestructibleChunk_NoRegister(); \
public: \
	DECLARE_CLASS2(ADestructibleChunk, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Transfigure"), Z_Construct_UClass_ADestructibleChunk_NoRegister) \
	DECLARE_SERIALIZER(ADestructibleChunk)


#define FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Destruction_DestructibleChunk_h_32_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ADestructibleChunk(ADestructibleChunk&&) = delete; \
	ADestructibleChunk(const ADestructibleChunk&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADestructibleChunk); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADestructibleChunk); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADestructibleChunk) \
	NO_API virtual ~ADestructibleChunk();


#define FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Destruction_DestructibleChunk_h_29_PROLOG
#define FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Destruction_DestructibleChunk_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Destruction_DestructibleChunk_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Destruction_DestructibleChunk_h_32_INCLASS_NO_PURE_DECLS \
	FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Destruction_DestructibleChunk_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ADestructibleChunk;

// ********** End Class ADestructibleChunk *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Destruction_DestructibleChunk_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS

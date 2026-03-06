// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Destruction/DestructibleSurface.h"

#ifdef TRANSFIGURE_DestructibleSurface_generated_h
#error "DestructibleSurface.generated.h already included, missing '#pragma once' in DestructibleSurface.h"
#endif
#define TRANSFIGURE_DestructibleSurface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ADestructibleSurface *****************************************************
#define FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Destruction_DestructibleSurface_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCompleteRepair); \
	DECLARE_FUNCTION(execStartRepair); \
	DECLARE_FUNCTION(execApplyDamageVisuals); \
	DECLARE_FUNCTION(execCleanupOldDamageZones); \
	DECLARE_FUNCTION(execRepairSurface); \
	DECLARE_FUNCTION(execGetSurfaceIntegrity); \
	DECLARE_FUNCTION(execRegisterDestruction); \
	DECLARE_FUNCTION(execCanPlaceSigilAtLocation);


TRANSFIGURE_API UClass* Z_Construct_UClass_ADestructibleSurface_NoRegister();

#define FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Destruction_DestructibleSurface_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADestructibleSurface(); \
	friend struct Z_Construct_UClass_ADestructibleSurface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TRANSFIGURE_API UClass* Z_Construct_UClass_ADestructibleSurface_NoRegister(); \
public: \
	DECLARE_CLASS2(ADestructibleSurface, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Transfigure"), Z_Construct_UClass_ADestructibleSurface_NoRegister) \
	DECLARE_SERIALIZER(ADestructibleSurface)


#define FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Destruction_DestructibleSurface_h_12_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ADestructibleSurface(ADestructibleSurface&&) = delete; \
	ADestructibleSurface(const ADestructibleSurface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADestructibleSurface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADestructibleSurface); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADestructibleSurface) \
	NO_API virtual ~ADestructibleSurface();


#define FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Destruction_DestructibleSurface_h_9_PROLOG
#define FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Destruction_DestructibleSurface_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Destruction_DestructibleSurface_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Destruction_DestructibleSurface_h_12_INCLASS_NO_PURE_DECLS \
	FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Destruction_DestructibleSurface_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ADestructibleSurface;

// ********** End Class ADestructibleSurface *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Destruction_DestructibleSurface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS

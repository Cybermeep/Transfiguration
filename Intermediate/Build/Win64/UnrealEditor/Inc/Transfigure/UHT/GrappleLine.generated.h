// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Grapple/GrappleLine.h"

#ifdef TRANSFIGURE_GrappleLine_generated_h
#error "GrappleLine.generated.h already included, missing '#pragma once' in GrappleLine.h"
#endif
#define TRANSFIGURE_GrappleLine_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AGrappleLine;
enum class ETransfigurationElement : uint8;
struct FGrappleLineData;

// ********** Begin Class AGrappleLine *************************************************************
#define FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Grapple_GrappleLine_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execApplyEarthEffect); \
	DECLARE_FUNCTION(execApplyVoidEffect); \
	DECLARE_FUNCTION(execApplyLightningEffect); \
	DECLARE_FUNCTION(execApplyIceEffect); \
	DECLARE_FUNCTION(execApplyFireEffect); \
	DECLARE_FUNCTION(execCreateWebIntersection); \
	DECLARE_FUNCTION(execCanConnectTo); \
	DECLARE_FUNCTION(execApplyElementalEffectAtLocation); \
	DECLARE_FUNCTION(execApplyElementalTrail); \
	DECLARE_FUNCTION(execGetLineData); \
	DECLARE_FUNCTION(execIsLineValid); \
	DECLARE_FUNCTION(execExpireLine); \
	DECLARE_FUNCTION(execStartLifespan); \
	DECLARE_FUNCTION(execInitializeLine);


#define FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Grapple_GrappleLine_h_16_CALLBACK_WRAPPERS
TRANSFIGURE_API UClass* Z_Construct_UClass_AGrappleLine_NoRegister();

#define FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Grapple_GrappleLine_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGrappleLine(); \
	friend struct Z_Construct_UClass_AGrappleLine_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TRANSFIGURE_API UClass* Z_Construct_UClass_AGrappleLine_NoRegister(); \
public: \
	DECLARE_CLASS2(AGrappleLine, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Transfigure"), Z_Construct_UClass_AGrappleLine_NoRegister) \
	DECLARE_SERIALIZER(AGrappleLine)


#define FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Grapple_GrappleLine_h_16_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AGrappleLine(AGrappleLine&&) = delete; \
	AGrappleLine(const AGrappleLine&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGrappleLine); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGrappleLine); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGrappleLine) \
	NO_API virtual ~AGrappleLine();


#define FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Grapple_GrappleLine_h_13_PROLOG
#define FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Grapple_GrappleLine_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Grapple_GrappleLine_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Grapple_GrappleLine_h_16_CALLBACK_WRAPPERS \
	FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Grapple_GrappleLine_h_16_INCLASS_NO_PURE_DECLS \
	FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Grapple_GrappleLine_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AGrappleLine;

// ********** End Class AGrappleLine ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Grapple_GrappleLine_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Transfiguration/PortalSigilActor.h"

#ifdef TRANSFIGURE_PortalSigilActor_generated_h
#error "PortalSigilActor.generated.h already included, missing '#pragma once' in PortalSigilActor.h"
#endif
#define TRANSFIGURE_PortalSigilActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;
class APortalSigilActor;
class UPrimitiveComponent;
struct FHitResult;

// ********** Begin Delegate FOnPlayerTeleported ***************************************************
#define FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Transfiguration_PortalSigilActor_h_12_DELEGATE \
TRANSFIGURE_API void FOnPlayerTeleported_DelegateWrapper(const FMulticastScriptDelegate& OnPlayerTeleported, APortalSigilActor* SourcePortal, APortalSigilActor* DestinationPortal);


// ********** End Delegate FOnPlayerTeleported *****************************************************

// ********** Begin Delegate FOnPortalActivated ****************************************************
#define FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Transfiguration_PortalSigilActor_h_13_DELEGATE \
TRANSFIGURE_API void FOnPortalActivated_DelegateWrapper(const FMulticastScriptDelegate& OnPortalActivated, APortalSigilActor* Portal);


// ********** End Delegate FOnPortalActivated ******************************************************

// ********** Begin Delegate FOnPortalDeactivated **************************************************
#define FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Transfiguration_PortalSigilActor_h_14_DELEGATE \
TRANSFIGURE_API void FOnPortalDeactivated_DelegateWrapper(const FMulticastScriptDelegate& OnPortalDeactivated, APortalSigilActor* Portal);


// ********** End Delegate FOnPortalDeactivated ****************************************************

// ********** Begin Class APortalSigilActor ********************************************************
#define FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Transfiguration_PortalSigilActor_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnCooldownComplete); \
	DECLARE_FUNCTION(execOnTeleportTriggerOverlap); \
	DECLARE_FUNCTION(execGetExitTransform); \
	DECLARE_FUNCTION(execCanTeleportActor); \
	DECLARE_FUNCTION(execTeleportActor); \
	DECLARE_FUNCTION(execIsPortalActive); \
	DECLARE_FUNCTION(execDeactivatePortal); \
	DECLARE_FUNCTION(execActivatePortal); \
	DECLARE_FUNCTION(execIsLinked); \
	DECLARE_FUNCTION(execGetLinkedPortal); \
	DECLARE_FUNCTION(execUnlinkPortal); \
	DECLARE_FUNCTION(execLinkToPortal);


#define FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Transfiguration_PortalSigilActor_h_19_CALLBACK_WRAPPERS
TRANSFIGURE_API UClass* Z_Construct_UClass_APortalSigilActor_NoRegister();

#define FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Transfiguration_PortalSigilActor_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPortalSigilActor(); \
	friend struct Z_Construct_UClass_APortalSigilActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TRANSFIGURE_API UClass* Z_Construct_UClass_APortalSigilActor_NoRegister(); \
public: \
	DECLARE_CLASS2(APortalSigilActor, ASigilActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Transfigure"), Z_Construct_UClass_APortalSigilActor_NoRegister) \
	DECLARE_SERIALIZER(APortalSigilActor)


#define FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Transfiguration_PortalSigilActor_h_19_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	APortalSigilActor(APortalSigilActor&&) = delete; \
	APortalSigilActor(const APortalSigilActor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APortalSigilActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APortalSigilActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APortalSigilActor) \
	NO_API virtual ~APortalSigilActor();


#define FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Transfiguration_PortalSigilActor_h_16_PROLOG
#define FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Transfiguration_PortalSigilActor_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Transfiguration_PortalSigilActor_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Transfiguration_PortalSigilActor_h_19_CALLBACK_WRAPPERS \
	FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Transfiguration_PortalSigilActor_h_19_INCLASS_NO_PURE_DECLS \
	FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Transfiguration_PortalSigilActor_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class APortalSigilActor;

// ********** End Class APortalSigilActor **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Transfiguration_PortalSigilActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS

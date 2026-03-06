// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PortalSigilActor.h"
#include "Engine/HitResult.h"
#include "Engine/TimerHandle.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodePortalSigilActor() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBillboardComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
TRANSFIGURE_API UClass* Z_Construct_UClass_APortalSigilActor();
TRANSFIGURE_API UClass* Z_Construct_UClass_APortalSigilActor_NoRegister();
TRANSFIGURE_API UClass* Z_Construct_UClass_ASigilActor();
TRANSFIGURE_API UFunction* Z_Construct_UDelegateFunction_Transfigure_OnPlayerTeleported__DelegateSignature();
TRANSFIGURE_API UFunction* Z_Construct_UDelegateFunction_Transfigure_OnPortalActivated__DelegateSignature();
TRANSFIGURE_API UFunction* Z_Construct_UDelegateFunction_Transfigure_OnPortalDeactivated__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_Transfigure();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnPlayerTeleported ***************************************************
struct Z_Construct_UDelegateFunction_Transfigure_OnPlayerTeleported__DelegateSignature_Statics
{
	struct _Script_Transfigure_eventOnPlayerTeleported_Parms
	{
		APortalSigilActor* SourcePortal;
		APortalSigilActor* DestinationPortal;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Transfiguration/PortalSigilActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SourcePortal;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DestinationPortal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Transfigure_OnPlayerTeleported__DelegateSignature_Statics::NewProp_SourcePortal = { "SourcePortal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Transfigure_eventOnPlayerTeleported_Parms, SourcePortal), Z_Construct_UClass_APortalSigilActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Transfigure_OnPlayerTeleported__DelegateSignature_Statics::NewProp_DestinationPortal = { "DestinationPortal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Transfigure_eventOnPlayerTeleported_Parms, DestinationPortal), Z_Construct_UClass_APortalSigilActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Transfigure_OnPlayerTeleported__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Transfigure_OnPlayerTeleported__DelegateSignature_Statics::NewProp_SourcePortal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Transfigure_OnPlayerTeleported__DelegateSignature_Statics::NewProp_DestinationPortal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Transfigure_OnPlayerTeleported__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_Transfigure_OnPlayerTeleported__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_Transfigure, nullptr, "OnPlayerTeleported__DelegateSignature", Z_Construct_UDelegateFunction_Transfigure_OnPlayerTeleported__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Transfigure_OnPlayerTeleported__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Transfigure_OnPlayerTeleported__DelegateSignature_Statics::_Script_Transfigure_eventOnPlayerTeleported_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Transfigure_OnPlayerTeleported__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Transfigure_OnPlayerTeleported__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_Transfigure_OnPlayerTeleported__DelegateSignature_Statics::_Script_Transfigure_eventOnPlayerTeleported_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_Transfigure_OnPlayerTeleported__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Transfigure_OnPlayerTeleported__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnPlayerTeleported_DelegateWrapper(const FMulticastScriptDelegate& OnPlayerTeleported, APortalSigilActor* SourcePortal, APortalSigilActor* DestinationPortal)
{
	struct _Script_Transfigure_eventOnPlayerTeleported_Parms
	{
		APortalSigilActor* SourcePortal;
		APortalSigilActor* DestinationPortal;
	};
	_Script_Transfigure_eventOnPlayerTeleported_Parms Parms;
	Parms.SourcePortal=SourcePortal;
	Parms.DestinationPortal=DestinationPortal;
	OnPlayerTeleported.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnPlayerTeleported *****************************************************

// ********** Begin Delegate FOnPortalActivated ****************************************************
struct Z_Construct_UDelegateFunction_Transfigure_OnPortalActivated__DelegateSignature_Statics
{
	struct _Script_Transfigure_eventOnPortalActivated_Parms
	{
		APortalSigilActor* Portal;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Transfiguration/PortalSigilActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Portal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Transfigure_OnPortalActivated__DelegateSignature_Statics::NewProp_Portal = { "Portal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Transfigure_eventOnPortalActivated_Parms, Portal), Z_Construct_UClass_APortalSigilActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Transfigure_OnPortalActivated__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Transfigure_OnPortalActivated__DelegateSignature_Statics::NewProp_Portal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Transfigure_OnPortalActivated__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_Transfigure_OnPortalActivated__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_Transfigure, nullptr, "OnPortalActivated__DelegateSignature", Z_Construct_UDelegateFunction_Transfigure_OnPortalActivated__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Transfigure_OnPortalActivated__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Transfigure_OnPortalActivated__DelegateSignature_Statics::_Script_Transfigure_eventOnPortalActivated_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Transfigure_OnPortalActivated__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Transfigure_OnPortalActivated__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_Transfigure_OnPortalActivated__DelegateSignature_Statics::_Script_Transfigure_eventOnPortalActivated_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_Transfigure_OnPortalActivated__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Transfigure_OnPortalActivated__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnPortalActivated_DelegateWrapper(const FMulticastScriptDelegate& OnPortalActivated, APortalSigilActor* Portal)
{
	struct _Script_Transfigure_eventOnPortalActivated_Parms
	{
		APortalSigilActor* Portal;
	};
	_Script_Transfigure_eventOnPortalActivated_Parms Parms;
	Parms.Portal=Portal;
	OnPortalActivated.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnPortalActivated ******************************************************

// ********** Begin Delegate FOnPortalDeactivated **************************************************
struct Z_Construct_UDelegateFunction_Transfigure_OnPortalDeactivated__DelegateSignature_Statics
{
	struct _Script_Transfigure_eventOnPortalDeactivated_Parms
	{
		APortalSigilActor* Portal;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Transfiguration/PortalSigilActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Portal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Transfigure_OnPortalDeactivated__DelegateSignature_Statics::NewProp_Portal = { "Portal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Transfigure_eventOnPortalDeactivated_Parms, Portal), Z_Construct_UClass_APortalSigilActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Transfigure_OnPortalDeactivated__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Transfigure_OnPortalDeactivated__DelegateSignature_Statics::NewProp_Portal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Transfigure_OnPortalDeactivated__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_Transfigure_OnPortalDeactivated__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_Transfigure, nullptr, "OnPortalDeactivated__DelegateSignature", Z_Construct_UDelegateFunction_Transfigure_OnPortalDeactivated__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Transfigure_OnPortalDeactivated__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Transfigure_OnPortalDeactivated__DelegateSignature_Statics::_Script_Transfigure_eventOnPortalDeactivated_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Transfigure_OnPortalDeactivated__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Transfigure_OnPortalDeactivated__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_Transfigure_OnPortalDeactivated__DelegateSignature_Statics::_Script_Transfigure_eventOnPortalDeactivated_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_Transfigure_OnPortalDeactivated__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Transfigure_OnPortalDeactivated__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnPortalDeactivated_DelegateWrapper(const FMulticastScriptDelegate& OnPortalDeactivated, APortalSigilActor* Portal)
{
	struct _Script_Transfigure_eventOnPortalDeactivated_Parms
	{
		APortalSigilActor* Portal;
	};
	_Script_Transfigure_eventOnPortalDeactivated_Parms Parms;
	Parms.Portal=Portal;
	OnPortalDeactivated.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnPortalDeactivated ****************************************************

// ********** Begin Class APortalSigilActor Function ActivatePortal ********************************
struct Z_Construct_UFunction_APortalSigilActor_ActivatePortal_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Portal" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Portal state\n" },
#endif
		{ "ModuleRelativePath", "Transfiguration/PortalSigilActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Portal state" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APortalSigilActor_ActivatePortal_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APortalSigilActor, nullptr, "ActivatePortal", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APortalSigilActor_ActivatePortal_Statics::Function_MetaDataParams), Z_Construct_UFunction_APortalSigilActor_ActivatePortal_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_APortalSigilActor_ActivatePortal()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APortalSigilActor_ActivatePortal_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APortalSigilActor::execActivatePortal)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ActivatePortal();
	P_NATIVE_END;
}
// ********** End Class APortalSigilActor Function ActivatePortal **********************************

// ********** Begin Class APortalSigilActor Function CanTeleportActor ******************************
struct Z_Construct_UFunction_APortalSigilActor_CanTeleportActor_Statics
{
	struct PortalSigilActor_eventCanTeleportActor_Parms
	{
		AActor* ActorToTeleport;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Portal" },
		{ "ModuleRelativePath", "Transfiguration/PortalSigilActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorToTeleport;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APortalSigilActor_CanTeleportActor_Statics::NewProp_ActorToTeleport = { "ActorToTeleport", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PortalSigilActor_eventCanTeleportActor_Parms, ActorToTeleport), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_APortalSigilActor_CanTeleportActor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PortalSigilActor_eventCanTeleportActor_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APortalSigilActor_CanTeleportActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PortalSigilActor_eventCanTeleportActor_Parms), &Z_Construct_UFunction_APortalSigilActor_CanTeleportActor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APortalSigilActor_CanTeleportActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APortalSigilActor_CanTeleportActor_Statics::NewProp_ActorToTeleport,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APortalSigilActor_CanTeleportActor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APortalSigilActor_CanTeleportActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APortalSigilActor_CanTeleportActor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APortalSigilActor, nullptr, "CanTeleportActor", Z_Construct_UFunction_APortalSigilActor_CanTeleportActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APortalSigilActor_CanTeleportActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_APortalSigilActor_CanTeleportActor_Statics::PortalSigilActor_eventCanTeleportActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APortalSigilActor_CanTeleportActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_APortalSigilActor_CanTeleportActor_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_APortalSigilActor_CanTeleportActor_Statics::PortalSigilActor_eventCanTeleportActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APortalSigilActor_CanTeleportActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APortalSigilActor_CanTeleportActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APortalSigilActor::execCanTeleportActor)
{
	P_GET_OBJECT(AActor,Z_Param_ActorToTeleport);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanTeleportActor(Z_Param_ActorToTeleport);
	P_NATIVE_END;
}
// ********** End Class APortalSigilActor Function CanTeleportActor ********************************

// ********** Begin Class APortalSigilActor Function DeactivatePortal ******************************
struct Z_Construct_UFunction_APortalSigilActor_DeactivatePortal_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Portal" },
		{ "ModuleRelativePath", "Transfiguration/PortalSigilActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APortalSigilActor_DeactivatePortal_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APortalSigilActor, nullptr, "DeactivatePortal", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APortalSigilActor_DeactivatePortal_Statics::Function_MetaDataParams), Z_Construct_UFunction_APortalSigilActor_DeactivatePortal_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_APortalSigilActor_DeactivatePortal()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APortalSigilActor_DeactivatePortal_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APortalSigilActor::execDeactivatePortal)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DeactivatePortal();
	P_NATIVE_END;
}
// ********** End Class APortalSigilActor Function DeactivatePortal ********************************

// ********** Begin Class APortalSigilActor Function GetExitTransform ******************************
struct Z_Construct_UFunction_APortalSigilActor_GetExitTransform_Statics
{
	struct PortalSigilActor_eventGetExitTransform_Parms
	{
		AActor* TeleportingActor;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Portal" },
		{ "ModuleRelativePath", "Transfiguration/PortalSigilActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TeleportingActor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APortalSigilActor_GetExitTransform_Statics::NewProp_TeleportingActor = { "TeleportingActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PortalSigilActor_eventGetExitTransform_Parms, TeleportingActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APortalSigilActor_GetExitTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PortalSigilActor_eventGetExitTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APortalSigilActor_GetExitTransform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APortalSigilActor_GetExitTransform_Statics::NewProp_TeleportingActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APortalSigilActor_GetExitTransform_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APortalSigilActor_GetExitTransform_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APortalSigilActor_GetExitTransform_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APortalSigilActor, nullptr, "GetExitTransform", Z_Construct_UFunction_APortalSigilActor_GetExitTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APortalSigilActor_GetExitTransform_Statics::PropPointers), sizeof(Z_Construct_UFunction_APortalSigilActor_GetExitTransform_Statics::PortalSigilActor_eventGetExitTransform_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APortalSigilActor_GetExitTransform_Statics::Function_MetaDataParams), Z_Construct_UFunction_APortalSigilActor_GetExitTransform_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_APortalSigilActor_GetExitTransform_Statics::PortalSigilActor_eventGetExitTransform_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APortalSigilActor_GetExitTransform()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APortalSigilActor_GetExitTransform_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APortalSigilActor::execGetExitTransform)
{
	P_GET_OBJECT(AActor,Z_Param_TeleportingActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetExitTransform(Z_Param_TeleportingActor);
	P_NATIVE_END;
}
// ********** End Class APortalSigilActor Function GetExitTransform ********************************

// ********** Begin Class APortalSigilActor Function GetLinkedPortal *******************************
struct Z_Construct_UFunction_APortalSigilActor_GetLinkedPortal_Statics
{
	struct PortalSigilActor_eventGetLinkedPortal_Parms
	{
		APortalSigilActor* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Portal" },
		{ "ModuleRelativePath", "Transfiguration/PortalSigilActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APortalSigilActor_GetLinkedPortal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PortalSigilActor_eventGetLinkedPortal_Parms, ReturnValue), Z_Construct_UClass_APortalSigilActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APortalSigilActor_GetLinkedPortal_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APortalSigilActor_GetLinkedPortal_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APortalSigilActor_GetLinkedPortal_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APortalSigilActor_GetLinkedPortal_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APortalSigilActor, nullptr, "GetLinkedPortal", Z_Construct_UFunction_APortalSigilActor_GetLinkedPortal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APortalSigilActor_GetLinkedPortal_Statics::PropPointers), sizeof(Z_Construct_UFunction_APortalSigilActor_GetLinkedPortal_Statics::PortalSigilActor_eventGetLinkedPortal_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APortalSigilActor_GetLinkedPortal_Statics::Function_MetaDataParams), Z_Construct_UFunction_APortalSigilActor_GetLinkedPortal_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_APortalSigilActor_GetLinkedPortal_Statics::PortalSigilActor_eventGetLinkedPortal_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APortalSigilActor_GetLinkedPortal()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APortalSigilActor_GetLinkedPortal_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APortalSigilActor::execGetLinkedPortal)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(APortalSigilActor**)Z_Param__Result=P_THIS->GetLinkedPortal();
	P_NATIVE_END;
}
// ********** End Class APortalSigilActor Function GetLinkedPortal *********************************

// ********** Begin Class APortalSigilActor Function IsLinked **************************************
struct Z_Construct_UFunction_APortalSigilActor_IsLinked_Statics
{
	struct PortalSigilActor_eventIsLinked_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Portal" },
		{ "ModuleRelativePath", "Transfiguration/PortalSigilActor.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_APortalSigilActor_IsLinked_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PortalSigilActor_eventIsLinked_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APortalSigilActor_IsLinked_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PortalSigilActor_eventIsLinked_Parms), &Z_Construct_UFunction_APortalSigilActor_IsLinked_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APortalSigilActor_IsLinked_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APortalSigilActor_IsLinked_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APortalSigilActor_IsLinked_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APortalSigilActor_IsLinked_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APortalSigilActor, nullptr, "IsLinked", Z_Construct_UFunction_APortalSigilActor_IsLinked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APortalSigilActor_IsLinked_Statics::PropPointers), sizeof(Z_Construct_UFunction_APortalSigilActor_IsLinked_Statics::PortalSigilActor_eventIsLinked_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APortalSigilActor_IsLinked_Statics::Function_MetaDataParams), Z_Construct_UFunction_APortalSigilActor_IsLinked_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_APortalSigilActor_IsLinked_Statics::PortalSigilActor_eventIsLinked_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APortalSigilActor_IsLinked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APortalSigilActor_IsLinked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APortalSigilActor::execIsLinked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsLinked();
	P_NATIVE_END;
}
// ********** End Class APortalSigilActor Function IsLinked ****************************************

// ********** Begin Class APortalSigilActor Function IsPortalActive ********************************
struct Z_Construct_UFunction_APortalSigilActor_IsPortalActive_Statics
{
	struct PortalSigilActor_eventIsPortalActive_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Portal" },
		{ "ModuleRelativePath", "Transfiguration/PortalSigilActor.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_APortalSigilActor_IsPortalActive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PortalSigilActor_eventIsPortalActive_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APortalSigilActor_IsPortalActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PortalSigilActor_eventIsPortalActive_Parms), &Z_Construct_UFunction_APortalSigilActor_IsPortalActive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APortalSigilActor_IsPortalActive_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APortalSigilActor_IsPortalActive_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APortalSigilActor_IsPortalActive_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APortalSigilActor_IsPortalActive_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APortalSigilActor, nullptr, "IsPortalActive", Z_Construct_UFunction_APortalSigilActor_IsPortalActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APortalSigilActor_IsPortalActive_Statics::PropPointers), sizeof(Z_Construct_UFunction_APortalSigilActor_IsPortalActive_Statics::PortalSigilActor_eventIsPortalActive_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APortalSigilActor_IsPortalActive_Statics::Function_MetaDataParams), Z_Construct_UFunction_APortalSigilActor_IsPortalActive_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_APortalSigilActor_IsPortalActive_Statics::PortalSigilActor_eventIsPortalActive_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APortalSigilActor_IsPortalActive()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APortalSigilActor_IsPortalActive_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APortalSigilActor::execIsPortalActive)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsPortalActive();
	P_NATIVE_END;
}
// ********** End Class APortalSigilActor Function IsPortalActive **********************************

// ********** Begin Class APortalSigilActor Function LinkToPortal **********************************
struct Z_Construct_UFunction_APortalSigilActor_LinkToPortal_Statics
{
	struct PortalSigilActor_eventLinkToPortal_Parms
	{
		APortalSigilActor* OtherPortal;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Portal" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Portal linking\n" },
#endif
		{ "ModuleRelativePath", "Transfiguration/PortalSigilActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Portal linking" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherPortal;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APortalSigilActor_LinkToPortal_Statics::NewProp_OtherPortal = { "OtherPortal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PortalSigilActor_eventLinkToPortal_Parms, OtherPortal), Z_Construct_UClass_APortalSigilActor_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_APortalSigilActor_LinkToPortal_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PortalSigilActor_eventLinkToPortal_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APortalSigilActor_LinkToPortal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PortalSigilActor_eventLinkToPortal_Parms), &Z_Construct_UFunction_APortalSigilActor_LinkToPortal_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APortalSigilActor_LinkToPortal_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APortalSigilActor_LinkToPortal_Statics::NewProp_OtherPortal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APortalSigilActor_LinkToPortal_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APortalSigilActor_LinkToPortal_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APortalSigilActor_LinkToPortal_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APortalSigilActor, nullptr, "LinkToPortal", Z_Construct_UFunction_APortalSigilActor_LinkToPortal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APortalSigilActor_LinkToPortal_Statics::PropPointers), sizeof(Z_Construct_UFunction_APortalSigilActor_LinkToPortal_Statics::PortalSigilActor_eventLinkToPortal_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APortalSigilActor_LinkToPortal_Statics::Function_MetaDataParams), Z_Construct_UFunction_APortalSigilActor_LinkToPortal_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_APortalSigilActor_LinkToPortal_Statics::PortalSigilActor_eventLinkToPortal_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APortalSigilActor_LinkToPortal()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APortalSigilActor_LinkToPortal_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APortalSigilActor::execLinkToPortal)
{
	P_GET_OBJECT(APortalSigilActor,Z_Param_OtherPortal);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->LinkToPortal(Z_Param_OtherPortal);
	P_NATIVE_END;
}
// ********** End Class APortalSigilActor Function LinkToPortal ************************************

// ********** Begin Class APortalSigilActor Function OnCooldownComplete ****************************
struct Z_Construct_UFunction_APortalSigilActor_OnCooldownComplete_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Transfiguration/PortalSigilActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APortalSigilActor_OnCooldownComplete_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APortalSigilActor, nullptr, "OnCooldownComplete", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APortalSigilActor_OnCooldownComplete_Statics::Function_MetaDataParams), Z_Construct_UFunction_APortalSigilActor_OnCooldownComplete_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_APortalSigilActor_OnCooldownComplete()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APortalSigilActor_OnCooldownComplete_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APortalSigilActor::execOnCooldownComplete)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnCooldownComplete();
	P_NATIVE_END;
}
// ********** End Class APortalSigilActor Function OnCooldownComplete ******************************

// ********** Begin Class APortalSigilActor Function OnPortalActivationWarning *********************
static FName NAME_APortalSigilActor_OnPortalActivationWarning = FName(TEXT("OnPortalActivationWarning"));
void APortalSigilActor::OnPortalActivationWarning()
{
	UFunction* Func = FindFunctionChecked(NAME_APortalSigilActor_OnPortalActivationWarning);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_APortalSigilActor_OnPortalActivationWarning_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Portal|VFX" },
		{ "ModuleRelativePath", "Transfiguration/PortalSigilActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APortalSigilActor_OnPortalActivationWarning_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APortalSigilActor, nullptr, "OnPortalActivationWarning", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APortalSigilActor_OnPortalActivationWarning_Statics::Function_MetaDataParams), Z_Construct_UFunction_APortalSigilActor_OnPortalActivationWarning_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_APortalSigilActor_OnPortalActivationWarning()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APortalSigilActor_OnPortalActivationWarning_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class APortalSigilActor Function OnPortalActivationWarning ***********************

// ********** Begin Class APortalSigilActor Function OnPortalChargeStart ***************************
struct PortalSigilActor_eventOnPortalChargeStart_Parms
{
	float ChargeTime;
};
static FName NAME_APortalSigilActor_OnPortalChargeStart = FName(TEXT("OnPortalChargeStart"));
void APortalSigilActor::OnPortalChargeStart(float ChargeTime)
{
	PortalSigilActor_eventOnPortalChargeStart_Parms Parms;
	Parms.ChargeTime=ChargeTime;
	UFunction* Func = FindFunctionChecked(NAME_APortalSigilActor_OnPortalChargeStart);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_APortalSigilActor_OnPortalChargeStart_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Portal|VFX" },
		{ "ModuleRelativePath", "Transfiguration/PortalSigilActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ChargeTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APortalSigilActor_OnPortalChargeStart_Statics::NewProp_ChargeTime = { "ChargeTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PortalSigilActor_eventOnPortalChargeStart_Parms, ChargeTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APortalSigilActor_OnPortalChargeStart_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APortalSigilActor_OnPortalChargeStart_Statics::NewProp_ChargeTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APortalSigilActor_OnPortalChargeStart_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APortalSigilActor_OnPortalChargeStart_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APortalSigilActor, nullptr, "OnPortalChargeStart", Z_Construct_UFunction_APortalSigilActor_OnPortalChargeStart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APortalSigilActor_OnPortalChargeStart_Statics::PropPointers), sizeof(PortalSigilActor_eventOnPortalChargeStart_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APortalSigilActor_OnPortalChargeStart_Statics::Function_MetaDataParams), Z_Construct_UFunction_APortalSigilActor_OnPortalChargeStart_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(PortalSigilActor_eventOnPortalChargeStart_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APortalSigilActor_OnPortalChargeStart()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APortalSigilActor_OnPortalChargeStart_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class APortalSigilActor Function OnPortalChargeStart *****************************

// ********** Begin Class APortalSigilActor Function OnPortalLinkBroken ****************************
static FName NAME_APortalSigilActor_OnPortalLinkBroken = FName(TEXT("OnPortalLinkBroken"));
void APortalSigilActor::OnPortalLinkBroken()
{
	UFunction* Func = FindFunctionChecked(NAME_APortalSigilActor_OnPortalLinkBroken);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_APortalSigilActor_OnPortalLinkBroken_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Portal|VFX" },
		{ "ModuleRelativePath", "Transfiguration/PortalSigilActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APortalSigilActor_OnPortalLinkBroken_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APortalSigilActor, nullptr, "OnPortalLinkBroken", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APortalSigilActor_OnPortalLinkBroken_Statics::Function_MetaDataParams), Z_Construct_UFunction_APortalSigilActor_OnPortalLinkBroken_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_APortalSigilActor_OnPortalLinkBroken()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APortalSigilActor_OnPortalLinkBroken_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class APortalSigilActor Function OnPortalLinkBroken ******************************

// ********** Begin Class APortalSigilActor Function OnPortalLinkEstablished ***********************
struct PortalSigilActor_eventOnPortalLinkEstablished_Parms
{
	APortalSigilActor* OtherPortal;
};
static FName NAME_APortalSigilActor_OnPortalLinkEstablished = FName(TEXT("OnPortalLinkEstablished"));
void APortalSigilActor::OnPortalLinkEstablished(APortalSigilActor* OtherPortal)
{
	PortalSigilActor_eventOnPortalLinkEstablished_Parms Parms;
	Parms.OtherPortal=OtherPortal;
	UFunction* Func = FindFunctionChecked(NAME_APortalSigilActor_OnPortalLinkEstablished);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_APortalSigilActor_OnPortalLinkEstablished_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Portal|VFX" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Blueprint implementable events\n" },
#endif
		{ "ModuleRelativePath", "Transfiguration/PortalSigilActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Blueprint implementable events" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherPortal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APortalSigilActor_OnPortalLinkEstablished_Statics::NewProp_OtherPortal = { "OtherPortal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PortalSigilActor_eventOnPortalLinkEstablished_Parms, OtherPortal), Z_Construct_UClass_APortalSigilActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APortalSigilActor_OnPortalLinkEstablished_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APortalSigilActor_OnPortalLinkEstablished_Statics::NewProp_OtherPortal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APortalSigilActor_OnPortalLinkEstablished_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APortalSigilActor_OnPortalLinkEstablished_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APortalSigilActor, nullptr, "OnPortalLinkEstablished", Z_Construct_UFunction_APortalSigilActor_OnPortalLinkEstablished_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APortalSigilActor_OnPortalLinkEstablished_Statics::PropPointers), sizeof(PortalSigilActor_eventOnPortalLinkEstablished_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APortalSigilActor_OnPortalLinkEstablished_Statics::Function_MetaDataParams), Z_Construct_UFunction_APortalSigilActor_OnPortalLinkEstablished_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(PortalSigilActor_eventOnPortalLinkEstablished_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APortalSigilActor_OnPortalLinkEstablished()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APortalSigilActor_OnPortalLinkEstablished_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class APortalSigilActor Function OnPortalLinkEstablished *************************

// ********** Begin Class APortalSigilActor Function OnTeleportTriggerOverlap **********************
struct Z_Construct_UFunction_APortalSigilActor_OnTeleportTriggerOverlap_Statics
{
	struct PortalSigilActor_eventOnTeleportTriggerOverlap_Parms
	{
		UPrimitiveComponent* OverlappedComp;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
		bool bFromSweep;
		FHitResult SweepResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Transfiguration/PortalSigilActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static void NewProp_bFromSweep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APortalSigilActor_OnTeleportTriggerOverlap_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PortalSigilActor_eventOnTeleportTriggerOverlap_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComp_MetaData), NewProp_OverlappedComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APortalSigilActor_OnTeleportTriggerOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PortalSigilActor_eventOnTeleportTriggerOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APortalSigilActor_OnTeleportTriggerOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PortalSigilActor_eventOnTeleportTriggerOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APortalSigilActor_OnTeleportTriggerOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PortalSigilActor_eventOnTeleportTriggerOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_APortalSigilActor_OnTeleportTriggerOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
{
	((PortalSigilActor_eventOnTeleportTriggerOverlap_Parms*)Obj)->bFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APortalSigilActor_OnTeleportTriggerOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PortalSigilActor_eventOnTeleportTriggerOverlap_Parms), &Z_Construct_UFunction_APortalSigilActor_OnTeleportTriggerOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APortalSigilActor_OnTeleportTriggerOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PortalSigilActor_eventOnTeleportTriggerOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // 267591329
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APortalSigilActor_OnTeleportTriggerOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APortalSigilActor_OnTeleportTriggerOverlap_Statics::NewProp_OverlappedComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APortalSigilActor_OnTeleportTriggerOverlap_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APortalSigilActor_OnTeleportTriggerOverlap_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APortalSigilActor_OnTeleportTriggerOverlap_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APortalSigilActor_OnTeleportTriggerOverlap_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APortalSigilActor_OnTeleportTriggerOverlap_Statics::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APortalSigilActor_OnTeleportTriggerOverlap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APortalSigilActor_OnTeleportTriggerOverlap_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APortalSigilActor, nullptr, "OnTeleportTriggerOverlap", Z_Construct_UFunction_APortalSigilActor_OnTeleportTriggerOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APortalSigilActor_OnTeleportTriggerOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_APortalSigilActor_OnTeleportTriggerOverlap_Statics::PortalSigilActor_eventOnTeleportTriggerOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APortalSigilActor_OnTeleportTriggerOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_APortalSigilActor_OnTeleportTriggerOverlap_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_APortalSigilActor_OnTeleportTriggerOverlap_Statics::PortalSigilActor_eventOnTeleportTriggerOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APortalSigilActor_OnTeleportTriggerOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APortalSigilActor_OnTeleportTriggerOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APortalSigilActor::execOnTeleportTriggerOverlap)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_GET_UBOOL(Z_Param_bFromSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnTeleportTriggerOverlap(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
	P_NATIVE_END;
}
// ********** End Class APortalSigilActor Function OnTeleportTriggerOverlap ************************

// ********** Begin Class APortalSigilActor Function OnTeleportVisuals *****************************
struct PortalSigilActor_eventOnTeleportVisuals_Parms
{
	AActor* TeleportedActor;
	FVector ExitLocation;
};
static FName NAME_APortalSigilActor_OnTeleportVisuals = FName(TEXT("OnTeleportVisuals"));
void APortalSigilActor::OnTeleportVisuals(AActor* TeleportedActor, FVector ExitLocation)
{
	PortalSigilActor_eventOnTeleportVisuals_Parms Parms;
	Parms.TeleportedActor=TeleportedActor;
	Parms.ExitLocation=ExitLocation;
	UFunction* Func = FindFunctionChecked(NAME_APortalSigilActor_OnTeleportVisuals);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_APortalSigilActor_OnTeleportVisuals_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Portal|VFX" },
		{ "ModuleRelativePath", "Transfiguration/PortalSigilActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TeleportedActor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ExitLocation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APortalSigilActor_OnTeleportVisuals_Statics::NewProp_TeleportedActor = { "TeleportedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PortalSigilActor_eventOnTeleportVisuals_Parms, TeleportedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APortalSigilActor_OnTeleportVisuals_Statics::NewProp_ExitLocation = { "ExitLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PortalSigilActor_eventOnTeleportVisuals_Parms, ExitLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APortalSigilActor_OnTeleportVisuals_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APortalSigilActor_OnTeleportVisuals_Statics::NewProp_TeleportedActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APortalSigilActor_OnTeleportVisuals_Statics::NewProp_ExitLocation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APortalSigilActor_OnTeleportVisuals_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APortalSigilActor_OnTeleportVisuals_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APortalSigilActor, nullptr, "OnTeleportVisuals", Z_Construct_UFunction_APortalSigilActor_OnTeleportVisuals_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APortalSigilActor_OnTeleportVisuals_Statics::PropPointers), sizeof(PortalSigilActor_eventOnTeleportVisuals_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08820800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APortalSigilActor_OnTeleportVisuals_Statics::Function_MetaDataParams), Z_Construct_UFunction_APortalSigilActor_OnTeleportVisuals_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(PortalSigilActor_eventOnTeleportVisuals_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APortalSigilActor_OnTeleportVisuals()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APortalSigilActor_OnTeleportVisuals_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class APortalSigilActor Function OnTeleportVisuals *******************************

// ********** Begin Class APortalSigilActor Function TeleportActor *********************************
struct Z_Construct_UFunction_APortalSigilActor_TeleportActor_Statics
{
	struct PortalSigilActor_eventTeleportActor_Parms
	{
		AActor* ActorToTeleport;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Portal" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Teleportation\n" },
#endif
		{ "ModuleRelativePath", "Transfiguration/PortalSigilActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Teleportation" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorToTeleport;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APortalSigilActor_TeleportActor_Statics::NewProp_ActorToTeleport = { "ActorToTeleport", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PortalSigilActor_eventTeleportActor_Parms, ActorToTeleport), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_APortalSigilActor_TeleportActor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PortalSigilActor_eventTeleportActor_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APortalSigilActor_TeleportActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PortalSigilActor_eventTeleportActor_Parms), &Z_Construct_UFunction_APortalSigilActor_TeleportActor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APortalSigilActor_TeleportActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APortalSigilActor_TeleportActor_Statics::NewProp_ActorToTeleport,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APortalSigilActor_TeleportActor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APortalSigilActor_TeleportActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APortalSigilActor_TeleportActor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APortalSigilActor, nullptr, "TeleportActor", Z_Construct_UFunction_APortalSigilActor_TeleportActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APortalSigilActor_TeleportActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_APortalSigilActor_TeleportActor_Statics::PortalSigilActor_eventTeleportActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APortalSigilActor_TeleportActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_APortalSigilActor_TeleportActor_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_APortalSigilActor_TeleportActor_Statics::PortalSigilActor_eventTeleportActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APortalSigilActor_TeleportActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APortalSigilActor_TeleportActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APortalSigilActor::execTeleportActor)
{
	P_GET_OBJECT(AActor,Z_Param_ActorToTeleport);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->TeleportActor(Z_Param_ActorToTeleport);
	P_NATIVE_END;
}
// ********** End Class APortalSigilActor Function TeleportActor ***********************************

// ********** Begin Class APortalSigilActor Function UnlinkPortal **********************************
struct Z_Construct_UFunction_APortalSigilActor_UnlinkPortal_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Portal" },
		{ "ModuleRelativePath", "Transfiguration/PortalSigilActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APortalSigilActor_UnlinkPortal_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APortalSigilActor, nullptr, "UnlinkPortal", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APortalSigilActor_UnlinkPortal_Statics::Function_MetaDataParams), Z_Construct_UFunction_APortalSigilActor_UnlinkPortal_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_APortalSigilActor_UnlinkPortal()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APortalSigilActor_UnlinkPortal_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APortalSigilActor::execUnlinkPortal)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UnlinkPortal();
	P_NATIVE_END;
}
// ********** End Class APortalSigilActor Function UnlinkPortal ************************************

// ********** Begin Class APortalSigilActor ********************************************************
void APortalSigilActor::StaticRegisterNativesAPortalSigilActor()
{
	UClass* Class = APortalSigilActor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ActivatePortal", &APortalSigilActor::execActivatePortal },
		{ "CanTeleportActor", &APortalSigilActor::execCanTeleportActor },
		{ "DeactivatePortal", &APortalSigilActor::execDeactivatePortal },
		{ "GetExitTransform", &APortalSigilActor::execGetExitTransform },
		{ "GetLinkedPortal", &APortalSigilActor::execGetLinkedPortal },
		{ "IsLinked", &APortalSigilActor::execIsLinked },
		{ "IsPortalActive", &APortalSigilActor::execIsPortalActive },
		{ "LinkToPortal", &APortalSigilActor::execLinkToPortal },
		{ "OnCooldownComplete", &APortalSigilActor::execOnCooldownComplete },
		{ "OnTeleportTriggerOverlap", &APortalSigilActor::execOnTeleportTriggerOverlap },
		{ "TeleportActor", &APortalSigilActor::execTeleportActor },
		{ "UnlinkPortal", &APortalSigilActor::execUnlinkPortal },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_APortalSigilActor;
UClass* APortalSigilActor::GetPrivateStaticClass()
{
	using TClass = APortalSigilActor;
	if (!Z_Registration_Info_UClass_APortalSigilActor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("PortalSigilActor"),
			Z_Registration_Info_UClass_APortalSigilActor.InnerSingleton,
			StaticRegisterNativesAPortalSigilActor,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_APortalSigilActor.InnerSingleton;
}
UClass* Z_Construct_UClass_APortalSigilActor_NoRegister()
{
	return APortalSigilActor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_APortalSigilActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Transfiguration/PortalSigilActor.h" },
		{ "ModuleRelativePath", "Transfiguration/PortalSigilActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PortalBillboard_MetaData[] = {
		{ "Category", "PortalSigilActor" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Components\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Transfiguration/PortalSigilActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Components" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PortalEffect_MetaData[] = {
		{ "Category", "PortalSigilActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Transfiguration/PortalSigilActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TeleportTrigger_MetaData[] = {
		{ "Category", "PortalSigilActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Transfiguration/PortalSigilActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnPlayerTeleported_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Delegates\n" },
#endif
		{ "ModuleRelativePath", "Transfiguration/PortalSigilActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Delegates" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnPortalActivated_MetaData[] = {
		{ "ModuleRelativePath", "Transfiguration/PortalSigilActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnPortalDeactivated_MetaData[] = {
		{ "ModuleRelativePath", "Transfiguration/PortalSigilActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LinkedPortal_MetaData[] = {
		{ "ModuleRelativePath", "Transfiguration/PortalSigilActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastTeleportedActor_MetaData[] = {
		{ "ModuleRelativePath", "Transfiguration/PortalSigilActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActivationDelayHandle_MetaData[] = {
		{ "ModuleRelativePath", "Transfiguration/PortalSigilActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CooldownTimerHandle_MetaData[] = {
		{ "ModuleRelativePath", "Transfiguration/PortalSigilActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PortalBillboard;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PortalEffect;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TeleportTrigger;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPlayerTeleported;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPortalActivated;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPortalDeactivated;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_LinkedPortal;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_LastTeleportedActor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActivationDelayHandle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CooldownTimerHandle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_APortalSigilActor_ActivatePortal, "ActivatePortal" }, // 3466388282
		{ &Z_Construct_UFunction_APortalSigilActor_CanTeleportActor, "CanTeleportActor" }, // 136867371
		{ &Z_Construct_UFunction_APortalSigilActor_DeactivatePortal, "DeactivatePortal" }, // 1894517573
		{ &Z_Construct_UFunction_APortalSigilActor_GetExitTransform, "GetExitTransform" }, // 634025789
		{ &Z_Construct_UFunction_APortalSigilActor_GetLinkedPortal, "GetLinkedPortal" }, // 2890503314
		{ &Z_Construct_UFunction_APortalSigilActor_IsLinked, "IsLinked" }, // 2949115208
		{ &Z_Construct_UFunction_APortalSigilActor_IsPortalActive, "IsPortalActive" }, // 3000309812
		{ &Z_Construct_UFunction_APortalSigilActor_LinkToPortal, "LinkToPortal" }, // 4050937098
		{ &Z_Construct_UFunction_APortalSigilActor_OnCooldownComplete, "OnCooldownComplete" }, // 1861923880
		{ &Z_Construct_UFunction_APortalSigilActor_OnPortalActivationWarning, "OnPortalActivationWarning" }, // 1870004247
		{ &Z_Construct_UFunction_APortalSigilActor_OnPortalChargeStart, "OnPortalChargeStart" }, // 560139250
		{ &Z_Construct_UFunction_APortalSigilActor_OnPortalLinkBroken, "OnPortalLinkBroken" }, // 1735316838
		{ &Z_Construct_UFunction_APortalSigilActor_OnPortalLinkEstablished, "OnPortalLinkEstablished" }, // 1225835732
		{ &Z_Construct_UFunction_APortalSigilActor_OnTeleportTriggerOverlap, "OnTeleportTriggerOverlap" }, // 1658364383
		{ &Z_Construct_UFunction_APortalSigilActor_OnTeleportVisuals, "OnTeleportVisuals" }, // 1137569651
		{ &Z_Construct_UFunction_APortalSigilActor_TeleportActor, "TeleportActor" }, // 3111597557
		{ &Z_Construct_UFunction_APortalSigilActor_UnlinkPortal, "UnlinkPortal" }, // 3398841687
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APortalSigilActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APortalSigilActor_Statics::NewProp_PortalBillboard = { "PortalBillboard", nullptr, (EPropertyFlags)0x01140000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APortalSigilActor, PortalBillboard), Z_Construct_UClass_UBillboardComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PortalBillboard_MetaData), NewProp_PortalBillboard_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APortalSigilActor_Statics::NewProp_PortalEffect = { "PortalEffect", nullptr, (EPropertyFlags)0x01140000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APortalSigilActor, PortalEffect), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PortalEffect_MetaData), NewProp_PortalEffect_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APortalSigilActor_Statics::NewProp_TeleportTrigger = { "TeleportTrigger", nullptr, (EPropertyFlags)0x01140000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APortalSigilActor, TeleportTrigger), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TeleportTrigger_MetaData), NewProp_TeleportTrigger_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_APortalSigilActor_Statics::NewProp_OnPlayerTeleported = { "OnPlayerTeleported", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APortalSigilActor, OnPlayerTeleported), Z_Construct_UDelegateFunction_Transfigure_OnPlayerTeleported__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnPlayerTeleported_MetaData), NewProp_OnPlayerTeleported_MetaData) }; // 2348048831
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_APortalSigilActor_Statics::NewProp_OnPortalActivated = { "OnPortalActivated", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APortalSigilActor, OnPortalActivated), Z_Construct_UDelegateFunction_Transfigure_OnPortalActivated__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnPortalActivated_MetaData), NewProp_OnPortalActivated_MetaData) }; // 1294255065
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_APortalSigilActor_Statics::NewProp_OnPortalDeactivated = { "OnPortalDeactivated", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APortalSigilActor, OnPortalDeactivated), Z_Construct_UDelegateFunction_Transfigure_OnPortalDeactivated__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnPortalDeactivated_MetaData), NewProp_OnPortalDeactivated_MetaData) }; // 2602981796
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_APortalSigilActor_Statics::NewProp_LinkedPortal = { "LinkedPortal", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APortalSigilActor, LinkedPortal), Z_Construct_UClass_APortalSigilActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LinkedPortal_MetaData), NewProp_LinkedPortal_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_APortalSigilActor_Statics::NewProp_LastTeleportedActor = { "LastTeleportedActor", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APortalSigilActor, LastTeleportedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastTeleportedActor_MetaData), NewProp_LastTeleportedActor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_APortalSigilActor_Statics::NewProp_ActivationDelayHandle = { "ActivationDelayHandle", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APortalSigilActor, ActivationDelayHandle), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActivationDelayHandle_MetaData), NewProp_ActivationDelayHandle_MetaData) }; // 3834150579
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_APortalSigilActor_Statics::NewProp_CooldownTimerHandle = { "CooldownTimerHandle", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APortalSigilActor, CooldownTimerHandle), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CooldownTimerHandle_MetaData), NewProp_CooldownTimerHandle_MetaData) }; // 3834150579
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APortalSigilActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APortalSigilActor_Statics::NewProp_PortalBillboard,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APortalSigilActor_Statics::NewProp_PortalEffect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APortalSigilActor_Statics::NewProp_TeleportTrigger,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APortalSigilActor_Statics::NewProp_OnPlayerTeleported,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APortalSigilActor_Statics::NewProp_OnPortalActivated,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APortalSigilActor_Statics::NewProp_OnPortalDeactivated,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APortalSigilActor_Statics::NewProp_LinkedPortal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APortalSigilActor_Statics::NewProp_LastTeleportedActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APortalSigilActor_Statics::NewProp_ActivationDelayHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APortalSigilActor_Statics::NewProp_CooldownTimerHandle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APortalSigilActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_APortalSigilActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ASigilActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Transfigure,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APortalSigilActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APortalSigilActor_Statics::ClassParams = {
	&APortalSigilActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_APortalSigilActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_APortalSigilActor_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APortalSigilActor_Statics::Class_MetaDataParams), Z_Construct_UClass_APortalSigilActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APortalSigilActor()
{
	if (!Z_Registration_Info_UClass_APortalSigilActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APortalSigilActor.OuterSingleton, Z_Construct_UClass_APortalSigilActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APortalSigilActor.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APortalSigilActor);
APortalSigilActor::~APortalSigilActor() {}
// ********** End Class APortalSigilActor **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Transfiguration_PortalSigilActor_h__Script_Transfigure_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APortalSigilActor, APortalSigilActor::StaticClass, TEXT("APortalSigilActor"), &Z_Registration_Info_UClass_APortalSigilActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APortalSigilActor), 1660096880U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Transfiguration_PortalSigilActor_h__Script_Transfigure_547642039(TEXT("/Script/Transfigure"),
	Z_CompiledInDeferFile_FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Transfiguration_PortalSigilActor_h__Script_Transfigure_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Transfiguration_PortalSigilActor_h__Script_Transfigure_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS

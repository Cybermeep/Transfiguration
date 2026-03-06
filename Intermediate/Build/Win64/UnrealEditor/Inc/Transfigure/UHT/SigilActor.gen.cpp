// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SigilActor.h"
#include "Engine/HitResult.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSigilActor() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UDecalComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
TRANSFIGURE_API UClass* Z_Construct_UClass_ASigilActor();
TRANSFIGURE_API UClass* Z_Construct_UClass_ASigilActor_NoRegister();
TRANSFIGURE_API UClass* Z_Construct_UClass_UTransfigurationDefinition_NoRegister();
TRANSFIGURE_API UFunction* Z_Construct_UDelegateFunction_Transfigure_OnSigilTriggered__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_Transfigure();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnSigilTriggered *****************************************************
struct Z_Construct_UDelegateFunction_Transfigure_OnSigilTriggered__DelegateSignature_Statics
{
	struct _Script_Transfigure_eventOnSigilTriggered_Parms
	{
		ASigilActor* TriggeredSigil;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Transfiguration/SigilActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TriggeredSigil;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Transfigure_OnSigilTriggered__DelegateSignature_Statics::NewProp_TriggeredSigil = { "TriggeredSigil", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Transfigure_eventOnSigilTriggered_Parms, TriggeredSigil), Z_Construct_UClass_ASigilActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Transfigure_OnSigilTriggered__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Transfigure_OnSigilTriggered__DelegateSignature_Statics::NewProp_TriggeredSigil,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Transfigure_OnSigilTriggered__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_Transfigure_OnSigilTriggered__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_Transfigure, nullptr, "OnSigilTriggered__DelegateSignature", Z_Construct_UDelegateFunction_Transfigure_OnSigilTriggered__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Transfigure_OnSigilTriggered__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Transfigure_OnSigilTriggered__DelegateSignature_Statics::_Script_Transfigure_eventOnSigilTriggered_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Transfigure_OnSigilTriggered__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Transfigure_OnSigilTriggered__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_Transfigure_OnSigilTriggered__DelegateSignature_Statics::_Script_Transfigure_eventOnSigilTriggered_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_Transfigure_OnSigilTriggered__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Transfigure_OnSigilTriggered__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnSigilTriggered_DelegateWrapper(const FMulticastScriptDelegate& OnSigilTriggered, ASigilActor* TriggeredSigil)
{
	struct _Script_Transfigure_eventOnSigilTriggered_Parms
	{
		ASigilActor* TriggeredSigil;
	};
	_Script_Transfigure_eventOnSigilTriggered_Parms Parms;
	Parms.TriggeredSigil=TriggeredSigil;
	OnSigilTriggered.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnSigilTriggered *******************************************************

// ********** Begin Class ASigilActor Function GetSpellDefinition **********************************
struct Z_Construct_UFunction_ASigilActor_GetSpellDefinition_Statics
{
	struct SigilActor_eventGetSpellDefinition_Parms
	{
		UTransfigurationDefinition* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sigil" },
		{ "ModuleRelativePath", "Transfiguration/SigilActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASigilActor_GetSpellDefinition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SigilActor_eventGetSpellDefinition_Parms, ReturnValue), Z_Construct_UClass_UTransfigurationDefinition_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASigilActor_GetSpellDefinition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASigilActor_GetSpellDefinition_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASigilActor_GetSpellDefinition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASigilActor_GetSpellDefinition_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASigilActor, nullptr, "GetSpellDefinition", Z_Construct_UFunction_ASigilActor_GetSpellDefinition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASigilActor_GetSpellDefinition_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASigilActor_GetSpellDefinition_Statics::SigilActor_eventGetSpellDefinition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASigilActor_GetSpellDefinition_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASigilActor_GetSpellDefinition_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASigilActor_GetSpellDefinition_Statics::SigilActor_eventGetSpellDefinition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASigilActor_GetSpellDefinition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASigilActor_GetSpellDefinition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASigilActor::execGetSpellDefinition)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UTransfigurationDefinition**)Z_Param__Result=P_THIS->GetSpellDefinition();
	P_NATIVE_END;
}
// ********** End Class ASigilActor Function GetSpellDefinition ************************************

// ********** Begin Class ASigilActor Function Initialize ******************************************
struct Z_Construct_UFunction_ASigilActor_Initialize_Statics
{
	struct SigilActor_eventInitialize_Parms
	{
		UTransfigurationDefinition* InSpell;
		AActor* InCaster;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sigil" },
		{ "ModuleRelativePath", "Transfiguration/SigilActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InSpell;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InCaster;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASigilActor_Initialize_Statics::NewProp_InSpell = { "InSpell", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SigilActor_eventInitialize_Parms, InSpell), Z_Construct_UClass_UTransfigurationDefinition_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASigilActor_Initialize_Statics::NewProp_InCaster = { "InCaster", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SigilActor_eventInitialize_Parms, InCaster), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASigilActor_Initialize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASigilActor_Initialize_Statics::NewProp_InSpell,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASigilActor_Initialize_Statics::NewProp_InCaster,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASigilActor_Initialize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASigilActor_Initialize_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASigilActor, nullptr, "Initialize", Z_Construct_UFunction_ASigilActor_Initialize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASigilActor_Initialize_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASigilActor_Initialize_Statics::SigilActor_eventInitialize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASigilActor_Initialize_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASigilActor_Initialize_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASigilActor_Initialize_Statics::SigilActor_eventInitialize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASigilActor_Initialize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASigilActor_Initialize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASigilActor::execInitialize)
{
	P_GET_OBJECT(UTransfigurationDefinition,Z_Param_InSpell);
	P_GET_OBJECT(AActor,Z_Param_InCaster);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Initialize(Z_Param_InSpell,Z_Param_InCaster);
	P_NATIVE_END;
}
// ********** End Class ASigilActor Function Initialize ********************************************

// ********** Begin Class ASigilActor Function IsArmed *********************************************
struct Z_Construct_UFunction_ASigilActor_IsArmed_Statics
{
	struct SigilActor_eventIsArmed_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sigil" },
		{ "ModuleRelativePath", "Transfiguration/SigilActor.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ASigilActor_IsArmed_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SigilActor_eventIsArmed_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASigilActor_IsArmed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SigilActor_eventIsArmed_Parms), &Z_Construct_UFunction_ASigilActor_IsArmed_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASigilActor_IsArmed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASigilActor_IsArmed_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASigilActor_IsArmed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASigilActor_IsArmed_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASigilActor, nullptr, "IsArmed", Z_Construct_UFunction_ASigilActor_IsArmed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASigilActor_IsArmed_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASigilActor_IsArmed_Statics::SigilActor_eventIsArmed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASigilActor_IsArmed_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASigilActor_IsArmed_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASigilActor_IsArmed_Statics::SigilActor_eventIsArmed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASigilActor_IsArmed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASigilActor_IsArmed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASigilActor::execIsArmed)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsArmed();
	P_NATIVE_END;
}
// ********** End Class ASigilActor Function IsArmed ***********************************************

// ********** Begin Class ASigilActor Function OnProximityOverlap **********************************
struct Z_Construct_UFunction_ASigilActor_OnProximityOverlap_Statics
{
	struct SigilActor_eventOnProximityOverlap_Parms
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
		{ "ModuleRelativePath", "Transfiguration/SigilActor.h" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASigilActor_OnProximityOverlap_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SigilActor_eventOnProximityOverlap_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComp_MetaData), NewProp_OverlappedComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASigilActor_OnProximityOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SigilActor_eventOnProximityOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASigilActor_OnProximityOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SigilActor_eventOnProximityOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASigilActor_OnProximityOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SigilActor_eventOnProximityOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ASigilActor_OnProximityOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
{
	((SigilActor_eventOnProximityOverlap_Parms*)Obj)->bFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASigilActor_OnProximityOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SigilActor_eventOnProximityOverlap_Parms), &Z_Construct_UFunction_ASigilActor_OnProximityOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASigilActor_OnProximityOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SigilActor_eventOnProximityOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // 267591329
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASigilActor_OnProximityOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASigilActor_OnProximityOverlap_Statics::NewProp_OverlappedComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASigilActor_OnProximityOverlap_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASigilActor_OnProximityOverlap_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASigilActor_OnProximityOverlap_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASigilActor_OnProximityOverlap_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASigilActor_OnProximityOverlap_Statics::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASigilActor_OnProximityOverlap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASigilActor_OnProximityOverlap_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASigilActor, nullptr, "OnProximityOverlap", Z_Construct_UFunction_ASigilActor_OnProximityOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASigilActor_OnProximityOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASigilActor_OnProximityOverlap_Statics::SigilActor_eventOnProximityOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASigilActor_OnProximityOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASigilActor_OnProximityOverlap_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASigilActor_OnProximityOverlap_Statics::SigilActor_eventOnProximityOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASigilActor_OnProximityOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASigilActor_OnProximityOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASigilActor::execOnProximityOverlap)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_GET_UBOOL(Z_Param_bFromSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnProximityOverlap(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
	P_NATIVE_END;
}
// ********** End Class ASigilActor Function OnProximityOverlap ************************************

// ********** Begin Class ASigilActor Function OnSigilExpired **************************************
static FName NAME_ASigilActor_OnSigilExpired = FName(TEXT("OnSigilExpired"));
void ASigilActor::OnSigilExpired()
{
	UFunction* Func = FindFunctionChecked(NAME_ASigilActor_OnSigilExpired);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_ASigilActor_OnSigilExpired_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sigil|VFX" },
		{ "ModuleRelativePath", "Transfiguration/SigilActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASigilActor_OnSigilExpired_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASigilActor, nullptr, "OnSigilExpired", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASigilActor_OnSigilExpired_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASigilActor_OnSigilExpired_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ASigilActor_OnSigilExpired()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASigilActor_OnSigilExpired_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class ASigilActor Function OnSigilExpired ****************************************

// ********** Begin Class ASigilActor Function OnSigilPlaced ***************************************
static FName NAME_ASigilActor_OnSigilPlaced = FName(TEXT("OnSigilPlaced"));
void ASigilActor::OnSigilPlaced()
{
	UFunction* Func = FindFunctionChecked(NAME_ASigilActor_OnSigilPlaced);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_ASigilActor_OnSigilPlaced_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sigil|VFX" },
		{ "ModuleRelativePath", "Transfiguration/SigilActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASigilActor_OnSigilPlaced_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASigilActor, nullptr, "OnSigilPlaced", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASigilActor_OnSigilPlaced_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASigilActor_OnSigilPlaced_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ASigilActor_OnSigilPlaced()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASigilActor_OnSigilPlaced_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class ASigilActor Function OnSigilPlaced *****************************************

// ********** Begin Class ASigilActor Function OnSigilTriggeredVFX *********************************
static FName NAME_ASigilActor_OnSigilTriggeredVFX = FName(TEXT("OnSigilTriggeredVFX"));
void ASigilActor::OnSigilTriggeredVFX()
{
	UFunction* Func = FindFunctionChecked(NAME_ASigilActor_OnSigilTriggeredVFX);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_ASigilActor_OnSigilTriggeredVFX_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sigil|VFX" },
		{ "ModuleRelativePath", "Transfiguration/SigilActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASigilActor_OnSigilTriggeredVFX_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASigilActor, nullptr, "OnSigilTriggeredVFX", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASigilActor_OnSigilTriggeredVFX_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASigilActor_OnSigilTriggeredVFX_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ASigilActor_OnSigilTriggeredVFX()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASigilActor_OnSigilTriggeredVFX_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class ASigilActor Function OnSigilTriggeredVFX ***********************************

// ********** Begin Class ASigilActor Function TriggerManual ***************************************
struct Z_Construct_UFunction_ASigilActor_TriggerManual_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sigil" },
		{ "ModuleRelativePath", "Transfiguration/SigilActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASigilActor_TriggerManual_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASigilActor, nullptr, "TriggerManual", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASigilActor_TriggerManual_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASigilActor_TriggerManual_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ASigilActor_TriggerManual()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASigilActor_TriggerManual_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASigilActor::execTriggerManual)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TriggerManual();
	P_NATIVE_END;
}
// ********** End Class ASigilActor Function TriggerManual *****************************************

// ********** Begin Class ASigilActor **************************************************************
void ASigilActor::StaticRegisterNativesASigilActor()
{
	UClass* Class = ASigilActor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetSpellDefinition", &ASigilActor::execGetSpellDefinition },
		{ "Initialize", &ASigilActor::execInitialize },
		{ "IsArmed", &ASigilActor::execIsArmed },
		{ "OnProximityOverlap", &ASigilActor::execOnProximityOverlap },
		{ "TriggerManual", &ASigilActor::execTriggerManual },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ASigilActor;
UClass* ASigilActor::GetPrivateStaticClass()
{
	using TClass = ASigilActor;
	if (!Z_Registration_Info_UClass_ASigilActor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("SigilActor"),
			Z_Registration_Info_UClass_ASigilActor.InnerSingleton,
			StaticRegisterNativesASigilActor,
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
	return Z_Registration_Info_UClass_ASigilActor.InnerSingleton;
}
UClass* Z_Construct_UClass_ASigilActor_NoRegister()
{
	return ASigilActor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ASigilActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Transfiguration/SigilActor.h" },
		{ "ModuleRelativePath", "Transfiguration/SigilActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnTriggered_MetaData[] = {
		{ "Category", "Sigil" },
		{ "ModuleRelativePath", "Transfiguration/SigilActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpellDef_MetaData[] = {
		{ "ModuleRelativePath", "Transfiguration/SigilActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Caster_MetaData[] = {
		{ "ModuleRelativePath", "Transfiguration/SigilActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TriggerSphere_MetaData[] = {
		{ "Category", "SigilActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Transfiguration/SigilActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SigilDecal_MetaData[] = {
		{ "Category", "SigilActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Transfiguration/SigilActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTriggered;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpellDef;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_Caster;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TriggerSphere;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SigilDecal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ASigilActor_GetSpellDefinition, "GetSpellDefinition" }, // 1008132355
		{ &Z_Construct_UFunction_ASigilActor_Initialize, "Initialize" }, // 1708134006
		{ &Z_Construct_UFunction_ASigilActor_IsArmed, "IsArmed" }, // 3183681123
		{ &Z_Construct_UFunction_ASigilActor_OnProximityOverlap, "OnProximityOverlap" }, // 3228591479
		{ &Z_Construct_UFunction_ASigilActor_OnSigilExpired, "OnSigilExpired" }, // 2648283444
		{ &Z_Construct_UFunction_ASigilActor_OnSigilPlaced, "OnSigilPlaced" }, // 2666291927
		{ &Z_Construct_UFunction_ASigilActor_OnSigilTriggeredVFX, "OnSigilTriggeredVFX" }, // 1956895933
		{ &Z_Construct_UFunction_ASigilActor_TriggerManual, "TriggerManual" }, // 133881768
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASigilActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ASigilActor_Statics::NewProp_OnTriggered = { "OnTriggered", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASigilActor, OnTriggered), Z_Construct_UDelegateFunction_Transfigure_OnSigilTriggered__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnTriggered_MetaData), NewProp_OnTriggered_MetaData) }; // 1260443767
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASigilActor_Statics::NewProp_SpellDef = { "SpellDef", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASigilActor, SpellDef), Z_Construct_UClass_UTransfigurationDefinition_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpellDef_MetaData), NewProp_SpellDef_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_ASigilActor_Statics::NewProp_Caster = { "Caster", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASigilActor, Caster), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Caster_MetaData), NewProp_Caster_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASigilActor_Statics::NewProp_TriggerSphere = { "TriggerSphere", nullptr, (EPropertyFlags)0x01240800000b0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASigilActor, TriggerSphere), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TriggerSphere_MetaData), NewProp_TriggerSphere_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASigilActor_Statics::NewProp_SigilDecal = { "SigilDecal", nullptr, (EPropertyFlags)0x01240800000b0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASigilActor, SigilDecal), Z_Construct_UClass_UDecalComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SigilDecal_MetaData), NewProp_SigilDecal_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASigilActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASigilActor_Statics::NewProp_OnTriggered,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASigilActor_Statics::NewProp_SpellDef,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASigilActor_Statics::NewProp_Caster,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASigilActor_Statics::NewProp_TriggerSphere,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASigilActor_Statics::NewProp_SigilDecal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASigilActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASigilActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Transfigure,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASigilActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASigilActor_Statics::ClassParams = {
	&ASigilActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ASigilActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ASigilActor_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASigilActor_Statics::Class_MetaDataParams), Z_Construct_UClass_ASigilActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASigilActor()
{
	if (!Z_Registration_Info_UClass_ASigilActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASigilActor.OuterSingleton, Z_Construct_UClass_ASigilActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASigilActor.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASigilActor);
ASigilActor::~ASigilActor() {}
// ********** End Class ASigilActor ****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Transfiguration_SigilActor_h__Script_Transfigure_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASigilActor, ASigilActor::StaticClass, TEXT("ASigilActor"), &Z_Registration_Info_UClass_ASigilActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASigilActor), 1948971796U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Transfiguration_SigilActor_h__Script_Transfigure_3749754131(TEXT("/Script/Transfigure"),
	Z_CompiledInDeferFile_FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Transfiguration_SigilActor_h__Script_Transfigure_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Transfiguration_SigilActor_h__Script_Transfigure_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS

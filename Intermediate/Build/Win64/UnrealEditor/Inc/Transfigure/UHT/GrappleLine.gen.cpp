// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GrappleLine.h"
#include "Engine/TimerHandle.h"
#include "TransfigurationTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeGrappleLine() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UDecalComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USplineComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent_NoRegister();
TRANSFIGURE_API UClass* Z_Construct_UClass_AGrappleLine();
TRANSFIGURE_API UClass* Z_Construct_UClass_AGrappleLine_NoRegister();
TRANSFIGURE_API UEnum* Z_Construct_UEnum_Transfigure_ETransfigurationElement();
TRANSFIGURE_API UScriptStruct* Z_Construct_UScriptStruct_FGrappleLineData();
UPackage* Z_Construct_UPackage__Script_Transfigure();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AGrappleLine Function ApplyEarthEffect ***********************************
struct Z_Construct_UFunction_AGrappleLine_ApplyEarthEffect_Statics
{
	struct GrappleLine_eventApplyEarthEffect_Parms
	{
		FVector Location;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Grapple/GrappleLine.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGrappleLine_ApplyEarthEffect_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GrappleLine_eventApplyEarthEffect_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGrappleLine_ApplyEarthEffect_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGrappleLine_ApplyEarthEffect_Statics::NewProp_Location,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGrappleLine_ApplyEarthEffect_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGrappleLine_ApplyEarthEffect_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGrappleLine, nullptr, "ApplyEarthEffect", Z_Construct_UFunction_AGrappleLine_ApplyEarthEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGrappleLine_ApplyEarthEffect_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGrappleLine_ApplyEarthEffect_Statics::GrappleLine_eventApplyEarthEffect_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00880401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGrappleLine_ApplyEarthEffect_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGrappleLine_ApplyEarthEffect_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AGrappleLine_ApplyEarthEffect_Statics::GrappleLine_eventApplyEarthEffect_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGrappleLine_ApplyEarthEffect()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGrappleLine_ApplyEarthEffect_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGrappleLine::execApplyEarthEffect)
{
	P_GET_STRUCT(FVector,Z_Param_Location);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ApplyEarthEffect(Z_Param_Location);
	P_NATIVE_END;
}
// ********** End Class AGrappleLine Function ApplyEarthEffect *************************************

// ********** Begin Class AGrappleLine Function ApplyElementalEffectAtLocation *********************
struct Z_Construct_UFunction_AGrappleLine_ApplyElementalEffectAtLocation_Statics
{
	struct GrappleLine_eventApplyElementalEffectAtLocation_Parms
	{
		FVector Location;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GrappleLine|Elemental" },
		{ "ModuleRelativePath", "Grapple/GrappleLine.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGrappleLine_ApplyElementalEffectAtLocation_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GrappleLine_eventApplyElementalEffectAtLocation_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGrappleLine_ApplyElementalEffectAtLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGrappleLine_ApplyElementalEffectAtLocation_Statics::NewProp_Location,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGrappleLine_ApplyElementalEffectAtLocation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGrappleLine_ApplyElementalEffectAtLocation_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGrappleLine, nullptr, "ApplyElementalEffectAtLocation", Z_Construct_UFunction_AGrappleLine_ApplyElementalEffectAtLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGrappleLine_ApplyElementalEffectAtLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGrappleLine_ApplyElementalEffectAtLocation_Statics::GrappleLine_eventApplyElementalEffectAtLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGrappleLine_ApplyElementalEffectAtLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGrappleLine_ApplyElementalEffectAtLocation_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AGrappleLine_ApplyElementalEffectAtLocation_Statics::GrappleLine_eventApplyElementalEffectAtLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGrappleLine_ApplyElementalEffectAtLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGrappleLine_ApplyElementalEffectAtLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGrappleLine::execApplyElementalEffectAtLocation)
{
	P_GET_STRUCT(FVector,Z_Param_Location);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ApplyElementalEffectAtLocation(Z_Param_Location);
	P_NATIVE_END;
}
// ********** End Class AGrappleLine Function ApplyElementalEffectAtLocation ***********************

// ********** Begin Class AGrappleLine Function ApplyElementalTrail ********************************
struct Z_Construct_UFunction_AGrappleLine_ApplyElementalTrail_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GrappleLine|Elemental" },
		{ "ModuleRelativePath", "Grapple/GrappleLine.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGrappleLine_ApplyElementalTrail_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGrappleLine, nullptr, "ApplyElementalTrail", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGrappleLine_ApplyElementalTrail_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGrappleLine_ApplyElementalTrail_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AGrappleLine_ApplyElementalTrail()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGrappleLine_ApplyElementalTrail_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGrappleLine::execApplyElementalTrail)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ApplyElementalTrail();
	P_NATIVE_END;
}
// ********** End Class AGrappleLine Function ApplyElementalTrail **********************************

// ********** Begin Class AGrappleLine Function ApplyFireEffect ************************************
struct Z_Construct_UFunction_AGrappleLine_ApplyFireEffect_Statics
{
	struct GrappleLine_eventApplyFireEffect_Parms
	{
		FVector Location;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Grapple/GrappleLine.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGrappleLine_ApplyFireEffect_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GrappleLine_eventApplyFireEffect_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGrappleLine_ApplyFireEffect_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGrappleLine_ApplyFireEffect_Statics::NewProp_Location,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGrappleLine_ApplyFireEffect_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGrappleLine_ApplyFireEffect_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGrappleLine, nullptr, "ApplyFireEffect", Z_Construct_UFunction_AGrappleLine_ApplyFireEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGrappleLine_ApplyFireEffect_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGrappleLine_ApplyFireEffect_Statics::GrappleLine_eventApplyFireEffect_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00880401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGrappleLine_ApplyFireEffect_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGrappleLine_ApplyFireEffect_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AGrappleLine_ApplyFireEffect_Statics::GrappleLine_eventApplyFireEffect_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGrappleLine_ApplyFireEffect()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGrappleLine_ApplyFireEffect_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGrappleLine::execApplyFireEffect)
{
	P_GET_STRUCT(FVector,Z_Param_Location);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ApplyFireEffect(Z_Param_Location);
	P_NATIVE_END;
}
// ********** End Class AGrappleLine Function ApplyFireEffect **************************************

// ********** Begin Class AGrappleLine Function ApplyIceEffect *************************************
struct Z_Construct_UFunction_AGrappleLine_ApplyIceEffect_Statics
{
	struct GrappleLine_eventApplyIceEffect_Parms
	{
		FVector Location;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Grapple/GrappleLine.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGrappleLine_ApplyIceEffect_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GrappleLine_eventApplyIceEffect_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGrappleLine_ApplyIceEffect_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGrappleLine_ApplyIceEffect_Statics::NewProp_Location,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGrappleLine_ApplyIceEffect_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGrappleLine_ApplyIceEffect_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGrappleLine, nullptr, "ApplyIceEffect", Z_Construct_UFunction_AGrappleLine_ApplyIceEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGrappleLine_ApplyIceEffect_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGrappleLine_ApplyIceEffect_Statics::GrappleLine_eventApplyIceEffect_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00880401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGrappleLine_ApplyIceEffect_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGrappleLine_ApplyIceEffect_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AGrappleLine_ApplyIceEffect_Statics::GrappleLine_eventApplyIceEffect_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGrappleLine_ApplyIceEffect()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGrappleLine_ApplyIceEffect_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGrappleLine::execApplyIceEffect)
{
	P_GET_STRUCT(FVector,Z_Param_Location);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ApplyIceEffect(Z_Param_Location);
	P_NATIVE_END;
}
// ********** End Class AGrappleLine Function ApplyIceEffect ***************************************

// ********** Begin Class AGrappleLine Function ApplyLightningEffect *******************************
struct Z_Construct_UFunction_AGrappleLine_ApplyLightningEffect_Statics
{
	struct GrappleLine_eventApplyLightningEffect_Parms
	{
		FVector Location;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Grapple/GrappleLine.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGrappleLine_ApplyLightningEffect_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GrappleLine_eventApplyLightningEffect_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGrappleLine_ApplyLightningEffect_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGrappleLine_ApplyLightningEffect_Statics::NewProp_Location,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGrappleLine_ApplyLightningEffect_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGrappleLine_ApplyLightningEffect_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGrappleLine, nullptr, "ApplyLightningEffect", Z_Construct_UFunction_AGrappleLine_ApplyLightningEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGrappleLine_ApplyLightningEffect_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGrappleLine_ApplyLightningEffect_Statics::GrappleLine_eventApplyLightningEffect_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00880401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGrappleLine_ApplyLightningEffect_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGrappleLine_ApplyLightningEffect_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AGrappleLine_ApplyLightningEffect_Statics::GrappleLine_eventApplyLightningEffect_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGrappleLine_ApplyLightningEffect()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGrappleLine_ApplyLightningEffect_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGrappleLine::execApplyLightningEffect)
{
	P_GET_STRUCT(FVector,Z_Param_Location);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ApplyLightningEffect(Z_Param_Location);
	P_NATIVE_END;
}
// ********** End Class AGrappleLine Function ApplyLightningEffect *********************************

// ********** Begin Class AGrappleLine Function ApplyVoidEffect ************************************
struct Z_Construct_UFunction_AGrappleLine_ApplyVoidEffect_Statics
{
	struct GrappleLine_eventApplyVoidEffect_Parms
	{
		FVector Location;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Grapple/GrappleLine.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGrappleLine_ApplyVoidEffect_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GrappleLine_eventApplyVoidEffect_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGrappleLine_ApplyVoidEffect_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGrappleLine_ApplyVoidEffect_Statics::NewProp_Location,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGrappleLine_ApplyVoidEffect_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGrappleLine_ApplyVoidEffect_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGrappleLine, nullptr, "ApplyVoidEffect", Z_Construct_UFunction_AGrappleLine_ApplyVoidEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGrappleLine_ApplyVoidEffect_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGrappleLine_ApplyVoidEffect_Statics::GrappleLine_eventApplyVoidEffect_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00880401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGrappleLine_ApplyVoidEffect_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGrappleLine_ApplyVoidEffect_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AGrappleLine_ApplyVoidEffect_Statics::GrappleLine_eventApplyVoidEffect_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGrappleLine_ApplyVoidEffect()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGrappleLine_ApplyVoidEffect_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGrappleLine::execApplyVoidEffect)
{
	P_GET_STRUCT(FVector,Z_Param_Location);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ApplyVoidEffect(Z_Param_Location);
	P_NATIVE_END;
}
// ********** End Class AGrappleLine Function ApplyVoidEffect **************************************

// ********** Begin Class AGrappleLine Function CanConnectTo ***************************************
struct Z_Construct_UFunction_AGrappleLine_CanConnectTo_Statics
{
	struct GrappleLine_eventCanConnectTo_Parms
	{
		AGrappleLine* OtherLine;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GrappleLine|Web" },
		{ "ModuleRelativePath", "Grapple/GrappleLine.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherLine;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGrappleLine_CanConnectTo_Statics::NewProp_OtherLine = { "OtherLine", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GrappleLine_eventCanConnectTo_Parms, OtherLine), Z_Construct_UClass_AGrappleLine_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AGrappleLine_CanConnectTo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((GrappleLine_eventCanConnectTo_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGrappleLine_CanConnectTo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GrappleLine_eventCanConnectTo_Parms), &Z_Construct_UFunction_AGrappleLine_CanConnectTo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGrappleLine_CanConnectTo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGrappleLine_CanConnectTo_Statics::NewProp_OtherLine,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGrappleLine_CanConnectTo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGrappleLine_CanConnectTo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGrappleLine_CanConnectTo_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGrappleLine, nullptr, "CanConnectTo", Z_Construct_UFunction_AGrappleLine_CanConnectTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGrappleLine_CanConnectTo_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGrappleLine_CanConnectTo_Statics::GrappleLine_eventCanConnectTo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGrappleLine_CanConnectTo_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGrappleLine_CanConnectTo_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AGrappleLine_CanConnectTo_Statics::GrappleLine_eventCanConnectTo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGrappleLine_CanConnectTo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGrappleLine_CanConnectTo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGrappleLine::execCanConnectTo)
{
	P_GET_OBJECT(AGrappleLine,Z_Param_OtherLine);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanConnectTo(Z_Param_OtherLine);
	P_NATIVE_END;
}
// ********** End Class AGrappleLine Function CanConnectTo *****************************************

// ********** Begin Class AGrappleLine Function CreateWebIntersection ******************************
struct Z_Construct_UFunction_AGrappleLine_CreateWebIntersection_Statics
{
	struct GrappleLine_eventCreateWebIntersection_Parms
	{
		AGrappleLine* OtherLine;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GrappleLine|Web" },
		{ "ModuleRelativePath", "Grapple/GrappleLine.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherLine;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGrappleLine_CreateWebIntersection_Statics::NewProp_OtherLine = { "OtherLine", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GrappleLine_eventCreateWebIntersection_Parms, OtherLine), Z_Construct_UClass_AGrappleLine_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGrappleLine_CreateWebIntersection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGrappleLine_CreateWebIntersection_Statics::NewProp_OtherLine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGrappleLine_CreateWebIntersection_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGrappleLine_CreateWebIntersection_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGrappleLine, nullptr, "CreateWebIntersection", Z_Construct_UFunction_AGrappleLine_CreateWebIntersection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGrappleLine_CreateWebIntersection_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGrappleLine_CreateWebIntersection_Statics::GrappleLine_eventCreateWebIntersection_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGrappleLine_CreateWebIntersection_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGrappleLine_CreateWebIntersection_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AGrappleLine_CreateWebIntersection_Statics::GrappleLine_eventCreateWebIntersection_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGrappleLine_CreateWebIntersection()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGrappleLine_CreateWebIntersection_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGrappleLine::execCreateWebIntersection)
{
	P_GET_OBJECT(AGrappleLine,Z_Param_OtherLine);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CreateWebIntersection(Z_Param_OtherLine);
	P_NATIVE_END;
}
// ********** End Class AGrappleLine Function CreateWebIntersection ********************************

// ********** Begin Class AGrappleLine Function ExpireLine *****************************************
struct Z_Construct_UFunction_AGrappleLine_ExpireLine_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GrappleLine" },
		{ "ModuleRelativePath", "Grapple/GrappleLine.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGrappleLine_ExpireLine_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGrappleLine, nullptr, "ExpireLine", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGrappleLine_ExpireLine_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGrappleLine_ExpireLine_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AGrappleLine_ExpireLine()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGrappleLine_ExpireLine_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGrappleLine::execExpireLine)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ExpireLine();
	P_NATIVE_END;
}
// ********** End Class AGrappleLine Function ExpireLine *******************************************

// ********** Begin Class AGrappleLine Function GetLineData ****************************************
struct Z_Construct_UFunction_AGrappleLine_GetLineData_Statics
{
	struct GrappleLine_eventGetLineData_Parms
	{
		FGrappleLineData ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GrappleLine" },
		{ "ModuleRelativePath", "Grapple/GrappleLine.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGrappleLine_GetLineData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GrappleLine_eventGetLineData_Parms, ReturnValue), Z_Construct_UScriptStruct_FGrappleLineData, METADATA_PARAMS(0, nullptr) }; // 60921744
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGrappleLine_GetLineData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGrappleLine_GetLineData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGrappleLine_GetLineData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGrappleLine_GetLineData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGrappleLine, nullptr, "GetLineData", Z_Construct_UFunction_AGrappleLine_GetLineData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGrappleLine_GetLineData_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGrappleLine_GetLineData_Statics::GrappleLine_eventGetLineData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGrappleLine_GetLineData_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGrappleLine_GetLineData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AGrappleLine_GetLineData_Statics::GrappleLine_eventGetLineData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGrappleLine_GetLineData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGrappleLine_GetLineData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGrappleLine::execGetLineData)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FGrappleLineData*)Z_Param__Result=P_THIS->GetLineData();
	P_NATIVE_END;
}
// ********** End Class AGrappleLine Function GetLineData ******************************************

// ********** Begin Class AGrappleLine Function InitializeLine *************************************
struct Z_Construct_UFunction_AGrappleLine_InitializeLine_Statics
{
	struct GrappleLine_eventInitializeLine_Parms
	{
		FGrappleLineData InLineData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GrappleLine" },
		{ "ModuleRelativePath", "Grapple/GrappleLine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InLineData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InLineData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGrappleLine_InitializeLine_Statics::NewProp_InLineData = { "InLineData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GrappleLine_eventInitializeLine_Parms, InLineData), Z_Construct_UScriptStruct_FGrappleLineData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InLineData_MetaData), NewProp_InLineData_MetaData) }; // 60921744
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGrappleLine_InitializeLine_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGrappleLine_InitializeLine_Statics::NewProp_InLineData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGrappleLine_InitializeLine_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGrappleLine_InitializeLine_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGrappleLine, nullptr, "InitializeLine", Z_Construct_UFunction_AGrappleLine_InitializeLine_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGrappleLine_InitializeLine_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGrappleLine_InitializeLine_Statics::GrappleLine_eventInitializeLine_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGrappleLine_InitializeLine_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGrappleLine_InitializeLine_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AGrappleLine_InitializeLine_Statics::GrappleLine_eventInitializeLine_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGrappleLine_InitializeLine()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGrappleLine_InitializeLine_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGrappleLine::execInitializeLine)
{
	P_GET_STRUCT_REF(FGrappleLineData,Z_Param_Out_InLineData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitializeLine(Z_Param_Out_InLineData);
	P_NATIVE_END;
}
// ********** End Class AGrappleLine Function InitializeLine ***************************************

// ********** Begin Class AGrappleLine Function IsLineValid ****************************************
struct Z_Construct_UFunction_AGrappleLine_IsLineValid_Statics
{
	struct GrappleLine_eventIsLineValid_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GrappleLine" },
		{ "ModuleRelativePath", "Grapple/GrappleLine.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AGrappleLine_IsLineValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((GrappleLine_eventIsLineValid_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGrappleLine_IsLineValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GrappleLine_eventIsLineValid_Parms), &Z_Construct_UFunction_AGrappleLine_IsLineValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGrappleLine_IsLineValid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGrappleLine_IsLineValid_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGrappleLine_IsLineValid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGrappleLine_IsLineValid_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGrappleLine, nullptr, "IsLineValid", Z_Construct_UFunction_AGrappleLine_IsLineValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGrappleLine_IsLineValid_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGrappleLine_IsLineValid_Statics::GrappleLine_eventIsLineValid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGrappleLine_IsLineValid_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGrappleLine_IsLineValid_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AGrappleLine_IsLineValid_Statics::GrappleLine_eventIsLineValid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGrappleLine_IsLineValid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGrappleLine_IsLineValid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGrappleLine::execIsLineValid)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsLineValid();
	P_NATIVE_END;
}
// ********** End Class AGrappleLine Function IsLineValid ******************************************

// ********** Begin Class AGrappleLine Function OnElementalEffect **********************************
struct GrappleLine_eventOnElementalEffect_Parms
{
	FVector Location;
	ETransfigurationElement Element;
};
static FName NAME_AGrappleLine_OnElementalEffect = FName(TEXT("OnElementalEffect"));
void AGrappleLine::OnElementalEffect(FVector Location, ETransfigurationElement Element)
{
	GrappleLine_eventOnElementalEffect_Parms Parms;
	Parms.Location=Location;
	Parms.Element=Element;
	UFunction* Func = FindFunctionChecked(NAME_AGrappleLine_OnElementalEffect);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AGrappleLine_OnElementalEffect_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GrappleLine|Elemental" },
		{ "ModuleRelativePath", "Grapple/GrappleLine.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Element_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Element;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGrappleLine_OnElementalEffect_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GrappleLine_eventOnElementalEffect_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AGrappleLine_OnElementalEffect_Statics::NewProp_Element_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AGrappleLine_OnElementalEffect_Statics::NewProp_Element = { "Element", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GrappleLine_eventOnElementalEffect_Parms, Element), Z_Construct_UEnum_Transfigure_ETransfigurationElement, METADATA_PARAMS(0, nullptr) }; // 4031656671
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGrappleLine_OnElementalEffect_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGrappleLine_OnElementalEffect_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGrappleLine_OnElementalEffect_Statics::NewProp_Element_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGrappleLine_OnElementalEffect_Statics::NewProp_Element,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGrappleLine_OnElementalEffect_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGrappleLine_OnElementalEffect_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGrappleLine, nullptr, "OnElementalEffect", Z_Construct_UFunction_AGrappleLine_OnElementalEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGrappleLine_OnElementalEffect_Statics::PropPointers), sizeof(GrappleLine_eventOnElementalEffect_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08820800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGrappleLine_OnElementalEffect_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGrappleLine_OnElementalEffect_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(GrappleLine_eventOnElementalEffect_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGrappleLine_OnElementalEffect()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGrappleLine_OnElementalEffect_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class AGrappleLine Function OnElementalEffect ************************************

// ********** Begin Class AGrappleLine Function OnLineCreated **************************************
struct GrappleLine_eventOnLineCreated_Parms
{
	FGrappleLineData Data;
};
static FName NAME_AGrappleLine_OnLineCreated = FName(TEXT("OnLineCreated"));
void AGrappleLine::OnLineCreated(FGrappleLineData const& Data)
{
	GrappleLine_eventOnLineCreated_Parms Parms;
	Parms.Data=Data;
	UFunction* Func = FindFunctionChecked(NAME_AGrappleLine_OnLineCreated);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AGrappleLine_OnLineCreated_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GrappleLine|VFX" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Blueprint events\n" },
#endif
		{ "ModuleRelativePath", "Grapple/GrappleLine.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Blueprint events" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGrappleLine_OnLineCreated_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GrappleLine_eventOnLineCreated_Parms, Data), Z_Construct_UScriptStruct_FGrappleLineData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 60921744
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGrappleLine_OnLineCreated_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGrappleLine_OnLineCreated_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGrappleLine_OnLineCreated_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGrappleLine_OnLineCreated_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGrappleLine, nullptr, "OnLineCreated", Z_Construct_UFunction_AGrappleLine_OnLineCreated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGrappleLine_OnLineCreated_Statics::PropPointers), sizeof(GrappleLine_eventOnLineCreated_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGrappleLine_OnLineCreated_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGrappleLine_OnLineCreated_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(GrappleLine_eventOnLineCreated_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGrappleLine_OnLineCreated()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGrappleLine_OnLineCreated_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class AGrappleLine Function OnLineCreated ****************************************

// ********** Begin Class AGrappleLine Function OnLineExpired **************************************
static FName NAME_AGrappleLine_OnLineExpired = FName(TEXT("OnLineExpired"));
void AGrappleLine::OnLineExpired()
{
	UFunction* Func = FindFunctionChecked(NAME_AGrappleLine_OnLineExpired);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_AGrappleLine_OnLineExpired_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GrappleLine|VFX" },
		{ "ModuleRelativePath", "Grapple/GrappleLine.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGrappleLine_OnLineExpired_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGrappleLine, nullptr, "OnLineExpired", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGrappleLine_OnLineExpired_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGrappleLine_OnLineExpired_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AGrappleLine_OnLineExpired()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGrappleLine_OnLineExpired_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class AGrappleLine Function OnLineExpired ****************************************

// ********** Begin Class AGrappleLine Function OnWebIntersectionCreated ***************************
struct Z_Construct_UFunction_AGrappleLine_OnWebIntersectionCreated_Statics
{
	struct GrappleLine_eventOnWebIntersectionCreated_Parms
	{
		FVector IntersectionPoint;
		TArray<AGrappleLine*> ConnectedLines;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GrappleLine|Web" },
		{ "ModuleRelativePath", "Grapple/GrappleLine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConnectedLines_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_IntersectionPoint;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ConnectedLines_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ConnectedLines;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGrappleLine_OnWebIntersectionCreated_Statics::NewProp_IntersectionPoint = { "IntersectionPoint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GrappleLine_eventOnWebIntersectionCreated_Parms, IntersectionPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGrappleLine_OnWebIntersectionCreated_Statics::NewProp_ConnectedLines_Inner = { "ConnectedLines", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AGrappleLine_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AGrappleLine_OnWebIntersectionCreated_Statics::NewProp_ConnectedLines = { "ConnectedLines", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GrappleLine_eventOnWebIntersectionCreated_Parms, ConnectedLines), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConnectedLines_MetaData), NewProp_ConnectedLines_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGrappleLine_OnWebIntersectionCreated_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGrappleLine_OnWebIntersectionCreated_Statics::NewProp_IntersectionPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGrappleLine_OnWebIntersectionCreated_Statics::NewProp_ConnectedLines_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGrappleLine_OnWebIntersectionCreated_Statics::NewProp_ConnectedLines,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGrappleLine_OnWebIntersectionCreated_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGrappleLine_OnWebIntersectionCreated_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGrappleLine, nullptr, "OnWebIntersectionCreated", Z_Construct_UFunction_AGrappleLine_OnWebIntersectionCreated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGrappleLine_OnWebIntersectionCreated_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGrappleLine_OnWebIntersectionCreated_Statics::GrappleLine_eventOnWebIntersectionCreated_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGrappleLine_OnWebIntersectionCreated_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGrappleLine_OnWebIntersectionCreated_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AGrappleLine_OnWebIntersectionCreated_Statics::GrappleLine_eventOnWebIntersectionCreated_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGrappleLine_OnWebIntersectionCreated()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGrappleLine_OnWebIntersectionCreated_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGrappleLine::execOnWebIntersectionCreated)
{
	P_GET_STRUCT(FVector,Z_Param_IntersectionPoint);
	P_GET_TARRAY_REF(AGrappleLine*,Z_Param_Out_ConnectedLines);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnWebIntersectionCreated(Z_Param_IntersectionPoint,Z_Param_Out_ConnectedLines);
	P_NATIVE_END;
}
// ********** End Class AGrappleLine Function OnWebIntersectionCreated *****************************

// ********** Begin Class AGrappleLine Function StartLifespan **************************************
struct Z_Construct_UFunction_AGrappleLine_StartLifespan_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GrappleLine" },
		{ "ModuleRelativePath", "Grapple/GrappleLine.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGrappleLine_StartLifespan_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGrappleLine, nullptr, "StartLifespan", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGrappleLine_StartLifespan_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGrappleLine_StartLifespan_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AGrappleLine_StartLifespan()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGrappleLine_StartLifespan_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGrappleLine::execStartLifespan)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartLifespan();
	P_NATIVE_END;
}
// ********** End Class AGrappleLine Function StartLifespan ****************************************

// ********** Begin Class AGrappleLine *************************************************************
void AGrappleLine::StaticRegisterNativesAGrappleLine()
{
	UClass* Class = AGrappleLine::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ApplyEarthEffect", &AGrappleLine::execApplyEarthEffect },
		{ "ApplyElementalEffectAtLocation", &AGrappleLine::execApplyElementalEffectAtLocation },
		{ "ApplyElementalTrail", &AGrappleLine::execApplyElementalTrail },
		{ "ApplyFireEffect", &AGrappleLine::execApplyFireEffect },
		{ "ApplyIceEffect", &AGrappleLine::execApplyIceEffect },
		{ "ApplyLightningEffect", &AGrappleLine::execApplyLightningEffect },
		{ "ApplyVoidEffect", &AGrappleLine::execApplyVoidEffect },
		{ "CanConnectTo", &AGrappleLine::execCanConnectTo },
		{ "CreateWebIntersection", &AGrappleLine::execCreateWebIntersection },
		{ "ExpireLine", &AGrappleLine::execExpireLine },
		{ "GetLineData", &AGrappleLine::execGetLineData },
		{ "InitializeLine", &AGrappleLine::execInitializeLine },
		{ "IsLineValid", &AGrappleLine::execIsLineValid },
		{ "OnWebIntersectionCreated", &AGrappleLine::execOnWebIntersectionCreated },
		{ "StartLifespan", &AGrappleLine::execStartLifespan },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AGrappleLine;
UClass* AGrappleLine::GetPrivateStaticClass()
{
	using TClass = AGrappleLine;
	if (!Z_Registration_Info_UClass_AGrappleLine.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("GrappleLine"),
			Z_Registration_Info_UClass_AGrappleLine.InnerSingleton,
			StaticRegisterNativesAGrappleLine,
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
	return Z_Registration_Info_UClass_AGrappleLine.InnerSingleton;
}
UClass* Z_Construct_UClass_AGrappleLine_NoRegister()
{
	return AGrappleLine::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AGrappleLine_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Grapple/GrappleLine.h" },
		{ "ModuleRelativePath", "Grapple/GrappleLine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SplineComponent_MetaData[] = {
		{ "Category", "GrappleLine" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Components\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Grapple/GrappleLine.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Components" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NiagaraEffect_MetaData[] = {
		{ "Category", "GrappleLine" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Grapple/GrappleLine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrailDecal_MetaData[] = {
		{ "Category", "GrappleLine" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Grapple/GrappleLine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LineData_MetaData[] = {
		{ "ModuleRelativePath", "Grapple/GrappleLine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsValid_MetaData[] = {
		{ "ModuleRelativePath", "Grapple/GrappleLine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeRemaining_MetaData[] = {
		{ "ModuleRelativePath", "Grapple/GrappleLine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExpirationTimer_MetaData[] = {
		{ "ModuleRelativePath", "Grapple/GrappleLine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrailPoints_MetaData[] = {
		{ "ModuleRelativePath", "Grapple/GrappleLine.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SplineComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NiagaraEffect;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TrailDecal;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LineData;
	static void NewProp_bIsValid_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsValid;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeRemaining;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ExpirationTimer;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TrailPoints_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TrailPoints;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AGrappleLine_ApplyEarthEffect, "ApplyEarthEffect" }, // 3263941028
		{ &Z_Construct_UFunction_AGrappleLine_ApplyElementalEffectAtLocation, "ApplyElementalEffectAtLocation" }, // 676043293
		{ &Z_Construct_UFunction_AGrappleLine_ApplyElementalTrail, "ApplyElementalTrail" }, // 2179661199
		{ &Z_Construct_UFunction_AGrappleLine_ApplyFireEffect, "ApplyFireEffect" }, // 2379438366
		{ &Z_Construct_UFunction_AGrappleLine_ApplyIceEffect, "ApplyIceEffect" }, // 2229245518
		{ &Z_Construct_UFunction_AGrappleLine_ApplyLightningEffect, "ApplyLightningEffect" }, // 1233348766
		{ &Z_Construct_UFunction_AGrappleLine_ApplyVoidEffect, "ApplyVoidEffect" }, // 3755671672
		{ &Z_Construct_UFunction_AGrappleLine_CanConnectTo, "CanConnectTo" }, // 342112432
		{ &Z_Construct_UFunction_AGrappleLine_CreateWebIntersection, "CreateWebIntersection" }, // 1866148067
		{ &Z_Construct_UFunction_AGrappleLine_ExpireLine, "ExpireLine" }, // 963299430
		{ &Z_Construct_UFunction_AGrappleLine_GetLineData, "GetLineData" }, // 992370495
		{ &Z_Construct_UFunction_AGrappleLine_InitializeLine, "InitializeLine" }, // 1017457569
		{ &Z_Construct_UFunction_AGrappleLine_IsLineValid, "IsLineValid" }, // 2072474613
		{ &Z_Construct_UFunction_AGrappleLine_OnElementalEffect, "OnElementalEffect" }, // 2760944067
		{ &Z_Construct_UFunction_AGrappleLine_OnLineCreated, "OnLineCreated" }, // 3226901278
		{ &Z_Construct_UFunction_AGrappleLine_OnLineExpired, "OnLineExpired" }, // 1555886012
		{ &Z_Construct_UFunction_AGrappleLine_OnWebIntersectionCreated, "OnWebIntersectionCreated" }, // 2351878640
		{ &Z_Construct_UFunction_AGrappleLine_StartLifespan, "StartLifespan" }, // 3483888039
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGrappleLine>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGrappleLine_Statics::NewProp_SplineComponent = { "SplineComponent", nullptr, (EPropertyFlags)0x01140000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGrappleLine, SplineComponent), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SplineComponent_MetaData), NewProp_SplineComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGrappleLine_Statics::NewProp_NiagaraEffect = { "NiagaraEffect", nullptr, (EPropertyFlags)0x01140000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGrappleLine, NiagaraEffect), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NiagaraEffect_MetaData), NewProp_NiagaraEffect_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGrappleLine_Statics::NewProp_TrailDecal = { "TrailDecal", nullptr, (EPropertyFlags)0x01140000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGrappleLine, TrailDecal), Z_Construct_UClass_UDecalComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrailDecal_MetaData), NewProp_TrailDecal_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGrappleLine_Statics::NewProp_LineData = { "LineData", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGrappleLine, LineData), Z_Construct_UScriptStruct_FGrappleLineData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LineData_MetaData), NewProp_LineData_MetaData) }; // 60921744
void Z_Construct_UClass_AGrappleLine_Statics::NewProp_bIsValid_SetBit(void* Obj)
{
	((AGrappleLine*)Obj)->bIsValid = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGrappleLine_Statics::NewProp_bIsValid = { "bIsValid", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGrappleLine), &Z_Construct_UClass_AGrappleLine_Statics::NewProp_bIsValid_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsValid_MetaData), NewProp_bIsValid_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGrappleLine_Statics::NewProp_TimeRemaining = { "TimeRemaining", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGrappleLine, TimeRemaining), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeRemaining_MetaData), NewProp_TimeRemaining_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGrappleLine_Statics::NewProp_ExpirationTimer = { "ExpirationTimer", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGrappleLine, ExpirationTimer), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExpirationTimer_MetaData), NewProp_ExpirationTimer_MetaData) }; // 3834150579
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGrappleLine_Statics::NewProp_TrailPoints_Inner = { "TrailPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AGrappleLine_Statics::NewProp_TrailPoints = { "TrailPoints", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGrappleLine, TrailPoints), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrailPoints_MetaData), NewProp_TrailPoints_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGrappleLine_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGrappleLine_Statics::NewProp_SplineComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGrappleLine_Statics::NewProp_NiagaraEffect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGrappleLine_Statics::NewProp_TrailDecal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGrappleLine_Statics::NewProp_LineData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGrappleLine_Statics::NewProp_bIsValid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGrappleLine_Statics::NewProp_TimeRemaining,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGrappleLine_Statics::NewProp_ExpirationTimer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGrappleLine_Statics::NewProp_TrailPoints_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGrappleLine_Statics::NewProp_TrailPoints,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGrappleLine_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AGrappleLine_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Transfigure,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGrappleLine_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGrappleLine_Statics::ClassParams = {
	&AGrappleLine::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AGrappleLine_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AGrappleLine_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGrappleLine_Statics::Class_MetaDataParams), Z_Construct_UClass_AGrappleLine_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGrappleLine()
{
	if (!Z_Registration_Info_UClass_AGrappleLine.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGrappleLine.OuterSingleton, Z_Construct_UClass_AGrappleLine_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGrappleLine.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGrappleLine);
AGrappleLine::~AGrappleLine() {}
// ********** End Class AGrappleLine ***************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Grapple_GrappleLine_h__Script_Transfigure_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGrappleLine, AGrappleLine::StaticClass, TEXT("AGrappleLine"), &Z_Registration_Info_UClass_AGrappleLine, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGrappleLine), 1002198046U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Grapple_GrappleLine_h__Script_Transfigure_768359599(TEXT("/Script/Transfigure"),
	Z_CompiledInDeferFile_FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Grapple_GrappleLine_h__Script_Transfigure_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Grapple_GrappleLine_h__Script_Transfigure_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS

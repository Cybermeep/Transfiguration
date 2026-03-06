// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TemporalClapAnimInstance.h"
#include "Components/SkeletalMeshComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeTemporalClapAnimInstance() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
TRANSFIGURE_API UClass* Z_Construct_UClass_ATMCharacter_NoRegister();
TRANSFIGURE_API UClass* Z_Construct_UClass_UTemporalClapAnimInstance();
TRANSFIGURE_API UClass* Z_Construct_UClass_UTemporalClapAnimInstance_NoRegister();
TRANSFIGURE_API UFunction* Z_Construct_UDelegateFunction_Transfigure_TemporalClapAnimEvent__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_Transfigure();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FTemporalClapAnimEvent ************************************************
struct Z_Construct_UDelegateFunction_Transfigure_TemporalClapAnimEvent__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Temporal/TemporalClapAnimInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_Transfigure_TemporalClapAnimEvent__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_Transfigure, nullptr, "TemporalClapAnimEvent__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Transfigure_TemporalClapAnimEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Transfigure_TemporalClapAnimEvent__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_Transfigure_TemporalClapAnimEvent__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Transfigure_TemporalClapAnimEvent__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FTemporalClapAnimEvent_DelegateWrapper(const FMulticastScriptDelegate& TemporalClapAnimEvent)
{
	TemporalClapAnimEvent.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FTemporalClapAnimEvent **************************************************

// ********** Begin Class UTemporalClapAnimInstance Function OnClapEnd *****************************
static FName NAME_UTemporalClapAnimInstance_OnClapEnd = FName(TEXT("OnClapEnd"));
void UTemporalClapAnimInstance::OnClapEnd()
{
	UFunction* Func = FindFunctionChecked(NAME_UTemporalClapAnimInstance_OnClapEnd);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_UTemporalClapAnimInstance_OnClapEnd_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Temporal|Animation" },
		{ "ModuleRelativePath", "Temporal/TemporalClapAnimInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTemporalClapAnimInstance_OnClapEnd_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTemporalClapAnimInstance, nullptr, "OnClapEnd", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTemporalClapAnimInstance_OnClapEnd_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTemporalClapAnimInstance_OnClapEnd_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UTemporalClapAnimInstance_OnClapEnd()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTemporalClapAnimInstance_OnClapEnd_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class UTemporalClapAnimInstance Function OnClapEnd *******************************

// ********** Begin Class UTemporalClapAnimInstance Function OnClapPeak ****************************
static FName NAME_UTemporalClapAnimInstance_OnClapPeak = FName(TEXT("OnClapPeak"));
void UTemporalClapAnimInstance::OnClapPeak()
{
	UFunction* Func = FindFunctionChecked(NAME_UTemporalClapAnimInstance_OnClapPeak);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_UTemporalClapAnimInstance_OnClapPeak_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Temporal|Animation" },
		{ "ModuleRelativePath", "Temporal/TemporalClapAnimInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTemporalClapAnimInstance_OnClapPeak_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTemporalClapAnimInstance, nullptr, "OnClapPeak", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTemporalClapAnimInstance_OnClapPeak_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTemporalClapAnimInstance_OnClapPeak_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UTemporalClapAnimInstance_OnClapPeak()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTemporalClapAnimInstance_OnClapPeak_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class UTemporalClapAnimInstance Function OnClapPeak ******************************

// ********** Begin Class UTemporalClapAnimInstance Function OnClapStart ***************************
static FName NAME_UTemporalClapAnimInstance_OnClapStart = FName(TEXT("OnClapStart"));
void UTemporalClapAnimInstance::OnClapStart()
{
	UFunction* Func = FindFunctionChecked(NAME_UTemporalClapAnimInstance_OnClapStart);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_UTemporalClapAnimInstance_OnClapStart_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Temporal|Animation" },
		{ "ModuleRelativePath", "Temporal/TemporalClapAnimInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTemporalClapAnimInstance_OnClapStart_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTemporalClapAnimInstance, nullptr, "OnClapStart", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTemporalClapAnimInstance_OnClapStart_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTemporalClapAnimInstance_OnClapStart_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UTemporalClapAnimInstance_OnClapStart()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTemporalClapAnimInstance_OnClapStart_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class UTemporalClapAnimInstance Function OnClapStart *****************************

// ********** Begin Class UTemporalClapAnimInstance Function PlayClapAnimation *********************
struct Z_Construct_UFunction_UTemporalClapAnimInstance_PlayClapAnimation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Temporal|Animation" },
		{ "ModuleRelativePath", "Temporal/TemporalClapAnimInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTemporalClapAnimInstance_PlayClapAnimation_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTemporalClapAnimInstance, nullptr, "PlayClapAnimation", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTemporalClapAnimInstance_PlayClapAnimation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTemporalClapAnimInstance_PlayClapAnimation_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UTemporalClapAnimInstance_PlayClapAnimation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTemporalClapAnimInstance_PlayClapAnimation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTemporalClapAnimInstance::execPlayClapAnimation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PlayClapAnimation();
	P_NATIVE_END;
}
// ********** End Class UTemporalClapAnimInstance Function PlayClapAnimation ***********************

// ********** Begin Class UTemporalClapAnimInstance Function StopClapAnimation *********************
struct Z_Construct_UFunction_UTemporalClapAnimInstance_StopClapAnimation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Temporal|Animation" },
		{ "ModuleRelativePath", "Temporal/TemporalClapAnimInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTemporalClapAnimInstance_StopClapAnimation_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTemporalClapAnimInstance, nullptr, "StopClapAnimation", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTemporalClapAnimInstance_StopClapAnimation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTemporalClapAnimInstance_StopClapAnimation_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UTemporalClapAnimInstance_StopClapAnimation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTemporalClapAnimInstance_StopClapAnimation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTemporalClapAnimInstance::execStopClapAnimation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopClapAnimation();
	P_NATIVE_END;
}
// ********** End Class UTemporalClapAnimInstance Function StopClapAnimation ***********************

// ********** Begin Class UTemporalClapAnimInstance ************************************************
void UTemporalClapAnimInstance::StaticRegisterNativesUTemporalClapAnimInstance()
{
	UClass* Class = UTemporalClapAnimInstance::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "PlayClapAnimation", &UTemporalClapAnimInstance::execPlayClapAnimation },
		{ "StopClapAnimation", &UTemporalClapAnimInstance::execStopClapAnimation },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UTemporalClapAnimInstance;
UClass* UTemporalClapAnimInstance::GetPrivateStaticClass()
{
	using TClass = UTemporalClapAnimInstance;
	if (!Z_Registration_Info_UClass_UTemporalClapAnimInstance.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("TemporalClapAnimInstance"),
			Z_Registration_Info_UClass_UTemporalClapAnimInstance.InnerSingleton,
			StaticRegisterNativesUTemporalClapAnimInstance,
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
	return Z_Registration_Info_UClass_UTemporalClapAnimInstance.InnerSingleton;
}
UClass* Z_Construct_UClass_UTemporalClapAnimInstance_NoRegister()
{
	return UTemporalClapAnimInstance::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UTemporalClapAnimInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "Temporal/TemporalClapAnimInstance.h" },
		{ "ModuleRelativePath", "Temporal/TemporalClapAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnClapPeakEvent_MetaData[] = {
		{ "ModuleRelativePath", "Temporal/TemporalClapAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnClapEndEvent_MetaData[] = {
		{ "ModuleRelativePath", "Temporal/TemporalClapAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsClapping_MetaData[] = {
		{ "Category", "Temporal|Animation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- Clap state ---\n" },
#endif
		{ "ModuleRelativePath", "Temporal/TemporalClapAnimInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- Clap state ---" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClapMontage_MetaData[] = {
		{ "Category", "Temporal|Animation" },
		{ "ModuleRelativePath", "Temporal/TemporalClapAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClapPeakNotifyName_MetaData[] = {
		{ "Category", "Temporal|Animation" },
		{ "ModuleRelativePath", "Temporal/TemporalClapAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClapEndNotifyName_MetaData[] = {
		{ "Category", "Temporal|Animation" },
		{ "ModuleRelativePath", "Temporal/TemporalClapAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClapBlendInTime_MetaData[] = {
		{ "Category", "Temporal|Animation" },
		{ "ModuleRelativePath", "Temporal/TemporalClapAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClapBlendOutTime_MetaData[] = {
		{ "Category", "Temporal|Animation" },
		{ "ModuleRelativePath", "Temporal/TemporalClapAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterSpeed_MetaData[] = {
		{ "Category", "Temporal|Animation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- Movement state (driven each frame, read by Anim BP) ---\n" },
#endif
		{ "ModuleRelativePath", "Temporal/TemporalClapAnimInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- Movement state (driven each frame, read by Anim BP) ---" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsWallRunning_MetaData[] = {
		{ "Category", "Temporal|Animation" },
		{ "ModuleRelativePath", "Temporal/TemporalClapAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsSliding_MetaData[] = {
		{ "Category", "Temporal|Animation" },
		{ "ModuleRelativePath", "Temporal/TemporalClapAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsSprinting_MetaData[] = {
		{ "Category", "Temporal|Animation" },
		{ "ModuleRelativePath", "Temporal/TemporalClapAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsInAir_MetaData[] = {
		{ "Category", "Temporal|Animation" },
		{ "ModuleRelativePath", "Temporal/TemporalClapAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsTemporalActive_MetaData[] = {
		{ "Category", "Temporal|Animation" },
		{ "ModuleRelativePath", "Temporal/TemporalClapAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TemporalChargeAlpha_MetaData[] = {
		{ "Category", "Temporal|Animation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- Blend values ---\n" },
#endif
		{ "ModuleRelativePath", "Temporal/TemporalClapAnimInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- Blend values ---" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WallRunLean_MetaData[] = {
		{ "Category", "Temporal|Animation" },
		{ "ModuleRelativePath", "Temporal/TemporalClapAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnerCharacter_MetaData[] = {
		{ "ModuleRelativePath", "Temporal/TemporalClapAnimInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnClapPeakEvent;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnClapEndEvent;
	static void NewProp_bIsClapping_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsClapping;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ClapMontage;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ClapPeakNotifyName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ClapEndNotifyName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ClapBlendInTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ClapBlendOutTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CharacterSpeed;
	static void NewProp_bIsWallRunning_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsWallRunning;
	static void NewProp_bIsSliding_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsSliding;
	static void NewProp_bIsSprinting_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsSprinting;
	static void NewProp_bIsInAir_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsInAir;
	static void NewProp_bIsTemporalActive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsTemporalActive;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TemporalChargeAlpha;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WallRunLean;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerCharacter;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UTemporalClapAnimInstance_OnClapEnd, "OnClapEnd" }, // 2118881044
		{ &Z_Construct_UFunction_UTemporalClapAnimInstance_OnClapPeak, "OnClapPeak" }, // 2503051484
		{ &Z_Construct_UFunction_UTemporalClapAnimInstance_OnClapStart, "OnClapStart" }, // 2851280578
		{ &Z_Construct_UFunction_UTemporalClapAnimInstance_PlayClapAnimation, "PlayClapAnimation" }, // 3441941389
		{ &Z_Construct_UFunction_UTemporalClapAnimInstance_StopClapAnimation, "StopClapAnimation" }, // 2450544469
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTemporalClapAnimInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTemporalClapAnimInstance_Statics::NewProp_OnClapPeakEvent = { "OnClapPeakEvent", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTemporalClapAnimInstance, OnClapPeakEvent), Z_Construct_UDelegateFunction_Transfigure_TemporalClapAnimEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnClapPeakEvent_MetaData), NewProp_OnClapPeakEvent_MetaData) }; // 3647578573
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTemporalClapAnimInstance_Statics::NewProp_OnClapEndEvent = { "OnClapEndEvent", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTemporalClapAnimInstance, OnClapEndEvent), Z_Construct_UDelegateFunction_Transfigure_TemporalClapAnimEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnClapEndEvent_MetaData), NewProp_OnClapEndEvent_MetaData) }; // 3647578573
void Z_Construct_UClass_UTemporalClapAnimInstance_Statics::NewProp_bIsClapping_SetBit(void* Obj)
{
	((UTemporalClapAnimInstance*)Obj)->bIsClapping = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTemporalClapAnimInstance_Statics::NewProp_bIsClapping = { "bIsClapping", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UTemporalClapAnimInstance), &Z_Construct_UClass_UTemporalClapAnimInstance_Statics::NewProp_bIsClapping_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsClapping_MetaData), NewProp_bIsClapping_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTemporalClapAnimInstance_Statics::NewProp_ClapMontage = { "ClapMontage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTemporalClapAnimInstance, ClapMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClapMontage_MetaData), NewProp_ClapMontage_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UTemporalClapAnimInstance_Statics::NewProp_ClapPeakNotifyName = { "ClapPeakNotifyName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTemporalClapAnimInstance, ClapPeakNotifyName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClapPeakNotifyName_MetaData), NewProp_ClapPeakNotifyName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UTemporalClapAnimInstance_Statics::NewProp_ClapEndNotifyName = { "ClapEndNotifyName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTemporalClapAnimInstance, ClapEndNotifyName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClapEndNotifyName_MetaData), NewProp_ClapEndNotifyName_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTemporalClapAnimInstance_Statics::NewProp_ClapBlendInTime = { "ClapBlendInTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTemporalClapAnimInstance, ClapBlendInTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClapBlendInTime_MetaData), NewProp_ClapBlendInTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTemporalClapAnimInstance_Statics::NewProp_ClapBlendOutTime = { "ClapBlendOutTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTemporalClapAnimInstance, ClapBlendOutTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClapBlendOutTime_MetaData), NewProp_ClapBlendOutTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTemporalClapAnimInstance_Statics::NewProp_CharacterSpeed = { "CharacterSpeed", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTemporalClapAnimInstance, CharacterSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterSpeed_MetaData), NewProp_CharacterSpeed_MetaData) };
void Z_Construct_UClass_UTemporalClapAnimInstance_Statics::NewProp_bIsWallRunning_SetBit(void* Obj)
{
	((UTemporalClapAnimInstance*)Obj)->bIsWallRunning = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTemporalClapAnimInstance_Statics::NewProp_bIsWallRunning = { "bIsWallRunning", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UTemporalClapAnimInstance), &Z_Construct_UClass_UTemporalClapAnimInstance_Statics::NewProp_bIsWallRunning_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsWallRunning_MetaData), NewProp_bIsWallRunning_MetaData) };
void Z_Construct_UClass_UTemporalClapAnimInstance_Statics::NewProp_bIsSliding_SetBit(void* Obj)
{
	((UTemporalClapAnimInstance*)Obj)->bIsSliding = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTemporalClapAnimInstance_Statics::NewProp_bIsSliding = { "bIsSliding", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UTemporalClapAnimInstance), &Z_Construct_UClass_UTemporalClapAnimInstance_Statics::NewProp_bIsSliding_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsSliding_MetaData), NewProp_bIsSliding_MetaData) };
void Z_Construct_UClass_UTemporalClapAnimInstance_Statics::NewProp_bIsSprinting_SetBit(void* Obj)
{
	((UTemporalClapAnimInstance*)Obj)->bIsSprinting = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTemporalClapAnimInstance_Statics::NewProp_bIsSprinting = { "bIsSprinting", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UTemporalClapAnimInstance), &Z_Construct_UClass_UTemporalClapAnimInstance_Statics::NewProp_bIsSprinting_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsSprinting_MetaData), NewProp_bIsSprinting_MetaData) };
void Z_Construct_UClass_UTemporalClapAnimInstance_Statics::NewProp_bIsInAir_SetBit(void* Obj)
{
	((UTemporalClapAnimInstance*)Obj)->bIsInAir = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTemporalClapAnimInstance_Statics::NewProp_bIsInAir = { "bIsInAir", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UTemporalClapAnimInstance), &Z_Construct_UClass_UTemporalClapAnimInstance_Statics::NewProp_bIsInAir_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsInAir_MetaData), NewProp_bIsInAir_MetaData) };
void Z_Construct_UClass_UTemporalClapAnimInstance_Statics::NewProp_bIsTemporalActive_SetBit(void* Obj)
{
	((UTemporalClapAnimInstance*)Obj)->bIsTemporalActive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTemporalClapAnimInstance_Statics::NewProp_bIsTemporalActive = { "bIsTemporalActive", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UTemporalClapAnimInstance), &Z_Construct_UClass_UTemporalClapAnimInstance_Statics::NewProp_bIsTemporalActive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsTemporalActive_MetaData), NewProp_bIsTemporalActive_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTemporalClapAnimInstance_Statics::NewProp_TemporalChargeAlpha = { "TemporalChargeAlpha", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTemporalClapAnimInstance, TemporalChargeAlpha), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TemporalChargeAlpha_MetaData), NewProp_TemporalChargeAlpha_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTemporalClapAnimInstance_Statics::NewProp_WallRunLean = { "WallRunLean", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTemporalClapAnimInstance, WallRunLean), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WallRunLean_MetaData), NewProp_WallRunLean_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTemporalClapAnimInstance_Statics::NewProp_OwnerCharacter = { "OwnerCharacter", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTemporalClapAnimInstance, OwnerCharacter), Z_Construct_UClass_ATMCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerCharacter_MetaData), NewProp_OwnerCharacter_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTemporalClapAnimInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTemporalClapAnimInstance_Statics::NewProp_OnClapPeakEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTemporalClapAnimInstance_Statics::NewProp_OnClapEndEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTemporalClapAnimInstance_Statics::NewProp_bIsClapping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTemporalClapAnimInstance_Statics::NewProp_ClapMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTemporalClapAnimInstance_Statics::NewProp_ClapPeakNotifyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTemporalClapAnimInstance_Statics::NewProp_ClapEndNotifyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTemporalClapAnimInstance_Statics::NewProp_ClapBlendInTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTemporalClapAnimInstance_Statics::NewProp_ClapBlendOutTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTemporalClapAnimInstance_Statics::NewProp_CharacterSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTemporalClapAnimInstance_Statics::NewProp_bIsWallRunning,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTemporalClapAnimInstance_Statics::NewProp_bIsSliding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTemporalClapAnimInstance_Statics::NewProp_bIsSprinting,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTemporalClapAnimInstance_Statics::NewProp_bIsInAir,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTemporalClapAnimInstance_Statics::NewProp_bIsTemporalActive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTemporalClapAnimInstance_Statics::NewProp_TemporalChargeAlpha,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTemporalClapAnimInstance_Statics::NewProp_WallRunLean,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTemporalClapAnimInstance_Statics::NewProp_OwnerCharacter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTemporalClapAnimInstance_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UTemporalClapAnimInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_Transfigure,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTemporalClapAnimInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTemporalClapAnimInstance_Statics::ClassParams = {
	&UTemporalClapAnimInstance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UTemporalClapAnimInstance_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UTemporalClapAnimInstance_Statics::PropPointers),
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTemporalClapAnimInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UTemporalClapAnimInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTemporalClapAnimInstance()
{
	if (!Z_Registration_Info_UClass_UTemporalClapAnimInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTemporalClapAnimInstance.OuterSingleton, Z_Construct_UClass_UTemporalClapAnimInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTemporalClapAnimInstance.OuterSingleton;
}
UTemporalClapAnimInstance::UTemporalClapAnimInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTemporalClapAnimInstance);
UTemporalClapAnimInstance::~UTemporalClapAnimInstance() {}
// ********** End Class UTemporalClapAnimInstance **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Temporal_TemporalClapAnimInstance_h__Script_Transfigure_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTemporalClapAnimInstance, UTemporalClapAnimInstance::StaticClass, TEXT("UTemporalClapAnimInstance"), &Z_Registration_Info_UClass_UTemporalClapAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTemporalClapAnimInstance), 1251115172U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Temporal_TemporalClapAnimInstance_h__Script_Transfigure_2066326212(TEXT("/Script/Transfigure"),
	Z_CompiledInDeferFile_FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Temporal_TemporalClapAnimInstance_h__Script_Transfigure_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Temporal_TemporalClapAnimInstance_h__Script_Transfigure_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS

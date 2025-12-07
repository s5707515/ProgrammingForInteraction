// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FadingPlatform.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeFadingPlatform() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
FPI_API UClass* Z_Construct_UClass_AFadingPlatform();
FPI_API UClass* Z_Construct_UClass_AFadingPlatform_NoRegister();
UPackage* Z_Construct_UPackage__Script_FPI();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AFadingPlatform Function StartFade ***************************************
struct Z_Construct_UFunction_AFadingPlatform_StartFade_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FadingPlatform.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFadingPlatform_StartFade_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AFadingPlatform, nullptr, "StartFade", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFadingPlatform_StartFade_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFadingPlatform_StartFade_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AFadingPlatform_StartFade()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFadingPlatform_StartFade_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFadingPlatform::execStartFade)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartFade();
	P_NATIVE_END;
}
// ********** End Class AFadingPlatform Function StartFade *****************************************

// ********** Begin Class AFadingPlatform **********************************************************
void AFadingPlatform::StaticRegisterNativesAFadingPlatform()
{
	UClass* Class = AFadingPlatform::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "StartFade", &AFadingPlatform::execStartFade },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AFadingPlatform;
UClass* AFadingPlatform::GetPrivateStaticClass()
{
	using TClass = AFadingPlatform;
	if (!Z_Registration_Info_UClass_AFadingPlatform.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("FadingPlatform"),
			Z_Registration_Info_UClass_AFadingPlatform.InnerSingleton,
			StaticRegisterNativesAFadingPlatform,
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
	return Z_Registration_Info_UClass_AFadingPlatform.InnerSingleton;
}
UClass* Z_Construct_UClass_AFadingPlatform_NoRegister()
{
	return AFadingPlatform::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AFadingPlatform_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "FadingPlatform.h" },
		{ "ModuleRelativePath", "FadingPlatform.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_platformMesh_MetaData[] = {
		{ "Category", "FadingPlatform" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FadingPlatform.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_dynamicMat_MetaData[] = {
		{ "Category", "FadingPlatform" },
		{ "ModuleRelativePath", "FadingPlatform.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_fadeDuration_MetaData[] = {
		{ "Category", "Fade" },
		{ "ModuleRelativePath", "FadingPlatform.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_respawnTime_MetaData[] = {
		{ "Category", "Fade" },
		{ "ModuleRelativePath", "FadingPlatform.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_platformMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_dynamicMat;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_fadeDuration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_respawnTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AFadingPlatform_StartFade, "StartFade" }, // 3785167258
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFadingPlatform>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFadingPlatform_Statics::NewProp_platformMesh = { "platformMesh", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFadingPlatform, platformMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_platformMesh_MetaData), NewProp_platformMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFadingPlatform_Statics::NewProp_dynamicMat = { "dynamicMat", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFadingPlatform, dynamicMat), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_dynamicMat_MetaData), NewProp_dynamicMat_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFadingPlatform_Statics::NewProp_fadeDuration = { "fadeDuration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFadingPlatform, fadeDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_fadeDuration_MetaData), NewProp_fadeDuration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFadingPlatform_Statics::NewProp_respawnTime = { "respawnTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFadingPlatform, respawnTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_respawnTime_MetaData), NewProp_respawnTime_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFadingPlatform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFadingPlatform_Statics::NewProp_platformMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFadingPlatform_Statics::NewProp_dynamicMat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFadingPlatform_Statics::NewProp_fadeDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFadingPlatform_Statics::NewProp_respawnTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFadingPlatform_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AFadingPlatform_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_FPI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFadingPlatform_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AFadingPlatform_Statics::ClassParams = {
	&AFadingPlatform::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AFadingPlatform_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AFadingPlatform_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFadingPlatform_Statics::Class_MetaDataParams), Z_Construct_UClass_AFadingPlatform_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AFadingPlatform()
{
	if (!Z_Registration_Info_UClass_AFadingPlatform.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFadingPlatform.OuterSingleton, Z_Construct_UClass_AFadingPlatform_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AFadingPlatform.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AFadingPlatform);
AFadingPlatform::~AFadingPlatform() {}
// ********** End Class AFadingPlatform ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_FPI_Source_FPI_FadingPlatform_h__Script_FPI_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AFadingPlatform, AFadingPlatform::StaticClass, TEXT("AFadingPlatform"), &Z_Registration_Info_UClass_AFadingPlatform, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFadingPlatform), 1247926167U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FPI_Source_FPI_FadingPlatform_h__Script_FPI_3129792808(TEXT("/Script/FPI"),
	Z_CompiledInDeferFile_FID_FPI_Source_FPI_FadingPlatform_h__Script_FPI_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FPI_Source_FPI_FadingPlatform_h__Script_FPI_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS

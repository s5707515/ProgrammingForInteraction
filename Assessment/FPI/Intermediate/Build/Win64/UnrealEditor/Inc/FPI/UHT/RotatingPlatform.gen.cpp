// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RotatingPlatform.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeRotatingPlatform() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
FPI_API UClass* Z_Construct_UClass_ARotatingPlatform();
FPI_API UClass* Z_Construct_UClass_ARotatingPlatform_NoRegister();
UPackage* Z_Construct_UPackage__Script_FPI();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ARotatingPlatform ********************************************************
void ARotatingPlatform::StaticRegisterNativesARotatingPlatform()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ARotatingPlatform;
UClass* ARotatingPlatform::GetPrivateStaticClass()
{
	using TClass = ARotatingPlatform;
	if (!Z_Registration_Info_UClass_ARotatingPlatform.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("RotatingPlatform"),
			Z_Registration_Info_UClass_ARotatingPlatform.InnerSingleton,
			StaticRegisterNativesARotatingPlatform,
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
	return Z_Registration_Info_UClass_ARotatingPlatform.InnerSingleton;
}
UClass* Z_Construct_UClass_ARotatingPlatform_NoRegister()
{
	return ARotatingPlatform::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ARotatingPlatform_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "RotatingPlatform.h" },
		{ "ModuleRelativePath", "RotatingPlatform.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_platformMesh_MetaData[] = {
		{ "Category", "RotatingPlatform" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "RotatingPlatform.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_speed_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "RotatingPlatform.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_clockwise_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "RotatingPlatform.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_platformMesh;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_speed;
	static void NewProp_clockwise_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_clockwise;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARotatingPlatform>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARotatingPlatform_Statics::NewProp_platformMesh = { "platformMesh", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARotatingPlatform, platformMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_platformMesh_MetaData), NewProp_platformMesh_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARotatingPlatform_Statics::NewProp_speed = { "speed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARotatingPlatform, speed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_speed_MetaData), NewProp_speed_MetaData) };
void Z_Construct_UClass_ARotatingPlatform_Statics::NewProp_clockwise_SetBit(void* Obj)
{
	((ARotatingPlatform*)Obj)->clockwise = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARotatingPlatform_Statics::NewProp_clockwise = { "clockwise", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ARotatingPlatform), &Z_Construct_UClass_ARotatingPlatform_Statics::NewProp_clockwise_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_clockwise_MetaData), NewProp_clockwise_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARotatingPlatform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARotatingPlatform_Statics::NewProp_platformMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARotatingPlatform_Statics::NewProp_speed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARotatingPlatform_Statics::NewProp_clockwise,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARotatingPlatform_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ARotatingPlatform_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_FPI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARotatingPlatform_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ARotatingPlatform_Statics::ClassParams = {
	&ARotatingPlatform::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ARotatingPlatform_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ARotatingPlatform_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARotatingPlatform_Statics::Class_MetaDataParams), Z_Construct_UClass_ARotatingPlatform_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ARotatingPlatform()
{
	if (!Z_Registration_Info_UClass_ARotatingPlatform.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARotatingPlatform.OuterSingleton, Z_Construct_UClass_ARotatingPlatform_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ARotatingPlatform.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ARotatingPlatform);
ARotatingPlatform::~ARotatingPlatform() {}
// ********** End Class ARotatingPlatform **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_FPI_Source_FPI_RotatingPlatform_h__Script_FPI_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ARotatingPlatform, ARotatingPlatform::StaticClass, TEXT("ARotatingPlatform"), &Z_Registration_Info_UClass_ARotatingPlatform, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARotatingPlatform), 1241616313U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FPI_Source_FPI_RotatingPlatform_h__Script_FPI_1386881141(TEXT("/Script/FPI"),
	Z_CompiledInDeferFile_FID_FPI_Source_FPI_RotatingPlatform_h__Script_FPI_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FPI_Source_FPI_RotatingPlatform_h__Script_FPI_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS

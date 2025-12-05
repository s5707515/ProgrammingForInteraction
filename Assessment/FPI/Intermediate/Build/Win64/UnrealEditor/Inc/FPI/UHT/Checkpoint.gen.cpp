// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Checkpoint.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCheckpoint() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
FPI_API UClass* Z_Construct_UClass_ACheckpoint();
FPI_API UClass* Z_Construct_UClass_ACheckpoint_NoRegister();
UPackage* Z_Construct_UPackage__Script_FPI();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ACheckpoint **************************************************************
void ACheckpoint::StaticRegisterNativesACheckpoint()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ACheckpoint;
UClass* ACheckpoint::GetPrivateStaticClass()
{
	using TClass = ACheckpoint;
	if (!Z_Registration_Info_UClass_ACheckpoint.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("Checkpoint"),
			Z_Registration_Info_UClass_ACheckpoint.InnerSingleton,
			StaticRegisterNativesACheckpoint,
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
	return Z_Registration_Info_UClass_ACheckpoint.InnerSingleton;
}
UClass* Z_Construct_UClass_ACheckpoint_NoRegister()
{
	return ACheckpoint::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ACheckpoint_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Checkpoint.h" },
		{ "ModuleRelativePath", "Checkpoint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_checkpointMesh_MetaData[] = {
		{ "Category", "Checkpoint" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Checkpoint.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_checkpointMesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACheckpoint>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACheckpoint_Statics::NewProp_checkpointMesh = { "checkpointMesh", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACheckpoint, checkpointMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_checkpointMesh_MetaData), NewProp_checkpointMesh_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACheckpoint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACheckpoint_Statics::NewProp_checkpointMesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACheckpoint_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ACheckpoint_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_FPI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACheckpoint_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACheckpoint_Statics::ClassParams = {
	&ACheckpoint::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ACheckpoint_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ACheckpoint_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACheckpoint_Statics::Class_MetaDataParams), Z_Construct_UClass_ACheckpoint_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACheckpoint()
{
	if (!Z_Registration_Info_UClass_ACheckpoint.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACheckpoint.OuterSingleton, Z_Construct_UClass_ACheckpoint_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACheckpoint.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACheckpoint);
ACheckpoint::~ACheckpoint() {}
// ********** End Class ACheckpoint ****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_FPI_Source_FPI_Checkpoint_h__Script_FPI_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACheckpoint, ACheckpoint::StaticClass, TEXT("ACheckpoint"), &Z_Registration_Info_UClass_ACheckpoint, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACheckpoint), 1485071761U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FPI_Source_FPI_Checkpoint_h__Script_FPI_553252350(TEXT("/Script/FPI"),
	Z_CompiledInDeferFile_FID_FPI_Source_FPI_Checkpoint_h__Script_FPI_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FPI_Source_FPI_Checkpoint_h__Script_FPI_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS

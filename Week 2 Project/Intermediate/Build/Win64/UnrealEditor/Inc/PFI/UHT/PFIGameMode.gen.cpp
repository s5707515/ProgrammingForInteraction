// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PFIGameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodePFIGameMode() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
PFI_API UClass* Z_Construct_UClass_APFIGameMode();
PFI_API UClass* Z_Construct_UClass_APFIGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_PFI();
// ********** End Cross Module References **********************************************************

// ********** Begin Class APFIGameMode *************************************************************
void APFIGameMode::StaticRegisterNativesAPFIGameMode()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_APFIGameMode;
UClass* APFIGameMode::GetPrivateStaticClass()
{
	using TClass = APFIGameMode;
	if (!Z_Registration_Info_UClass_APFIGameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("PFIGameMode"),
			Z_Registration_Info_UClass_APFIGameMode.InnerSingleton,
			StaticRegisterNativesAPFIGameMode,
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
	return Z_Registration_Info_UClass_APFIGameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_APFIGameMode_NoRegister()
{
	return APFIGameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_APFIGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Simple GameMode for a first person game\n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "PFIGameMode.h" },
		{ "ModuleRelativePath", "PFIGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple GameMode for a first person game" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APFIGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_APFIGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_PFI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APFIGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APFIGameMode_Statics::ClassParams = {
	&APFIGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008003ADu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APFIGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_APFIGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APFIGameMode()
{
	if (!Z_Registration_Info_UClass_APFIGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APFIGameMode.OuterSingleton, Z_Construct_UClass_APFIGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APFIGameMode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APFIGameMode);
APFIGameMode::~APFIGameMode() {}
// ********** End Class APFIGameMode ***************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Week_2_Project_Source_PFI_PFIGameMode_h__Script_PFI_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APFIGameMode, APFIGameMode::StaticClass, TEXT("APFIGameMode"), &Z_Registration_Info_UClass_APFIGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APFIGameMode), 2073321523U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Week_2_Project_Source_PFI_PFIGameMode_h__Script_PFI_1096788334(TEXT("/Script/PFI"),
	Z_CompiledInDeferFile_FID_Week_2_Project_Source_PFI_PFIGameMode_h__Script_PFI_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Week_2_Project_Source_PFI_PFIGameMode_h__Script_PFI_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS

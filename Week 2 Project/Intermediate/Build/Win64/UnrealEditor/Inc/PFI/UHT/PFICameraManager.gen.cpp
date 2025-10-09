// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PFICameraManager.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodePFICameraManager() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_APlayerCameraManager();
PFI_API UClass* Z_Construct_UClass_APFICameraManager();
PFI_API UClass* Z_Construct_UClass_APFICameraManager_NoRegister();
UPackage* Z_Construct_UPackage__Script_PFI();
// ********** End Cross Module References **********************************************************

// ********** Begin Class APFICameraManager ********************************************************
void APFICameraManager::StaticRegisterNativesAPFICameraManager()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_APFICameraManager;
UClass* APFICameraManager::GetPrivateStaticClass()
{
	using TClass = APFICameraManager;
	if (!Z_Registration_Info_UClass_APFICameraManager.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("PFICameraManager"),
			Z_Registration_Info_UClass_APFICameraManager.InnerSingleton,
			StaticRegisterNativesAPFICameraManager,
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
	return Z_Registration_Info_UClass_APFICameraManager.InnerSingleton;
}
UClass* Z_Construct_UClass_APFICameraManager_NoRegister()
{
	return APFICameraManager::GetPrivateStaticClass();
}
struct Z_Construct_UClass_APFICameraManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Basic First Person camera manager.\n *  Limits min/max look pitch.\n */" },
#endif
		{ "IncludePath", "PFICameraManager.h" },
		{ "ModuleRelativePath", "PFICameraManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Basic First Person camera manager.\nLimits min/max look pitch." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APFICameraManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_APFICameraManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerCameraManager,
	(UObject* (*)())Z_Construct_UPackage__Script_PFI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APFICameraManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APFICameraManager_Statics::ClassParams = {
	&APFICameraManager::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008003ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APFICameraManager_Statics::Class_MetaDataParams), Z_Construct_UClass_APFICameraManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APFICameraManager()
{
	if (!Z_Registration_Info_UClass_APFICameraManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APFICameraManager.OuterSingleton, Z_Construct_UClass_APFICameraManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APFICameraManager.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APFICameraManager);
APFICameraManager::~APFICameraManager() {}
// ********** End Class APFICameraManager **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Week_2_Project_Source_PFI_PFICameraManager_h__Script_PFI_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APFICameraManager, APFICameraManager::StaticClass, TEXT("APFICameraManager"), &Z_Registration_Info_UClass_APFICameraManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APFICameraManager), 488366540U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Week_2_Project_Source_PFI_PFICameraManager_h__Script_PFI_3079444037(TEXT("/Script/PFI"),
	Z_CompiledInDeferFile_FID_Week_2_Project_Source_PFI_PFICameraManager_h__Script_PFI_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Week_2_Project_Source_PFI_PFICameraManager_h__Script_PFI_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS

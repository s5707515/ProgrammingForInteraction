// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Lab2CameraManager.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeLab2CameraManager() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_APlayerCameraManager();
LAB2_API UClass* Z_Construct_UClass_ALab2CameraManager();
LAB2_API UClass* Z_Construct_UClass_ALab2CameraManager_NoRegister();
UPackage* Z_Construct_UPackage__Script_Lab2();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ALab2CameraManager *******************************************************
void ALab2CameraManager::StaticRegisterNativesALab2CameraManager()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ALab2CameraManager;
UClass* ALab2CameraManager::GetPrivateStaticClass()
{
	using TClass = ALab2CameraManager;
	if (!Z_Registration_Info_UClass_ALab2CameraManager.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("Lab2CameraManager"),
			Z_Registration_Info_UClass_ALab2CameraManager.InnerSingleton,
			StaticRegisterNativesALab2CameraManager,
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
	return Z_Registration_Info_UClass_ALab2CameraManager.InnerSingleton;
}
UClass* Z_Construct_UClass_ALab2CameraManager_NoRegister()
{
	return ALab2CameraManager::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ALab2CameraManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Basic First Person camera manager.\n *  Limits min/max look pitch.\n */" },
#endif
		{ "IncludePath", "Lab2CameraManager.h" },
		{ "ModuleRelativePath", "Lab2CameraManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Basic First Person camera manager.\nLimits min/max look pitch." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALab2CameraManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ALab2CameraManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerCameraManager,
	(UObject* (*)())Z_Construct_UPackage__Script_Lab2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALab2CameraManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ALab2CameraManager_Statics::ClassParams = {
	&ALab2CameraManager::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALab2CameraManager_Statics::Class_MetaDataParams), Z_Construct_UClass_ALab2CameraManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ALab2CameraManager()
{
	if (!Z_Registration_Info_UClass_ALab2CameraManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALab2CameraManager.OuterSingleton, Z_Construct_UClass_ALab2CameraManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ALab2CameraManager.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ALab2CameraManager);
ALab2CameraManager::~ALab2CameraManager() {}
// ********** End Class ALab2CameraManager *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Week_1_Project_Source_Lab2_Lab2CameraManager_h__Script_Lab2_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ALab2CameraManager, ALab2CameraManager::StaticClass, TEXT("ALab2CameraManager"), &Z_Registration_Info_UClass_ALab2CameraManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALab2CameraManager), 1201616981U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Week_1_Project_Source_Lab2_Lab2CameraManager_h__Script_Lab2_1428464338(TEXT("/Script/Lab2"),
	Z_CompiledInDeferFile_FID_Week_1_Project_Source_Lab2_Lab2CameraManager_h__Script_Lab2_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Week_1_Project_Source_Lab2_Lab2CameraManager_h__Script_Lab2_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS

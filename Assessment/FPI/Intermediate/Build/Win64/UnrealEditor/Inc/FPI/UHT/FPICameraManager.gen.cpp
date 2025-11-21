// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPICameraManager.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeFPICameraManager() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_APlayerCameraManager();
FPI_API UClass* Z_Construct_UClass_AFPICameraManager();
FPI_API UClass* Z_Construct_UClass_AFPICameraManager_NoRegister();
UPackage* Z_Construct_UPackage__Script_FPI();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AFPICameraManager ********************************************************
void AFPICameraManager::StaticRegisterNativesAFPICameraManager()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AFPICameraManager;
UClass* AFPICameraManager::GetPrivateStaticClass()
{
	using TClass = AFPICameraManager;
	if (!Z_Registration_Info_UClass_AFPICameraManager.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("FPICameraManager"),
			Z_Registration_Info_UClass_AFPICameraManager.InnerSingleton,
			StaticRegisterNativesAFPICameraManager,
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
	return Z_Registration_Info_UClass_AFPICameraManager.InnerSingleton;
}
UClass* Z_Construct_UClass_AFPICameraManager_NoRegister()
{
	return AFPICameraManager::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AFPICameraManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Basic First Person camera manager.\n *  Limits min/max look pitch.\n */" },
#endif
		{ "IncludePath", "FPICameraManager.h" },
		{ "ModuleRelativePath", "FPICameraManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Basic First Person camera manager.\nLimits min/max look pitch." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFPICameraManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AFPICameraManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerCameraManager,
	(UObject* (*)())Z_Construct_UPackage__Script_FPI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFPICameraManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AFPICameraManager_Statics::ClassParams = {
	&AFPICameraManager::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFPICameraManager_Statics::Class_MetaDataParams), Z_Construct_UClass_AFPICameraManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AFPICameraManager()
{
	if (!Z_Registration_Info_UClass_AFPICameraManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFPICameraManager.OuterSingleton, Z_Construct_UClass_AFPICameraManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AFPICameraManager.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AFPICameraManager);
AFPICameraManager::~AFPICameraManager() {}
// ********** End Class AFPICameraManager **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_FPI_Source_FPI_FPICameraManager_h__Script_FPI_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AFPICameraManager, AFPICameraManager::StaticClass, TEXT("AFPICameraManager"), &Z_Registration_Info_UClass_AFPICameraManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFPICameraManager), 4040563959U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FPI_Source_FPI_FPICameraManager_h__Script_FPI_4257820747(TEXT("/Script/FPI"),
	Z_CompiledInDeferFile_FID_FPI_Source_FPI_FPICameraManager_h__Script_FPI_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FPI_Source_FPI_FPICameraManager_h__Script_FPI_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS

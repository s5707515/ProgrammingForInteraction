// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Lab2GameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeLab2GameMode() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
LAB2_API UClass* Z_Construct_UClass_ALab2GameMode();
LAB2_API UClass* Z_Construct_UClass_ALab2GameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_Lab2();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ALab2GameMode ************************************************************
void ALab2GameMode::StaticRegisterNativesALab2GameMode()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ALab2GameMode;
UClass* ALab2GameMode::GetPrivateStaticClass()
{
	using TClass = ALab2GameMode;
	if (!Z_Registration_Info_UClass_ALab2GameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("Lab2GameMode"),
			Z_Registration_Info_UClass_ALab2GameMode.InnerSingleton,
			StaticRegisterNativesALab2GameMode,
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
	return Z_Registration_Info_UClass_ALab2GameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_ALab2GameMode_NoRegister()
{
	return ALab2GameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ALab2GameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Simple GameMode for a first person game\n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Lab2GameMode.h" },
		{ "ModuleRelativePath", "Lab2GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple GameMode for a first person game" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALab2GameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ALab2GameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Lab2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALab2GameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ALab2GameMode_Statics::ClassParams = {
	&ALab2GameMode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALab2GameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ALab2GameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ALab2GameMode()
{
	if (!Z_Registration_Info_UClass_ALab2GameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALab2GameMode.OuterSingleton, Z_Construct_UClass_ALab2GameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ALab2GameMode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ALab2GameMode);
ALab2GameMode::~ALab2GameMode() {}
// ********** End Class ALab2GameMode **************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Week_1_Project_Source_Lab2_Lab2GameMode_h__Script_Lab2_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ALab2GameMode, ALab2GameMode::StaticClass, TEXT("ALab2GameMode"), &Z_Registration_Info_UClass_ALab2GameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALab2GameMode), 10576714U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Week_1_Project_Source_Lab2_Lab2GameMode_h__Script_Lab2_2123383570(TEXT("/Script/Lab2"),
	Z_CompiledInDeferFile_FID_Week_1_Project_Source_Lab2_Lab2GameMode_h__Script_Lab2_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Week_1_Project_Source_Lab2_Lab2GameMode_h__Script_Lab2_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS

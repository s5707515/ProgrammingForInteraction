// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PFI_Lab5_StartGameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodePFI_Lab5_StartGameMode() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
PFI_LAB5_START_API UClass* Z_Construct_UClass_APFI_Lab5_StartGameMode();
PFI_LAB5_START_API UClass* Z_Construct_UClass_APFI_Lab5_StartGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_PFI_Lab5_Start();
// ********** End Cross Module References **********************************************************

// ********** Begin Class APFI_Lab5_StartGameMode **************************************************
void APFI_Lab5_StartGameMode::StaticRegisterNativesAPFI_Lab5_StartGameMode()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_APFI_Lab5_StartGameMode;
UClass* APFI_Lab5_StartGameMode::GetPrivateStaticClass()
{
	using TClass = APFI_Lab5_StartGameMode;
	if (!Z_Registration_Info_UClass_APFI_Lab5_StartGameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("PFI_Lab5_StartGameMode"),
			Z_Registration_Info_UClass_APFI_Lab5_StartGameMode.InnerSingleton,
			StaticRegisterNativesAPFI_Lab5_StartGameMode,
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
	return Z_Registration_Info_UClass_APFI_Lab5_StartGameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_APFI_Lab5_StartGameMode_NoRegister()
{
	return APFI_Lab5_StartGameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_APFI_Lab5_StartGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Simple Game Mode for a top-down perspective game\n *  Sets the default gameplay framework classes\n *  Check the Blueprint derived class for the set values\n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "PFI_Lab5_StartGameMode.h" },
		{ "ModuleRelativePath", "PFI_Lab5_StartGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple Game Mode for a top-down perspective game\nSets the default gameplay framework classes\nCheck the Blueprint derived class for the set values" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APFI_Lab5_StartGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_APFI_Lab5_StartGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_PFI_Lab5_Start,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APFI_Lab5_StartGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APFI_Lab5_StartGameMode_Statics::ClassParams = {
	&APFI_Lab5_StartGameMode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APFI_Lab5_StartGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_APFI_Lab5_StartGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APFI_Lab5_StartGameMode()
{
	if (!Z_Registration_Info_UClass_APFI_Lab5_StartGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APFI_Lab5_StartGameMode.OuterSingleton, Z_Construct_UClass_APFI_Lab5_StartGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APFI_Lab5_StartGameMode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APFI_Lab5_StartGameMode);
APFI_Lab5_StartGameMode::~APFI_Lab5_StartGameMode() {}
// ********** End Class APFI_Lab5_StartGameMode ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_PFI_Lab5_Start_Source_PFI_Lab5_Start_PFI_Lab5_StartGameMode_h__Script_PFI_Lab5_Start_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APFI_Lab5_StartGameMode, APFI_Lab5_StartGameMode::StaticClass, TEXT("APFI_Lab5_StartGameMode"), &Z_Registration_Info_UClass_APFI_Lab5_StartGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APFI_Lab5_StartGameMode), 2537193835U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PFI_Lab5_Start_Source_PFI_Lab5_Start_PFI_Lab5_StartGameMode_h__Script_PFI_Lab5_Start_2425933479(TEXT("/Script/PFI_Lab5_Start"),
	Z_CompiledInDeferFile_FID_PFI_Lab5_Start_Source_PFI_Lab5_Start_PFI_Lab5_StartGameMode_h__Script_PFI_Lab5_Start_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PFI_Lab5_Start_Source_PFI_Lab5_Start_PFI_Lab5_StartGameMode_h__Script_PFI_Lab5_Start_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS

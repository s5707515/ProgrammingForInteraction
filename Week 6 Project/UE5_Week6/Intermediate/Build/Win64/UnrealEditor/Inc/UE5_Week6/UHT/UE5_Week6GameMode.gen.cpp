// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE5_Week6/UE5_Week6GameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUE5_Week6GameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UE5_WEEK6_API UClass* Z_Construct_UClass_AUE5_Week6GameMode();
UE5_WEEK6_API UClass* Z_Construct_UClass_AUE5_Week6GameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_UE5_Week6();
// End Cross Module References

// Begin Class AUE5_Week6GameMode
void AUE5_Week6GameMode::StaticRegisterNativesAUE5_Week6GameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AUE5_Week6GameMode);
UClass* Z_Construct_UClass_AUE5_Week6GameMode_NoRegister()
{
	return AUE5_Week6GameMode::StaticClass();
}
struct Z_Construct_UClass_AUE5_Week6GameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "UE5_Week6GameMode.h" },
		{ "ModuleRelativePath", "UE5_Week6GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUE5_Week6GameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AUE5_Week6GameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_UE5_Week6,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AUE5_Week6GameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AUE5_Week6GameMode_Statics::ClassParams = {
	&AUE5_Week6GameMode::StaticClass,
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
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AUE5_Week6GameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AUE5_Week6GameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AUE5_Week6GameMode()
{
	if (!Z_Registration_Info_UClass_AUE5_Week6GameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AUE5_Week6GameMode.OuterSingleton, Z_Construct_UClass_AUE5_Week6GameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AUE5_Week6GameMode.OuterSingleton;
}
template<> UE5_WEEK6_API UClass* StaticClass<AUE5_Week6GameMode>()
{
	return AUE5_Week6GameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AUE5_Week6GameMode);
AUE5_Week6GameMode::~AUE5_Week6GameMode() {}
// End Class AUE5_Week6GameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_Week6_Source_UE5_Week6_UE5_Week6GameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AUE5_Week6GameMode, AUE5_Week6GameMode::StaticClass, TEXT("AUE5_Week6GameMode"), &Z_Registration_Info_UClass_AUE5_Week6GameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AUE5_Week6GameMode), 4160082843U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_Week6_Source_UE5_Week6_UE5_Week6GameMode_h_2445437940(TEXT("/Script/UE5_Week6"),
	Z_CompiledInDeferFile_FID_UE5_Week6_Source_UE5_Week6_UE5_Week6GameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_Week6_Source_UE5_Week6_UE5_Week6GameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

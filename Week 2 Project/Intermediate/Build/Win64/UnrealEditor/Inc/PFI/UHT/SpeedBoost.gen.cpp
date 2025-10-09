// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpeedBoost.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSpeedBoost() {}

// ********** Begin Cross Module References ********************************************************
PFI_API UClass* Z_Construct_UClass_APickupBase();
PFI_API UClass* Z_Construct_UClass_ASpeedBoost();
PFI_API UClass* Z_Construct_UClass_ASpeedBoost_NoRegister();
UPackage* Z_Construct_UPackage__Script_PFI();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ASpeedBoost **************************************************************
void ASpeedBoost::StaticRegisterNativesASpeedBoost()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ASpeedBoost;
UClass* ASpeedBoost::GetPrivateStaticClass()
{
	using TClass = ASpeedBoost;
	if (!Z_Registration_Info_UClass_ASpeedBoost.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("SpeedBoost"),
			Z_Registration_Info_UClass_ASpeedBoost.InnerSingleton,
			StaticRegisterNativesASpeedBoost,
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
	return Z_Registration_Info_UClass_ASpeedBoost.InnerSingleton;
}
UClass* Z_Construct_UClass_ASpeedBoost_NoRegister()
{
	return ASpeedBoost::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ASpeedBoost_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "SpeedBoost.h" },
		{ "ModuleRelativePath", "SpeedBoost.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_speedBoostAmount_MetaData[] = {
		{ "Category", "SpeedBoost" },
		{ "ModuleRelativePath", "SpeedBoost.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_speedBoostAmount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASpeedBoost>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASpeedBoost_Statics::NewProp_speedBoostAmount = { "speedBoostAmount", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpeedBoost, speedBoostAmount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_speedBoostAmount_MetaData), NewProp_speedBoostAmount_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASpeedBoost_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpeedBoost_Statics::NewProp_speedBoostAmount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASpeedBoost_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASpeedBoost_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APickupBase,
	(UObject* (*)())Z_Construct_UPackage__Script_PFI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASpeedBoost_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASpeedBoost_Statics::ClassParams = {
	&ASpeedBoost::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ASpeedBoost_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ASpeedBoost_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASpeedBoost_Statics::Class_MetaDataParams), Z_Construct_UClass_ASpeedBoost_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASpeedBoost()
{
	if (!Z_Registration_Info_UClass_ASpeedBoost.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASpeedBoost.OuterSingleton, Z_Construct_UClass_ASpeedBoost_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASpeedBoost.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASpeedBoost);
ASpeedBoost::~ASpeedBoost() {}
// ********** End Class ASpeedBoost ****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Week_2_Project_Source_PFI_SpeedBoost_h__Script_PFI_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASpeedBoost, ASpeedBoost::StaticClass, TEXT("ASpeedBoost"), &Z_Registration_Info_UClass_ASpeedBoost, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASpeedBoost), 1210835066U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Week_2_Project_Source_PFI_SpeedBoost_h__Script_PFI_1696352753(TEXT("/Script/PFI"),
	Z_CompiledInDeferFile_FID_Week_2_Project_Source_PFI_SpeedBoost_h__Script_PFI_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Week_2_Project_Source_PFI_SpeedBoost_h__Script_PFI_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS

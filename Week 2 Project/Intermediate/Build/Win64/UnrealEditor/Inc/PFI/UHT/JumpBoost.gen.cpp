// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "JumpBoost.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeJumpBoost() {}

// ********** Begin Cross Module References ********************************************************
PFI_API UClass* Z_Construct_UClass_AJumpBoost();
PFI_API UClass* Z_Construct_UClass_AJumpBoost_NoRegister();
PFI_API UClass* Z_Construct_UClass_APickupBase();
UPackage* Z_Construct_UPackage__Script_PFI();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AJumpBoost ***************************************************************
void AJumpBoost::StaticRegisterNativesAJumpBoost()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AJumpBoost;
UClass* AJumpBoost::GetPrivateStaticClass()
{
	using TClass = AJumpBoost;
	if (!Z_Registration_Info_UClass_AJumpBoost.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("JumpBoost"),
			Z_Registration_Info_UClass_AJumpBoost.InnerSingleton,
			StaticRegisterNativesAJumpBoost,
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
	return Z_Registration_Info_UClass_AJumpBoost.InnerSingleton;
}
UClass* Z_Construct_UClass_AJumpBoost_NoRegister()
{
	return AJumpBoost::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AJumpBoost_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "JumpBoost.h" },
		{ "ModuleRelativePath", "JumpBoost.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_jumpBoostAmount_MetaData[] = {
		{ "Category", "JumpBoost" },
		{ "ModuleRelativePath", "JumpBoost.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_jumpBoostAmount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AJumpBoost>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AJumpBoost_Statics::NewProp_jumpBoostAmount = { "jumpBoostAmount", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AJumpBoost, jumpBoostAmount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_jumpBoostAmount_MetaData), NewProp_jumpBoostAmount_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AJumpBoost_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJumpBoost_Statics::NewProp_jumpBoostAmount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AJumpBoost_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AJumpBoost_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APickupBase,
	(UObject* (*)())Z_Construct_UPackage__Script_PFI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AJumpBoost_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AJumpBoost_Statics::ClassParams = {
	&AJumpBoost::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AJumpBoost_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AJumpBoost_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AJumpBoost_Statics::Class_MetaDataParams), Z_Construct_UClass_AJumpBoost_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AJumpBoost()
{
	if (!Z_Registration_Info_UClass_AJumpBoost.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AJumpBoost.OuterSingleton, Z_Construct_UClass_AJumpBoost_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AJumpBoost.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AJumpBoost);
AJumpBoost::~AJumpBoost() {}
// ********** End Class AJumpBoost *****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Week_2_Project_Source_PFI_JumpBoost_h__Script_PFI_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AJumpBoost, AJumpBoost::StaticClass, TEXT("AJumpBoost"), &Z_Registration_Info_UClass_AJumpBoost, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AJumpBoost), 1556375591U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Week_2_Project_Source_PFI_JumpBoost_h__Script_PFI_480195260(TEXT("/Script/PFI"),
	Z_CompiledInDeferFile_FID_Week_2_Project_Source_PFI_JumpBoost_h__Script_PFI_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Week_2_Project_Source_PFI_JumpBoost_h__Script_PFI_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ScorePickUp.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeScorePickUp() {}

// ********** Begin Cross Module References ********************************************************
PFI_API UClass* Z_Construct_UClass_APickupBase();
PFI_API UClass* Z_Construct_UClass_AScorePickUp();
PFI_API UClass* Z_Construct_UClass_AScorePickUp_NoRegister();
UPackage* Z_Construct_UPackage__Script_PFI();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AScorePickUp *************************************************************
void AScorePickUp::StaticRegisterNativesAScorePickUp()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AScorePickUp;
UClass* AScorePickUp::GetPrivateStaticClass()
{
	using TClass = AScorePickUp;
	if (!Z_Registration_Info_UClass_AScorePickUp.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ScorePickUp"),
			Z_Registration_Info_UClass_AScorePickUp.InnerSingleton,
			StaticRegisterNativesAScorePickUp,
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
	return Z_Registration_Info_UClass_AScorePickUp.InnerSingleton;
}
UClass* Z_Construct_UClass_AScorePickUp_NoRegister()
{
	return AScorePickUp::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AScorePickUp_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "ScorePickUp.h" },
		{ "ModuleRelativePath", "ScorePickUp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_scoreValue_MetaData[] = {
		{ "Category", "ScorePickUp" },
		{ "ModuleRelativePath", "ScorePickUp.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_scoreValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AScorePickUp>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AScorePickUp_Statics::NewProp_scoreValue = { "scoreValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AScorePickUp, scoreValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_scoreValue_MetaData), NewProp_scoreValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AScorePickUp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AScorePickUp_Statics::NewProp_scoreValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AScorePickUp_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AScorePickUp_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APickupBase,
	(UObject* (*)())Z_Construct_UPackage__Script_PFI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AScorePickUp_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AScorePickUp_Statics::ClassParams = {
	&AScorePickUp::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AScorePickUp_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AScorePickUp_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AScorePickUp_Statics::Class_MetaDataParams), Z_Construct_UClass_AScorePickUp_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AScorePickUp()
{
	if (!Z_Registration_Info_UClass_AScorePickUp.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AScorePickUp.OuterSingleton, Z_Construct_UClass_AScorePickUp_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AScorePickUp.OuterSingleton;
}
AScorePickUp::AScorePickUp() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AScorePickUp);
AScorePickUp::~AScorePickUp() {}
// ********** End Class AScorePickUp ***************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Week_2_Project_Source_PFI_ScorePickUp_h__Script_PFI_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AScorePickUp, AScorePickUp::StaticClass, TEXT("AScorePickUp"), &Z_Registration_Info_UClass_AScorePickUp, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AScorePickUp), 3994473549U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Week_2_Project_Source_PFI_ScorePickUp_h__Script_PFI_41839459(TEXT("/Script/PFI"),
	Z_CompiledInDeferFile_FID_Week_2_Project_Source_PFI_ScorePickUp_h__Script_PFI_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Week_2_Project_Source_PFI_ScorePickUp_h__Script_PFI_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS

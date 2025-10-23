// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BadPickUp.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeBadPickUp() {}

// ********** Begin Cross Module References ********************************************************
PFI_API UClass* Z_Construct_UClass_ABadPickUp();
PFI_API UClass* Z_Construct_UClass_ABadPickUp_NoRegister();
PFI_API UClass* Z_Construct_UClass_APickupBase();
UPackage* Z_Construct_UPackage__Script_PFI();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ABadPickUp ***************************************************************
void ABadPickUp::StaticRegisterNativesABadPickUp()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ABadPickUp;
UClass* ABadPickUp::GetPrivateStaticClass()
{
	using TClass = ABadPickUp;
	if (!Z_Registration_Info_UClass_ABadPickUp.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("BadPickUp"),
			Z_Registration_Info_UClass_ABadPickUp.InnerSingleton,
			StaticRegisterNativesABadPickUp,
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
	return Z_Registration_Info_UClass_ABadPickUp.InnerSingleton;
}
UClass* Z_Construct_UClass_ABadPickUp_NoRegister()
{
	return ABadPickUp::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ABadPickUp_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "BadPickUp.h" },
		{ "ModuleRelativePath", "BadPickUp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_damageValue_MetaData[] = {
		{ "Category", "BadPickUp" },
		{ "ModuleRelativePath", "BadPickUp.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_damageValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABadPickUp>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABadPickUp_Statics::NewProp_damageValue = { "damageValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABadPickUp, damageValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_damageValue_MetaData), NewProp_damageValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABadPickUp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABadPickUp_Statics::NewProp_damageValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABadPickUp_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABadPickUp_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APickupBase,
	(UObject* (*)())Z_Construct_UPackage__Script_PFI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABadPickUp_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABadPickUp_Statics::ClassParams = {
	&ABadPickUp::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ABadPickUp_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ABadPickUp_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABadPickUp_Statics::Class_MetaDataParams), Z_Construct_UClass_ABadPickUp_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABadPickUp()
{
	if (!Z_Registration_Info_UClass_ABadPickUp.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABadPickUp.OuterSingleton, Z_Construct_UClass_ABadPickUp_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABadPickUp.OuterSingleton;
}
ABadPickUp::ABadPickUp() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABadPickUp);
ABadPickUp::~ABadPickUp() {}
// ********** End Class ABadPickUp *****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Week_2_Project_Source_PFI_BadPickUp_h__Script_PFI_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABadPickUp, ABadPickUp::StaticClass, TEXT("ABadPickUp"), &Z_Registration_Info_UClass_ABadPickUp, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABadPickUp), 3403146540U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Week_2_Project_Source_PFI_BadPickUp_h__Script_PFI_3154056553(TEXT("/Script/PFI"),
	Z_CompiledInDeferFile_FID_Week_2_Project_Source_PFI_BadPickUp_h__Script_PFI_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Week_2_Project_Source_PFI_BadPickUp_h__Script_PFI_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyPickupBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMyPickupBase() {}

// ********** Begin Cross Module References ********************************************************
PFI_API UClass* Z_Construct_UClass_AMyPickupBase();
PFI_API UClass* Z_Construct_UClass_AMyPickupBase_NoRegister();
PFI_API UClass* Z_Construct_UClass_APickupBase();
UPackage* Z_Construct_UPackage__Script_PFI();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AMyPickupBase ************************************************************
void AMyPickupBase::StaticRegisterNativesAMyPickupBase()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AMyPickupBase;
UClass* AMyPickupBase::GetPrivateStaticClass()
{
	using TClass = AMyPickupBase;
	if (!Z_Registration_Info_UClass_AMyPickupBase.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MyPickupBase"),
			Z_Registration_Info_UClass_AMyPickupBase.InnerSingleton,
			StaticRegisterNativesAMyPickupBase,
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
	return Z_Registration_Info_UClass_AMyPickupBase.InnerSingleton;
}
UClass* Z_Construct_UClass_AMyPickupBase_NoRegister()
{
	return AMyPickupBase::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AMyPickupBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "MyPickupBase.h" },
		{ "ModuleRelativePath", "MyPickupBase.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyPickupBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AMyPickupBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APickupBase,
	(UObject* (*)())Z_Construct_UPackage__Script_PFI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyPickupBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyPickupBase_Statics::ClassParams = {
	&AMyPickupBase::StaticClass,
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
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyPickupBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyPickupBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMyPickupBase()
{
	if (!Z_Registration_Info_UClass_AMyPickupBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyPickupBase.OuterSingleton, Z_Construct_UClass_AMyPickupBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMyPickupBase.OuterSingleton;
}
AMyPickupBase::AMyPickupBase() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMyPickupBase);
AMyPickupBase::~AMyPickupBase() {}
// ********** End Class AMyPickupBase **************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Week_2_Project_Source_PFI_MyPickupBase_h__Script_PFI_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMyPickupBase, AMyPickupBase::StaticClass, TEXT("AMyPickupBase"), &Z_Registration_Info_UClass_AMyPickupBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyPickupBase), 217660669U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Week_2_Project_Source_PFI_MyPickupBase_h__Script_PFI_3306311190(TEXT("/Script/PFI"),
	Z_CompiledInDeferFile_FID_Week_2_Project_Source_PFI_MyPickupBase_h__Script_PFI_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Week_2_Project_Source_PFI_MyPickupBase_h__Script_PFI_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DoorButton.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeDoorButton() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
FPI_API UClass* Z_Construct_UClass_ADoorButton();
FPI_API UClass* Z_Construct_UClass_ADoorButton_NoRegister();
UPackage* Z_Construct_UPackage__Script_FPI();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ADoorButton **************************************************************
void ADoorButton::StaticRegisterNativesADoorButton()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ADoorButton;
UClass* ADoorButton::GetPrivateStaticClass()
{
	using TClass = ADoorButton;
	if (!Z_Registration_Info_UClass_ADoorButton.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("DoorButton"),
			Z_Registration_Info_UClass_ADoorButton.InnerSingleton,
			StaticRegisterNativesADoorButton,
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
	return Z_Registration_Info_UClass_ADoorButton.InnerSingleton;
}
UClass* Z_Construct_UClass_ADoorButton_NoRegister()
{
	return ADoorButton::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ADoorButton_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "DoorButton.h" },
		{ "ModuleRelativePath", "DoorButton.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADoorButton>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ADoorButton_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_FPI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADoorButton_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADoorButton_Statics::ClassParams = {
	&ADoorButton::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADoorButton_Statics::Class_MetaDataParams), Z_Construct_UClass_ADoorButton_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADoorButton()
{
	if (!Z_Registration_Info_UClass_ADoorButton.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADoorButton.OuterSingleton, Z_Construct_UClass_ADoorButton_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADoorButton.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADoorButton);
ADoorButton::~ADoorButton() {}
// ********** End Class ADoorButton ****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_FPI_Source_FPI_DoorButton_h__Script_FPI_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADoorButton, ADoorButton::StaticClass, TEXT("ADoorButton"), &Z_Registration_Info_UClass_ADoorButton, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADoorButton), 1659537290U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FPI_Source_FPI_DoorButton_h__Script_FPI_3154510690(TEXT("/Script/FPI"),
	Z_CompiledInDeferFile_FID_FPI_Source_FPI_DoorButton_h__Script_FPI_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FPI_Source_FPI_DoorButton_h__Script_FPI_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Keypad.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeKeypad() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
FPI_API UClass* Z_Construct_UClass_AKeypad();
FPI_API UClass* Z_Construct_UClass_AKeypad_NoRegister();
UPackage* Z_Construct_UPackage__Script_FPI();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AKeypad ******************************************************************
void AKeypad::StaticRegisterNativesAKeypad()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AKeypad;
UClass* AKeypad::GetPrivateStaticClass()
{
	using TClass = AKeypad;
	if (!Z_Registration_Info_UClass_AKeypad.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("Keypad"),
			Z_Registration_Info_UClass_AKeypad.InnerSingleton,
			StaticRegisterNativesAKeypad,
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
	return Z_Registration_Info_UClass_AKeypad.InnerSingleton;
}
UClass* Z_Construct_UClass_AKeypad_NoRegister()
{
	return AKeypad::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AKeypad_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Keypad.h" },
		{ "ModuleRelativePath", "Keypad.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AKeypad>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AKeypad_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_FPI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AKeypad_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AKeypad_Statics::ClassParams = {
	&AKeypad::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AKeypad_Statics::Class_MetaDataParams), Z_Construct_UClass_AKeypad_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AKeypad()
{
	if (!Z_Registration_Info_UClass_AKeypad.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AKeypad.OuterSingleton, Z_Construct_UClass_AKeypad_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AKeypad.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AKeypad);
AKeypad::~AKeypad() {}
// ********** End Class AKeypad ********************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_FPI_Source_FPI_Keypad_h__Script_FPI_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AKeypad, AKeypad::StaticClass, TEXT("AKeypad"), &Z_Registration_Info_UClass_AKeypad, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AKeypad), 1324161161U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FPI_Source_FPI_Keypad_h__Script_FPI_2843685611(TEXT("/Script/FPI"),
	Z_CompiledInDeferFile_FID_FPI_Source_FPI_Keypad_h__Script_FPI_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FPI_Source_FPI_Keypad_h__Script_FPI_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS

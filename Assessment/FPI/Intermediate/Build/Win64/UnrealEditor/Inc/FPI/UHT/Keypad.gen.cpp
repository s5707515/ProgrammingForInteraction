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
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_keypadMesh_MetaData[] = {
		{ "Category", "Keypad" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Keypad.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_keypadMesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AKeypad>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AKeypad_Statics::NewProp_keypadMesh = { "keypadMesh", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AKeypad, keypadMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_keypadMesh_MetaData), NewProp_keypadMesh_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AKeypad_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKeypad_Statics::NewProp_keypadMesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AKeypad_Statics::PropPointers) < 2048);
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
	Z_Construct_UClass_AKeypad_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AKeypad_Statics::PropPointers),
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
		{ Z_Construct_UClass_AKeypad, AKeypad::StaticClass, TEXT("AKeypad"), &Z_Registration_Info_UClass_AKeypad, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AKeypad), 4025144222U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FPI_Source_FPI_Keypad_h__Script_FPI_1516030905(TEXT("/Script/FPI"),
	Z_CompiledInDeferFile_FID_FPI_Source_FPI_Keypad_h__Script_FPI_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FPI_Source_FPI_Keypad_h__Script_FPI_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS

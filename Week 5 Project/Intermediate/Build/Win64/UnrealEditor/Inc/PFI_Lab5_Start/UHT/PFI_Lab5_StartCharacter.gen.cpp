// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PFI_Lab5_StartCharacter.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodePFI_Lab5_StartCharacter() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
PFI_LAB5_START_API UClass* Z_Construct_UClass_APFI_Lab5_StartCharacter();
PFI_LAB5_START_API UClass* Z_Construct_UClass_APFI_Lab5_StartCharacter_NoRegister();
UPackage* Z_Construct_UPackage__Script_PFI_Lab5_Start();
// ********** End Cross Module References **********************************************************

// ********** Begin Class APFI_Lab5_StartCharacter *************************************************
void APFI_Lab5_StartCharacter::StaticRegisterNativesAPFI_Lab5_StartCharacter()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_APFI_Lab5_StartCharacter;
UClass* APFI_Lab5_StartCharacter::GetPrivateStaticClass()
{
	using TClass = APFI_Lab5_StartCharacter;
	if (!Z_Registration_Info_UClass_APFI_Lab5_StartCharacter.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("PFI_Lab5_StartCharacter"),
			Z_Registration_Info_UClass_APFI_Lab5_StartCharacter.InnerSingleton,
			StaticRegisterNativesAPFI_Lab5_StartCharacter,
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
	return Z_Registration_Info_UClass_APFI_Lab5_StartCharacter.InnerSingleton;
}
UClass* Z_Construct_UClass_APFI_Lab5_StartCharacter_NoRegister()
{
	return APFI_Lab5_StartCharacter::GetPrivateStaticClass();
}
struct Z_Construct_UClass_APFI_Lab5_StartCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  A controllable top-down perspective character\n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "PFI_Lab5_StartCharacter.h" },
		{ "ModuleRelativePath", "PFI_Lab5_StartCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A controllable top-down perspective character" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TopDownCameraComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Top down camera */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PFI_Lab5_StartCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Top down camera" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Camera boom positioning the camera above the character */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PFI_Lab5_StartCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Camera boom positioning the camera above the character" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TopDownCameraComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APFI_Lab5_StartCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APFI_Lab5_StartCharacter_Statics::NewProp_TopDownCameraComponent = { "TopDownCameraComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APFI_Lab5_StartCharacter, TopDownCameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TopDownCameraComponent_MetaData), NewProp_TopDownCameraComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APFI_Lab5_StartCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APFI_Lab5_StartCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraBoom_MetaData), NewProp_CameraBoom_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APFI_Lab5_StartCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APFI_Lab5_StartCharacter_Statics::NewProp_TopDownCameraComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APFI_Lab5_StartCharacter_Statics::NewProp_CameraBoom,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APFI_Lab5_StartCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_APFI_Lab5_StartCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_PFI_Lab5_Start,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APFI_Lab5_StartCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APFI_Lab5_StartCharacter_Statics::ClassParams = {
	&APFI_Lab5_StartCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_APFI_Lab5_StartCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_APFI_Lab5_StartCharacter_Statics::PropPointers),
	0,
	0x008001A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APFI_Lab5_StartCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_APFI_Lab5_StartCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APFI_Lab5_StartCharacter()
{
	if (!Z_Registration_Info_UClass_APFI_Lab5_StartCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APFI_Lab5_StartCharacter.OuterSingleton, Z_Construct_UClass_APFI_Lab5_StartCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APFI_Lab5_StartCharacter.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APFI_Lab5_StartCharacter);
APFI_Lab5_StartCharacter::~APFI_Lab5_StartCharacter() {}
// ********** End Class APFI_Lab5_StartCharacter ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_PFI_Lab5_Start_Source_PFI_Lab5_Start_PFI_Lab5_StartCharacter_h__Script_PFI_Lab5_Start_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APFI_Lab5_StartCharacter, APFI_Lab5_StartCharacter::StaticClass, TEXT("APFI_Lab5_StartCharacter"), &Z_Registration_Info_UClass_APFI_Lab5_StartCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APFI_Lab5_StartCharacter), 493147910U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PFI_Lab5_Start_Source_PFI_Lab5_Start_PFI_Lab5_StartCharacter_h__Script_PFI_Lab5_Start_2406186318(TEXT("/Script/PFI_Lab5_Start"),
	Z_CompiledInDeferFile_FID_PFI_Lab5_Start_Source_PFI_Lab5_Start_PFI_Lab5_StartCharacter_h__Script_PFI_Lab5_Start_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PFI_Lab5_Start_Source_PFI_Lab5_Start_PFI_Lab5_StartCharacter_h__Script_PFI_Lab5_Start_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS

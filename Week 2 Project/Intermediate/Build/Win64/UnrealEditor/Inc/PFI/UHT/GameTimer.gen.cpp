// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameTimer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeGameTimer() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
PFI_API UClass* Z_Construct_UClass_AGameTimer();
PFI_API UClass* Z_Construct_UClass_AGameTimer_NoRegister();
UPackage* Z_Construct_UPackage__Script_PFI();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AGameTimer ***************************************************************
void AGameTimer::StaticRegisterNativesAGameTimer()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AGameTimer;
UClass* AGameTimer::GetPrivateStaticClass()
{
	using TClass = AGameTimer;
	if (!Z_Registration_Info_UClass_AGameTimer.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("GameTimer"),
			Z_Registration_Info_UClass_AGameTimer.InnerSingleton,
			StaticRegisterNativesAGameTimer,
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
	return Z_Registration_Info_UClass_AGameTimer.InnerSingleton;
}
UClass* Z_Construct_UClass_AGameTimer_NoRegister()
{
	return AGameTimer::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AGameTimer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "GameTimer.h" },
		{ "ModuleRelativePath", "GameTimer.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGameTimer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AGameTimer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_PFI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGameTimer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGameTimer_Statics::ClassParams = {
	&AGameTimer::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGameTimer_Statics::Class_MetaDataParams), Z_Construct_UClass_AGameTimer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGameTimer()
{
	if (!Z_Registration_Info_UClass_AGameTimer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGameTimer.OuterSingleton, Z_Construct_UClass_AGameTimer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGameTimer.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGameTimer);
AGameTimer::~AGameTimer() {}
// ********** End Class AGameTimer *****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Week_2_Project_Source_PFI_GameTimer_h__Script_PFI_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGameTimer, AGameTimer::StaticClass, TEXT("AGameTimer"), &Z_Registration_Info_UClass_AGameTimer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGameTimer), 1655337484U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Week_2_Project_Source_PFI_GameTimer_h__Script_PFI_1917409131(TEXT("/Script/PFI"),
	Z_CompiledInDeferFile_FID_Week_2_Project_Source_PFI_GameTimer_h__Script_PFI_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Week_2_Project_Source_PFI_GameTimer_h__Script_PFI_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS

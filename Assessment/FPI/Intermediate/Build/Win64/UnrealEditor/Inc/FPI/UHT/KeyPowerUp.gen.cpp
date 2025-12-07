// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KeyPowerUp.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeKeyPowerUp() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
FPI_API UClass* Z_Construct_UClass_AKeyPowerUp();
FPI_API UClass* Z_Construct_UClass_AKeyPowerUp_NoRegister();
UPackage* Z_Construct_UPackage__Script_FPI();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AKeyPowerUp **************************************************************
void AKeyPowerUp::StaticRegisterNativesAKeyPowerUp()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AKeyPowerUp;
UClass* AKeyPowerUp::GetPrivateStaticClass()
{
	using TClass = AKeyPowerUp;
	if (!Z_Registration_Info_UClass_AKeyPowerUp.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("KeyPowerUp"),
			Z_Registration_Info_UClass_AKeyPowerUp.InnerSingleton,
			StaticRegisterNativesAKeyPowerUp,
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
	return Z_Registration_Info_UClass_AKeyPowerUp.InnerSingleton;
}
UClass* Z_Construct_UClass_AKeyPowerUp_NoRegister()
{
	return AKeyPowerUp::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AKeyPowerUp_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "KeyPowerUp.h" },
		{ "ModuleRelativePath", "KeyPowerUp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_keyPowerUpMesh_MetaData[] = {
		{ "Category", "KeyPowerUp" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "KeyPowerUp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_rotationSpeed_MetaData[] = {
		{ "Category", "Spin" },
		{ "ModuleRelativePath", "KeyPowerUp.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_keyPowerUpMesh;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_rotationSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AKeyPowerUp>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AKeyPowerUp_Statics::NewProp_keyPowerUpMesh = { "keyPowerUpMesh", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AKeyPowerUp, keyPowerUpMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_keyPowerUpMesh_MetaData), NewProp_keyPowerUpMesh_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AKeyPowerUp_Statics::NewProp_rotationSpeed = { "rotationSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AKeyPowerUp, rotationSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_rotationSpeed_MetaData), NewProp_rotationSpeed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AKeyPowerUp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKeyPowerUp_Statics::NewProp_keyPowerUpMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKeyPowerUp_Statics::NewProp_rotationSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AKeyPowerUp_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AKeyPowerUp_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_FPI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AKeyPowerUp_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AKeyPowerUp_Statics::ClassParams = {
	&AKeyPowerUp::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AKeyPowerUp_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AKeyPowerUp_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AKeyPowerUp_Statics::Class_MetaDataParams), Z_Construct_UClass_AKeyPowerUp_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AKeyPowerUp()
{
	if (!Z_Registration_Info_UClass_AKeyPowerUp.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AKeyPowerUp.OuterSingleton, Z_Construct_UClass_AKeyPowerUp_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AKeyPowerUp.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AKeyPowerUp);
AKeyPowerUp::~AKeyPowerUp() {}
// ********** End Class AKeyPowerUp ****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_FPI_Source_FPI_KeyPowerUp_h__Script_FPI_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AKeyPowerUp, AKeyPowerUp::StaticClass, TEXT("AKeyPowerUp"), &Z_Registration_Info_UClass_AKeyPowerUp, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AKeyPowerUp), 626029274U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FPI_Source_FPI_KeyPowerUp_h__Script_FPI_2368857886(TEXT("/Script/FPI"),
	Z_CompiledInDeferFile_FID_FPI_Source_FPI_KeyPowerUp_h__Script_FPI_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FPI_Source_FPI_KeyPowerUp_h__Script_FPI_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovingPlatform.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMovingPlatform() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
FPI_API UClass* Z_Construct_UClass_AMovingPlatform();
FPI_API UClass* Z_Construct_UClass_AMovingPlatform_NoRegister();
FPI_API UEnum* Z_Construct_UEnum_FPI_EPlatformDirection();
UPackage* Z_Construct_UPackage__Script_FPI();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EPlatformDirection ********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPlatformDirection;
static UEnum* EPlatformDirection_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPlatformDirection.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPlatformDirection.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_FPI_EPlatformDirection, (UObject*)Z_Construct_UPackage__Script_FPI(), TEXT("EPlatformDirection"));
	}
	return Z_Registration_Info_UEnum_EPlatformDirection.OuterSingleton;
}
template<> FPI_API UEnum* StaticEnum<EPlatformDirection>()
{
	return EPlatformDirection_StaticEnum();
}
struct Z_Construct_UEnum_FPI_EPlatformDirection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Backward.Name", "EPlatformDirection::Backward" },
		{ "BlueprintType", "true" },
		{ "Down.Name", "EPlatformDirection::Down" },
		{ "Forward.Name", "EPlatformDirection::Forward" },
		{ "Left.Name", "EPlatformDirection::Left" },
		{ "ModuleRelativePath", "MovingPlatform.h" },
		{ "Right.Name", "EPlatformDirection::Right" },
		{ "Up.Name", "EPlatformDirection::Up" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPlatformDirection::Forward", (int64)EPlatformDirection::Forward },
		{ "EPlatformDirection::Backward", (int64)EPlatformDirection::Backward },
		{ "EPlatformDirection::Left", (int64)EPlatformDirection::Left },
		{ "EPlatformDirection::Right", (int64)EPlatformDirection::Right },
		{ "EPlatformDirection::Up", (int64)EPlatformDirection::Up },
		{ "EPlatformDirection::Down", (int64)EPlatformDirection::Down },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_FPI_EPlatformDirection_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_FPI,
	nullptr,
	"EPlatformDirection",
	"EPlatformDirection",
	Z_Construct_UEnum_FPI_EPlatformDirection_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_FPI_EPlatformDirection_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_FPI_EPlatformDirection_Statics::Enum_MetaDataParams), Z_Construct_UEnum_FPI_EPlatformDirection_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_FPI_EPlatformDirection()
{
	if (!Z_Registration_Info_UEnum_EPlatformDirection.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPlatformDirection.InnerSingleton, Z_Construct_UEnum_FPI_EPlatformDirection_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPlatformDirection.InnerSingleton;
}
// ********** End Enum EPlatformDirection **********************************************************

// ********** Begin Class AMovingPlatform **********************************************************
void AMovingPlatform::StaticRegisterNativesAMovingPlatform()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AMovingPlatform;
UClass* AMovingPlatform::GetPrivateStaticClass()
{
	using TClass = AMovingPlatform;
	if (!Z_Registration_Info_UClass_AMovingPlatform.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MovingPlatform"),
			Z_Registration_Info_UClass_AMovingPlatform.InnerSingleton,
			StaticRegisterNativesAMovingPlatform,
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
	return Z_Registration_Info_UClass_AMovingPlatform.InnerSingleton;
}
UClass* Z_Construct_UClass_AMovingPlatform_NoRegister()
{
	return AMovingPlatform::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AMovingPlatform_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MovingPlatform.h" },
		{ "ModuleRelativePath", "MovingPlatform.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_platformMesh_MetaData[] = {
		{ "Category", "MovingPlatform" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MovingPlatform.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_moveDirection_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "MovingPlatform.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_speed_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "MovingPlatform.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_distance_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "MovingPlatform.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_platformMesh;
	static const UECodeGen_Private::FBytePropertyParams NewProp_moveDirection_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_moveDirection;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_speed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_distance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMovingPlatform>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMovingPlatform_Statics::NewProp_platformMesh = { "platformMesh", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMovingPlatform, platformMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_platformMesh_MetaData), NewProp_platformMesh_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AMovingPlatform_Statics::NewProp_moveDirection_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AMovingPlatform_Statics::NewProp_moveDirection = { "moveDirection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMovingPlatform, moveDirection), Z_Construct_UEnum_FPI_EPlatformDirection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_moveDirection_MetaData), NewProp_moveDirection_MetaData) }; // 1853701530
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMovingPlatform_Statics::NewProp_speed = { "speed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMovingPlatform, speed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_speed_MetaData), NewProp_speed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMovingPlatform_Statics::NewProp_distance = { "distance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMovingPlatform, distance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_distance_MetaData), NewProp_distance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMovingPlatform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovingPlatform_Statics::NewProp_platformMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovingPlatform_Statics::NewProp_moveDirection_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovingPlatform_Statics::NewProp_moveDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovingPlatform_Statics::NewProp_speed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovingPlatform_Statics::NewProp_distance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMovingPlatform_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMovingPlatform_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_FPI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMovingPlatform_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMovingPlatform_Statics::ClassParams = {
	&AMovingPlatform::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AMovingPlatform_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AMovingPlatform_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMovingPlatform_Statics::Class_MetaDataParams), Z_Construct_UClass_AMovingPlatform_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMovingPlatform()
{
	if (!Z_Registration_Info_UClass_AMovingPlatform.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMovingPlatform.OuterSingleton, Z_Construct_UClass_AMovingPlatform_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMovingPlatform.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMovingPlatform);
AMovingPlatform::~AMovingPlatform() {}
// ********** End Class AMovingPlatform ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_FPI_Source_FPI_MovingPlatform_h__Script_FPI_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPlatformDirection_StaticEnum, TEXT("EPlatformDirection"), &Z_Registration_Info_UEnum_EPlatformDirection, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1853701530U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMovingPlatform, AMovingPlatform::StaticClass, TEXT("AMovingPlatform"), &Z_Registration_Info_UClass_AMovingPlatform, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMovingPlatform), 1750893172U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FPI_Source_FPI_MovingPlatform_h__Script_FPI_710422374(TEXT("/Script/FPI"),
	Z_CompiledInDeferFile_FID_FPI_Source_FPI_MovingPlatform_h__Script_FPI_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FPI_Source_FPI_MovingPlatform_h__Script_FPI_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_FPI_Source_FPI_MovingPlatform_h__Script_FPI_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FPI_Source_FPI_MovingPlatform_h__Script_FPI_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS

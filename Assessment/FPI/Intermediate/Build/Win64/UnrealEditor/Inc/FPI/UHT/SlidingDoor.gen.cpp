// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SlidingDoor.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSlidingDoor() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
FPI_API UClass* Z_Construct_UClass_ASlidingDoor();
FPI_API UClass* Z_Construct_UClass_ASlidingDoor_NoRegister();
UPackage* Z_Construct_UPackage__Script_FPI();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ASlidingDoor Function OpenDoor *******************************************
struct Z_Construct_UFunction_ASlidingDoor_OpenDoor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "SlidingDoor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASlidingDoor_OpenDoor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASlidingDoor, nullptr, "OpenDoor", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASlidingDoor_OpenDoor_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASlidingDoor_OpenDoor_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ASlidingDoor_OpenDoor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASlidingDoor_OpenDoor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASlidingDoor::execOpenDoor)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OpenDoor();
	P_NATIVE_END;
}
// ********** End Class ASlidingDoor Function OpenDoor *********************************************

// ********** Begin Class ASlidingDoor *************************************************************
void ASlidingDoor::StaticRegisterNativesASlidingDoor()
{
	UClass* Class = ASlidingDoor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OpenDoor", &ASlidingDoor::execOpenDoor },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ASlidingDoor;
UClass* ASlidingDoor::GetPrivateStaticClass()
{
	using TClass = ASlidingDoor;
	if (!Z_Registration_Info_UClass_ASlidingDoor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("SlidingDoor"),
			Z_Registration_Info_UClass_ASlidingDoor.InnerSingleton,
			StaticRegisterNativesASlidingDoor,
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
	return Z_Registration_Info_UClass_ASlidingDoor.InnerSingleton;
}
UClass* Z_Construct_UClass_ASlidingDoor_NoRegister()
{
	return ASlidingDoor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ASlidingDoor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SlidingDoor.h" },
		{ "ModuleRelativePath", "SlidingDoor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_doorMesh_MetaData[] = {
		{ "Category", "SlidingDoor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SlidingDoor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_slideDistance_MetaData[] = {
		{ "Category", "SlidingDoor" },
		{ "ModuleRelativePath", "SlidingDoor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_slideSpeed_MetaData[] = {
		{ "Category", "SlidingDoor" },
		{ "ModuleRelativePath", "SlidingDoor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_doorMesh;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_slideDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_slideSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ASlidingDoor_OpenDoor, "OpenDoor" }, // 2873238859
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASlidingDoor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASlidingDoor_Statics::NewProp_doorMesh = { "doorMesh", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASlidingDoor, doorMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_doorMesh_MetaData), NewProp_doorMesh_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASlidingDoor_Statics::NewProp_slideDistance = { "slideDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASlidingDoor, slideDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_slideDistance_MetaData), NewProp_slideDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASlidingDoor_Statics::NewProp_slideSpeed = { "slideSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASlidingDoor, slideSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_slideSpeed_MetaData), NewProp_slideSpeed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASlidingDoor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASlidingDoor_Statics::NewProp_doorMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASlidingDoor_Statics::NewProp_slideDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASlidingDoor_Statics::NewProp_slideSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASlidingDoor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASlidingDoor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_FPI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASlidingDoor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASlidingDoor_Statics::ClassParams = {
	&ASlidingDoor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ASlidingDoor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ASlidingDoor_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASlidingDoor_Statics::Class_MetaDataParams), Z_Construct_UClass_ASlidingDoor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASlidingDoor()
{
	if (!Z_Registration_Info_UClass_ASlidingDoor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASlidingDoor.OuterSingleton, Z_Construct_UClass_ASlidingDoor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASlidingDoor.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASlidingDoor);
ASlidingDoor::~ASlidingDoor() {}
// ********** End Class ASlidingDoor ***************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_FPI_Source_FPI_SlidingDoor_h__Script_FPI_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASlidingDoor, ASlidingDoor::StaticClass, TEXT("ASlidingDoor"), &Z_Registration_Info_UClass_ASlidingDoor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASlidingDoor), 1261770859U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FPI_Source_FPI_SlidingDoor_h__Script_FPI_2070408296(TEXT("/Script/FPI"),
	Z_CompiledInDeferFile_FID_FPI_Source_FPI_SlidingDoor_h__Script_FPI_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FPI_Source_FPI_SlidingDoor_h__Script_FPI_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Objectives.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeObjectives() {}

// ********** Begin Cross Module References ********************************************************
FPI_API UClass* Z_Construct_UClass_UObjectives();
FPI_API UClass* Z_Construct_UClass_UObjectives_NoRegister();
UMG_API UClass* Z_Construct_UClass_UMultiLineEditableTextBox_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_FPI();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UObjectives Function ChangeObjective *************************************
struct Z_Construct_UFunction_UObjectives_ChangeObjective_Statics
{
	struct Objectives_eventChangeObjective_Parms
	{
		int32 objectiveNum;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Objectives.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_objectiveNum;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UObjectives_ChangeObjective_Statics::NewProp_objectiveNum = { "objectiveNum", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Objectives_eventChangeObjective_Parms, objectiveNum), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UObjectives_ChangeObjective_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObjectives_ChangeObjective_Statics::NewProp_objectiveNum,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectives_ChangeObjective_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UObjectives_ChangeObjective_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UObjectives, nullptr, "ChangeObjective", Z_Construct_UFunction_UObjectives_ChangeObjective_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectives_ChangeObjective_Statics::PropPointers), sizeof(Z_Construct_UFunction_UObjectives_ChangeObjective_Statics::Objectives_eventChangeObjective_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectives_ChangeObjective_Statics::Function_MetaDataParams), Z_Construct_UFunction_UObjectives_ChangeObjective_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UObjectives_ChangeObjective_Statics::Objectives_eventChangeObjective_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UObjectives_ChangeObjective()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UObjectives_ChangeObjective_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UObjectives::execChangeObjective)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_objectiveNum);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ChangeObjective(Z_Param_objectiveNum);
	P_NATIVE_END;
}
// ********** End Class UObjectives Function ChangeObjective ***************************************

// ********** Begin Class UObjectives **************************************************************
void UObjectives::StaticRegisterNativesUObjectives()
{
	UClass* Class = UObjectives::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ChangeObjective", &UObjectives::execChangeObjective },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UObjectives;
UClass* UObjectives::GetPrivateStaticClass()
{
	using TClass = UObjectives;
	if (!Z_Registration_Info_UClass_UObjectives.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("Objectives"),
			Z_Registration_Info_UClass_UObjectives.InnerSingleton,
			StaticRegisterNativesUObjectives,
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
	return Z_Registration_Info_UClass_UObjectives.InnerSingleton;
}
UClass* Z_Construct_UClass_UObjectives_NoRegister()
{
	return UObjectives::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UObjectives_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Objectives.h" },
		{ "ModuleRelativePath", "Objectives.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_objectivesTXT_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Objectives.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_objectivesTXT;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UObjectives_ChangeObjective, "ChangeObjective" }, // 1725574587
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UObjectives>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UObjectives_Statics::NewProp_objectivesTXT = { "objectivesTXT", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UObjectives, objectivesTXT), Z_Construct_UClass_UMultiLineEditableTextBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_objectivesTXT_MetaData), NewProp_objectivesTXT_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UObjectives_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectives_Statics::NewProp_objectivesTXT,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UObjectives_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UObjectives_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_FPI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UObjectives_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UObjectives_Statics::ClassParams = {
	&UObjectives::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UObjectives_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UObjectives_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UObjectives_Statics::Class_MetaDataParams), Z_Construct_UClass_UObjectives_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UObjectives()
{
	if (!Z_Registration_Info_UClass_UObjectives.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UObjectives.OuterSingleton, Z_Construct_UClass_UObjectives_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UObjectives.OuterSingleton;
}
UObjectives::UObjectives(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UObjectives);
UObjectives::~UObjectives() {}
// ********** End Class UObjectives ****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_FPI_Source_FPI_Objectives_h__Script_FPI_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UObjectives, UObjectives::StaticClass, TEXT("UObjectives"), &Z_Registration_Info_UClass_UObjectives, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UObjectives), 2606483588U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FPI_Source_FPI_Objectives_h__Script_FPI_1102580059(TEXT("/Script/FPI"),
	Z_CompiledInDeferFile_FID_FPI_Source_FPI_Objectives_h__Script_FPI_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FPI_Source_FPI_Objectives_h__Script_FPI_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS

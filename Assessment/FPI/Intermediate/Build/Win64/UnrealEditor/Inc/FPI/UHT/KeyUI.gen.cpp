// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KeyUI.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeKeyUI() {}

// ********** Begin Cross Module References ********************************************************
FPI_API UClass* Z_Construct_UClass_UKeyUI();
FPI_API UClass* Z_Construct_UClass_UKeyUI_NoRegister();
UMG_API UClass* Z_Construct_UClass_UEditableTextBox_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_FPI();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UKeyUI Function SetUIKeyCount ********************************************
struct Z_Construct_UFunction_UKeyUI_SetUIKeyCount_Statics
{
	struct KeyUI_eventSetUIKeyCount_Parms
	{
		int32 numKeys;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "KeyUI.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_numKeys;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKeyUI_SetUIKeyCount_Statics::NewProp_numKeys = { "numKeys", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KeyUI_eventSetUIKeyCount_Parms, numKeys), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKeyUI_SetUIKeyCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKeyUI_SetUIKeyCount_Statics::NewProp_numKeys,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKeyUI_SetUIKeyCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKeyUI_SetUIKeyCount_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UKeyUI, nullptr, "SetUIKeyCount", Z_Construct_UFunction_UKeyUI_SetUIKeyCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKeyUI_SetUIKeyCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UKeyUI_SetUIKeyCount_Statics::KeyUI_eventSetUIKeyCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKeyUI_SetUIKeyCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKeyUI_SetUIKeyCount_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UKeyUI_SetUIKeyCount_Statics::KeyUI_eventSetUIKeyCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKeyUI_SetUIKeyCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKeyUI_SetUIKeyCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKeyUI::execSetUIKeyCount)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_numKeys);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetUIKeyCount(Z_Param_numKeys);
	P_NATIVE_END;
}
// ********** End Class UKeyUI Function SetUIKeyCount **********************************************

// ********** Begin Class UKeyUI *******************************************************************
void UKeyUI::StaticRegisterNativesUKeyUI()
{
	UClass* Class = UKeyUI::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetUIKeyCount", &UKeyUI::execSetUIKeyCount },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UKeyUI;
UClass* UKeyUI::GetPrivateStaticClass()
{
	using TClass = UKeyUI;
	if (!Z_Registration_Info_UClass_UKeyUI.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("KeyUI"),
			Z_Registration_Info_UClass_UKeyUI.InnerSingleton,
			StaticRegisterNativesUKeyUI,
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
	return Z_Registration_Info_UClass_UKeyUI.InnerSingleton;
}
UClass* Z_Construct_UClass_UKeyUI_NoRegister()
{
	return UKeyUI::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UKeyUI_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "KeyUI.h" },
		{ "ModuleRelativePath", "KeyUI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_numKeys_TXT_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "KeyUI.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_numKeys_TXT;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UKeyUI_SetUIKeyCount, "SetUIKeyCount" }, // 2928381899
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKeyUI>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UKeyUI_Statics::NewProp_numKeys_TXT = { "numKeys_TXT", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKeyUI, numKeys_TXT), Z_Construct_UClass_UEditableTextBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_numKeys_TXT_MetaData), NewProp_numKeys_TXT_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UKeyUI_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKeyUI_Statics::NewProp_numKeys_TXT,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UKeyUI_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UKeyUI_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_FPI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UKeyUI_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UKeyUI_Statics::ClassParams = {
	&UKeyUI::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UKeyUI_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UKeyUI_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UKeyUI_Statics::Class_MetaDataParams), Z_Construct_UClass_UKeyUI_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UKeyUI()
{
	if (!Z_Registration_Info_UClass_UKeyUI.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UKeyUI.OuterSingleton, Z_Construct_UClass_UKeyUI_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UKeyUI.OuterSingleton;
}
UKeyUI::UKeyUI(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UKeyUI);
UKeyUI::~UKeyUI() {}
// ********** End Class UKeyUI *********************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_FPI_Source_FPI_KeyUI_h__Script_FPI_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UKeyUI, UKeyUI::StaticClass, TEXT("UKeyUI"), &Z_Registration_Info_UClass_UKeyUI, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UKeyUI), 1821468365U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FPI_Source_FPI_KeyUI_h__Script_FPI_401085742(TEXT("/Script/FPI"),
	Z_CompiledInDeferFile_FID_FPI_Source_FPI_KeyUI_h__Script_FPI_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FPI_Source_FPI_KeyUI_h__Script_FPI_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS

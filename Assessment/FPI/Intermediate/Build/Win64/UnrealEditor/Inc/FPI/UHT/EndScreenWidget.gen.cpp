// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EndScreenWidget.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeEndScreenWidget() {}

// ********** Begin Cross Module References ********************************************************
FPI_API UClass* Z_Construct_UClass_UEndScreenWidget();
FPI_API UClass* Z_Construct_UClass_UEndScreenWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UEditableTextBox_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_FPI();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UEndScreenWidget Function SetTimeTakenUI *********************************
struct Z_Construct_UFunction_UEndScreenWidget_SetTimeTakenUI_Statics
{
	struct EndScreenWidget_eventSetTimeTakenUI_Parms
	{
		float timeTaken;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "EndScreenWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_timeTaken;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UEndScreenWidget_SetTimeTakenUI_Statics::NewProp_timeTaken = { "timeTaken", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EndScreenWidget_eventSetTimeTakenUI_Parms, timeTaken), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEndScreenWidget_SetTimeTakenUI_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEndScreenWidget_SetTimeTakenUI_Statics::NewProp_timeTaken,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEndScreenWidget_SetTimeTakenUI_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEndScreenWidget_SetTimeTakenUI_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UEndScreenWidget, nullptr, "SetTimeTakenUI", Z_Construct_UFunction_UEndScreenWidget_SetTimeTakenUI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEndScreenWidget_SetTimeTakenUI_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEndScreenWidget_SetTimeTakenUI_Statics::EndScreenWidget_eventSetTimeTakenUI_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEndScreenWidget_SetTimeTakenUI_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEndScreenWidget_SetTimeTakenUI_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UEndScreenWidget_SetTimeTakenUI_Statics::EndScreenWidget_eventSetTimeTakenUI_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEndScreenWidget_SetTimeTakenUI()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEndScreenWidget_SetTimeTakenUI_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEndScreenWidget::execSetTimeTakenUI)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_timeTaken);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetTimeTakenUI(Z_Param_timeTaken);
	P_NATIVE_END;
}
// ********** End Class UEndScreenWidget Function SetTimeTakenUI ***********************************

// ********** Begin Class UEndScreenWidget *********************************************************
void UEndScreenWidget::StaticRegisterNativesUEndScreenWidget()
{
	UClass* Class = UEndScreenWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetTimeTakenUI", &UEndScreenWidget::execSetTimeTakenUI },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UEndScreenWidget;
UClass* UEndScreenWidget::GetPrivateStaticClass()
{
	using TClass = UEndScreenWidget;
	if (!Z_Registration_Info_UClass_UEndScreenWidget.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("EndScreenWidget"),
			Z_Registration_Info_UClass_UEndScreenWidget.InnerSingleton,
			StaticRegisterNativesUEndScreenWidget,
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
	return Z_Registration_Info_UClass_UEndScreenWidget.InnerSingleton;
}
UClass* Z_Construct_UClass_UEndScreenWidget_NoRegister()
{
	return UEndScreenWidget::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UEndScreenWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "EndScreenWidget.h" },
		{ "ModuleRelativePath", "EndScreenWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_time_TXT_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "EndScreenWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_time_TXT;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEndScreenWidget_SetTimeTakenUI, "SetTimeTakenUI" }, // 3975015051
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEndScreenWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEndScreenWidget_Statics::NewProp_time_TXT = { "time_TXT", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEndScreenWidget, time_TXT), Z_Construct_UClass_UEditableTextBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_time_TXT_MetaData), NewProp_time_TXT_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEndScreenWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEndScreenWidget_Statics::NewProp_time_TXT,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEndScreenWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEndScreenWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_FPI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEndScreenWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEndScreenWidget_Statics::ClassParams = {
	&UEndScreenWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UEndScreenWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UEndScreenWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEndScreenWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UEndScreenWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEndScreenWidget()
{
	if (!Z_Registration_Info_UClass_UEndScreenWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEndScreenWidget.OuterSingleton, Z_Construct_UClass_UEndScreenWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEndScreenWidget.OuterSingleton;
}
UEndScreenWidget::UEndScreenWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEndScreenWidget);
UEndScreenWidget::~UEndScreenWidget() {}
// ********** End Class UEndScreenWidget ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_FPI_Source_FPI_EndScreenWidget_h__Script_FPI_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEndScreenWidget, UEndScreenWidget::StaticClass, TEXT("UEndScreenWidget"), &Z_Registration_Info_UClass_UEndScreenWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEndScreenWidget), 550384402U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FPI_Source_FPI_EndScreenWidget_h__Script_FPI_1329102758(TEXT("/Script/FPI"),
	Z_CompiledInDeferFile_FID_FPI_Source_FPI_EndScreenWidget_h__Script_FPI_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FPI_Source_FPI_EndScreenWidget_h__Script_FPI_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS

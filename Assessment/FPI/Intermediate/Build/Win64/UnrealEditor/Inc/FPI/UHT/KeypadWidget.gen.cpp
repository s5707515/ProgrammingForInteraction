// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KeypadWidget.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeKeypadWidget() {}

// ********** Begin Cross Module References ********************************************************
FPI_API UClass* Z_Construct_UClass_UKeypadWidget();
FPI_API UClass* Z_Construct_UClass_UKeypadWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UEditableTextBox_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_FPI();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UKeypadWidget Function AddToTextBox **************************************
struct Z_Construct_UFunction_UKeypadWidget_AddToTextBox_Statics
{
	struct KeypadWidget_eventAddToTextBox_Parms
	{
		FString text;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "KeypadWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_text_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_text;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UKeypadWidget_AddToTextBox_Statics::NewProp_text = { "text", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KeypadWidget_eventAddToTextBox_Parms, text), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_text_MetaData), NewProp_text_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKeypadWidget_AddToTextBox_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKeypadWidget_AddToTextBox_Statics::NewProp_text,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKeypadWidget_AddToTextBox_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKeypadWidget_AddToTextBox_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UKeypadWidget, nullptr, "AddToTextBox", Z_Construct_UFunction_UKeypadWidget_AddToTextBox_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKeypadWidget_AddToTextBox_Statics::PropPointers), sizeof(Z_Construct_UFunction_UKeypadWidget_AddToTextBox_Statics::KeypadWidget_eventAddToTextBox_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKeypadWidget_AddToTextBox_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKeypadWidget_AddToTextBox_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UKeypadWidget_AddToTextBox_Statics::KeypadWidget_eventAddToTextBox_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKeypadWidget_AddToTextBox()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKeypadWidget_AddToTextBox_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKeypadWidget::execAddToTextBox)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_text);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddToTextBox(Z_Param_text);
	P_NATIVE_END;
}
// ********** End Class UKeypadWidget Function AddToTextBox ****************************************

// ********** Begin Class UKeypadWidget Function CheckPasscode *************************************
struct Z_Construct_UFunction_UKeypadWidget_CheckPasscode_Statics
{
	struct KeypadWidget_eventCheckPasscode_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "KeypadWidget.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UKeypadWidget_CheckPasscode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((KeypadWidget_eventCheckPasscode_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKeypadWidget_CheckPasscode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(KeypadWidget_eventCheckPasscode_Parms), &Z_Construct_UFunction_UKeypadWidget_CheckPasscode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKeypadWidget_CheckPasscode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKeypadWidget_CheckPasscode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKeypadWidget_CheckPasscode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKeypadWidget_CheckPasscode_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UKeypadWidget, nullptr, "CheckPasscode", Z_Construct_UFunction_UKeypadWidget_CheckPasscode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKeypadWidget_CheckPasscode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UKeypadWidget_CheckPasscode_Statics::KeypadWidget_eventCheckPasscode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKeypadWidget_CheckPasscode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKeypadWidget_CheckPasscode_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UKeypadWidget_CheckPasscode_Statics::KeypadWidget_eventCheckPasscode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKeypadWidget_CheckPasscode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKeypadWidget_CheckPasscode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKeypadWidget::execCheckPasscode)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CheckPasscode();
	P_NATIVE_END;
}
// ********** End Class UKeypadWidget Function CheckPasscode ***************************************

// ********** Begin Class UKeypadWidget Function ClearPasscode *************************************
struct Z_Construct_UFunction_UKeypadWidget_ClearPasscode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "KeypadWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKeypadWidget_ClearPasscode_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UKeypadWidget, nullptr, "ClearPasscode", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKeypadWidget_ClearPasscode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKeypadWidget_ClearPasscode_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UKeypadWidget_ClearPasscode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKeypadWidget_ClearPasscode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKeypadWidget::execClearPasscode)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearPasscode();
	P_NATIVE_END;
}
// ********** End Class UKeypadWidget Function ClearPasscode ***************************************

// ********** Begin Class UKeypadWidget Function TextBoxBack ***************************************
struct Z_Construct_UFunction_UKeypadWidget_TextBoxBack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "KeypadWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKeypadWidget_TextBoxBack_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UKeypadWidget, nullptr, "TextBoxBack", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKeypadWidget_TextBoxBack_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKeypadWidget_TextBoxBack_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UKeypadWidget_TextBoxBack()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKeypadWidget_TextBoxBack_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKeypadWidget::execTextBoxBack)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TextBoxBack();
	P_NATIVE_END;
}
// ********** End Class UKeypadWidget Function TextBoxBack *****************************************

// ********** Begin Class UKeypadWidget ************************************************************
void UKeypadWidget::StaticRegisterNativesUKeypadWidget()
{
	UClass* Class = UKeypadWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddToTextBox", &UKeypadWidget::execAddToTextBox },
		{ "CheckPasscode", &UKeypadWidget::execCheckPasscode },
		{ "ClearPasscode", &UKeypadWidget::execClearPasscode },
		{ "TextBoxBack", &UKeypadWidget::execTextBoxBack },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UKeypadWidget;
UClass* UKeypadWidget::GetPrivateStaticClass()
{
	using TClass = UKeypadWidget;
	if (!Z_Registration_Info_UClass_UKeypadWidget.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("KeypadWidget"),
			Z_Registration_Info_UClass_UKeypadWidget.InnerSingleton,
			StaticRegisterNativesUKeypadWidget,
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
	return Z_Registration_Info_UClass_UKeypadWidget.InnerSingleton;
}
UClass* Z_Construct_UClass_UKeypadWidget_NoRegister()
{
	return UKeypadWidget::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UKeypadWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "KeypadWidget.h" },
		{ "ModuleRelativePath", "KeypadWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_passcode_TXT_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "KeypadWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_numDigits_MetaData[] = {
		{ "Category", "KeypadWidget" },
		{ "ModuleRelativePath", "KeypadWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_passcode_MetaData[] = {
		{ "Category", "KeypadWidget" },
		{ "ModuleRelativePath", "KeypadWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_passcode_TXT;
	static const UECodeGen_Private::FIntPropertyParams NewProp_numDigits;
	static const UECodeGen_Private::FStrPropertyParams NewProp_passcode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UKeypadWidget_AddToTextBox, "AddToTextBox" }, // 3877922665
		{ &Z_Construct_UFunction_UKeypadWidget_CheckPasscode, "CheckPasscode" }, // 3928226592
		{ &Z_Construct_UFunction_UKeypadWidget_ClearPasscode, "ClearPasscode" }, // 291138295
		{ &Z_Construct_UFunction_UKeypadWidget_TextBoxBack, "TextBoxBack" }, // 1318233907
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKeypadWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UKeypadWidget_Statics::NewProp_passcode_TXT = { "passcode_TXT", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKeypadWidget, passcode_TXT), Z_Construct_UClass_UEditableTextBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_passcode_TXT_MetaData), NewProp_passcode_TXT_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UKeypadWidget_Statics::NewProp_numDigits = { "numDigits", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKeypadWidget, numDigits), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_numDigits_MetaData), NewProp_numDigits_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UKeypadWidget_Statics::NewProp_passcode = { "passcode", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKeypadWidget, passcode), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_passcode_MetaData), NewProp_passcode_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UKeypadWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKeypadWidget_Statics::NewProp_passcode_TXT,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKeypadWidget_Statics::NewProp_numDigits,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKeypadWidget_Statics::NewProp_passcode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UKeypadWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UKeypadWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_FPI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UKeypadWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UKeypadWidget_Statics::ClassParams = {
	&UKeypadWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UKeypadWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UKeypadWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UKeypadWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UKeypadWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UKeypadWidget()
{
	if (!Z_Registration_Info_UClass_UKeypadWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UKeypadWidget.OuterSingleton, Z_Construct_UClass_UKeypadWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UKeypadWidget.OuterSingleton;
}
UKeypadWidget::UKeypadWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UKeypadWidget);
UKeypadWidget::~UKeypadWidget() {}
// ********** End Class UKeypadWidget **************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_FPI_Source_FPI_KeypadWidget_h__Script_FPI_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UKeypadWidget, UKeypadWidget::StaticClass, TEXT("UKeypadWidget"), &Z_Registration_Info_UClass_UKeypadWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UKeypadWidget), 2656981367U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FPI_Source_FPI_KeypadWidget_h__Script_FPI_1253867725(TEXT("/Script/FPI"),
	Z_CompiledInDeferFile_FID_FPI_Source_FPI_KeypadWidget_h__Script_FPI_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FPI_Source_FPI_KeypadWidget_h__Script_FPI_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE5_Week6/PFI_Lib.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePFI_Lib() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
UE5_WEEK6_API UClass* Z_Construct_UClass_UPFI_Lib();
UE5_WEEK6_API UClass* Z_Construct_UClass_UPFI_Lib_NoRegister();
UPackage* Z_Construct_UPackage__Script_UE5_Week6();
// End Cross Module References

// Begin Class UPFI_Lib Function SaveArrayText
struct Z_Construct_UFunction_UPFI_Lib_SaveArrayText_Statics
{
	struct PFI_Lib_eventSaveArrayText_Parms
	{
		FString _saveDirectory;
		FString _filename;
		TArray<FString> _saveText;
		bool _allowOverWriting;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PFI_Lib.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp__saveDirectory;
	static const UECodeGen_Private::FStrPropertyParams NewProp__filename;
	static const UECodeGen_Private::FStrPropertyParams NewProp__saveText_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp__saveText;
	static void NewProp__allowOverWriting_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp__allowOverWriting;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPFI_Lib_SaveArrayText_Statics::NewProp__saveDirectory = { "_saveDirectory", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PFI_Lib_eventSaveArrayText_Parms, _saveDirectory), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPFI_Lib_SaveArrayText_Statics::NewProp__filename = { "_filename", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PFI_Lib_eventSaveArrayText_Parms, _filename), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPFI_Lib_SaveArrayText_Statics::NewProp__saveText_Inner = { "_saveText", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPFI_Lib_SaveArrayText_Statics::NewProp__saveText = { "_saveText", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PFI_Lib_eventSaveArrayText_Parms, _saveText), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UPFI_Lib_SaveArrayText_Statics::NewProp__allowOverWriting_SetBit(void* Obj)
{
	((PFI_Lib_eventSaveArrayText_Parms*)Obj)->_allowOverWriting = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPFI_Lib_SaveArrayText_Statics::NewProp__allowOverWriting = { "_allowOverWriting", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PFI_Lib_eventSaveArrayText_Parms), &Z_Construct_UFunction_UPFI_Lib_SaveArrayText_Statics::NewProp__allowOverWriting_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UPFI_Lib_SaveArrayText_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PFI_Lib_eventSaveArrayText_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPFI_Lib_SaveArrayText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PFI_Lib_eventSaveArrayText_Parms), &Z_Construct_UFunction_UPFI_Lib_SaveArrayText_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPFI_Lib_SaveArrayText_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPFI_Lib_SaveArrayText_Statics::NewProp__saveDirectory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPFI_Lib_SaveArrayText_Statics::NewProp__filename,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPFI_Lib_SaveArrayText_Statics::NewProp__saveText_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPFI_Lib_SaveArrayText_Statics::NewProp__saveText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPFI_Lib_SaveArrayText_Statics::NewProp__allowOverWriting,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPFI_Lib_SaveArrayText_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPFI_Lib_SaveArrayText_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPFI_Lib_SaveArrayText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPFI_Lib, nullptr, "SaveArrayText", nullptr, nullptr, Z_Construct_UFunction_UPFI_Lib_SaveArrayText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPFI_Lib_SaveArrayText_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPFI_Lib_SaveArrayText_Statics::PFI_Lib_eventSaveArrayText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPFI_Lib_SaveArrayText_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPFI_Lib_SaveArrayText_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPFI_Lib_SaveArrayText_Statics::PFI_Lib_eventSaveArrayText_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPFI_Lib_SaveArrayText()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPFI_Lib_SaveArrayText_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPFI_Lib::execSaveArrayText)
{
	P_GET_PROPERTY(FStrProperty,Z_Param__saveDirectory);
	P_GET_PROPERTY(FStrProperty,Z_Param__filename);
	P_GET_TARRAY(FString,Z_Param__saveText);
	P_GET_UBOOL(Z_Param__allowOverWriting);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UPFI_Lib::SaveArrayText(Z_Param__saveDirectory,Z_Param__filename,Z_Param__saveText,Z_Param__allowOverWriting);
	P_NATIVE_END;
}
// End Class UPFI_Lib Function SaveArrayText

// Begin Class UPFI_Lib
void UPFI_Lib::StaticRegisterNativesUPFI_Lib()
{
	UClass* Class = UPFI_Lib::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SaveArrayText", &UPFI_Lib::execSaveArrayText },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPFI_Lib);
UClass* Z_Construct_UClass_UPFI_Lib_NoRegister()
{
	return UPFI_Lib::StaticClass();
}
struct Z_Construct_UClass_UPFI_Lib_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "PFI_Lib.h" },
		{ "ModuleRelativePath", "PFI_Lib.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPFI_Lib_SaveArrayText, "SaveArrayText" }, // 2880752219
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPFI_Lib>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPFI_Lib_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_UE5_Week6,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPFI_Lib_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPFI_Lib_Statics::ClassParams = {
	&UPFI_Lib::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPFI_Lib_Statics::Class_MetaDataParams), Z_Construct_UClass_UPFI_Lib_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPFI_Lib()
{
	if (!Z_Registration_Info_UClass_UPFI_Lib.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPFI_Lib.OuterSingleton, Z_Construct_UClass_UPFI_Lib_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPFI_Lib.OuterSingleton;
}
template<> UE5_WEEK6_API UClass* StaticClass<UPFI_Lib>()
{
	return UPFI_Lib::StaticClass();
}
UPFI_Lib::UPFI_Lib(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPFI_Lib);
UPFI_Lib::~UPFI_Lib() {}
// End Class UPFI_Lib

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_Week6_Source_UE5_Week6_PFI_Lib_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPFI_Lib, UPFI_Lib::StaticClass, TEXT("UPFI_Lib"), &Z_Registration_Info_UClass_UPFI_Lib, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPFI_Lib), 488180613U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_Week6_Source_UE5_Week6_PFI_Lib_h_2169480324(TEXT("/Script/UE5_Week6"),
	Z_CompiledInDeferFile_FID_UE5_Week6_Source_UE5_Week6_PFI_Lib_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_Week6_Source_UE5_Week6_PFI_Lib_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

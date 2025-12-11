// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PFI_Lib.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodePFI_Lib() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
FPI_API UClass* Z_Construct_UClass_UPFI_Lib();
FPI_API UClass* Z_Construct_UClass_UPFI_Lib_NoRegister();
UPackage* Z_Construct_UPackage__Script_FPI();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPFI_Lib Function AddNewLineToFile ***************************************
struct Z_Construct_UFunction_UPFI_Lib_AddNewLineToFile_Statics
{
	struct PFI_Lib_eventAddNewLineToFile_Parms
	{
		FString saveDirectory;
		FString filename;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PFI_Lib.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_saveDirectory;
	static const UECodeGen_Private::FStrPropertyParams NewProp_filename;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPFI_Lib_AddNewLineToFile_Statics::NewProp_saveDirectory = { "saveDirectory", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PFI_Lib_eventAddNewLineToFile_Parms, saveDirectory), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPFI_Lib_AddNewLineToFile_Statics::NewProp_filename = { "filename", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PFI_Lib_eventAddNewLineToFile_Parms, filename), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UPFI_Lib_AddNewLineToFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PFI_Lib_eventAddNewLineToFile_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPFI_Lib_AddNewLineToFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PFI_Lib_eventAddNewLineToFile_Parms), &Z_Construct_UFunction_UPFI_Lib_AddNewLineToFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPFI_Lib_AddNewLineToFile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPFI_Lib_AddNewLineToFile_Statics::NewProp_saveDirectory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPFI_Lib_AddNewLineToFile_Statics::NewProp_filename,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPFI_Lib_AddNewLineToFile_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPFI_Lib_AddNewLineToFile_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPFI_Lib_AddNewLineToFile_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPFI_Lib, nullptr, "AddNewLineToFile", Z_Construct_UFunction_UPFI_Lib_AddNewLineToFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPFI_Lib_AddNewLineToFile_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPFI_Lib_AddNewLineToFile_Statics::PFI_Lib_eventAddNewLineToFile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPFI_Lib_AddNewLineToFile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPFI_Lib_AddNewLineToFile_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPFI_Lib_AddNewLineToFile_Statics::PFI_Lib_eventAddNewLineToFile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPFI_Lib_AddNewLineToFile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPFI_Lib_AddNewLineToFile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPFI_Lib::execAddNewLineToFile)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_saveDirectory);
	P_GET_PROPERTY(FStrProperty,Z_Param_filename);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UPFI_Lib::AddNewLineToFile(Z_Param_saveDirectory,Z_Param_filename);
	P_NATIVE_END;
}
// ********** End Class UPFI_Lib Function AddNewLineToFile *****************************************

// ********** Begin Class UPFI_Lib Function SaveObjectiveTime **************************************
struct Z_Construct_UFunction_UPFI_Lib_SaveObjectiveTime_Statics
{
	struct PFI_Lib_eventSaveObjectiveTime_Parms
	{
		FString saveDirectory;
		FString filename;
		FString objective;
		FString currentTime;
		bool allowOverwrite;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PFI_Lib.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_saveDirectory;
	static const UECodeGen_Private::FStrPropertyParams NewProp_filename;
	static const UECodeGen_Private::FStrPropertyParams NewProp_objective;
	static const UECodeGen_Private::FStrPropertyParams NewProp_currentTime;
	static void NewProp_allowOverwrite_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_allowOverwrite;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPFI_Lib_SaveObjectiveTime_Statics::NewProp_saveDirectory = { "saveDirectory", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PFI_Lib_eventSaveObjectiveTime_Parms, saveDirectory), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPFI_Lib_SaveObjectiveTime_Statics::NewProp_filename = { "filename", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PFI_Lib_eventSaveObjectiveTime_Parms, filename), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPFI_Lib_SaveObjectiveTime_Statics::NewProp_objective = { "objective", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PFI_Lib_eventSaveObjectiveTime_Parms, objective), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPFI_Lib_SaveObjectiveTime_Statics::NewProp_currentTime = { "currentTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PFI_Lib_eventSaveObjectiveTime_Parms, currentTime), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UPFI_Lib_SaveObjectiveTime_Statics::NewProp_allowOverwrite_SetBit(void* Obj)
{
	((PFI_Lib_eventSaveObjectiveTime_Parms*)Obj)->allowOverwrite = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPFI_Lib_SaveObjectiveTime_Statics::NewProp_allowOverwrite = { "allowOverwrite", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PFI_Lib_eventSaveObjectiveTime_Parms), &Z_Construct_UFunction_UPFI_Lib_SaveObjectiveTime_Statics::NewProp_allowOverwrite_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UPFI_Lib_SaveObjectiveTime_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PFI_Lib_eventSaveObjectiveTime_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPFI_Lib_SaveObjectiveTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PFI_Lib_eventSaveObjectiveTime_Parms), &Z_Construct_UFunction_UPFI_Lib_SaveObjectiveTime_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPFI_Lib_SaveObjectiveTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPFI_Lib_SaveObjectiveTime_Statics::NewProp_saveDirectory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPFI_Lib_SaveObjectiveTime_Statics::NewProp_filename,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPFI_Lib_SaveObjectiveTime_Statics::NewProp_objective,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPFI_Lib_SaveObjectiveTime_Statics::NewProp_currentTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPFI_Lib_SaveObjectiveTime_Statics::NewProp_allowOverwrite,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPFI_Lib_SaveObjectiveTime_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPFI_Lib_SaveObjectiveTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPFI_Lib_SaveObjectiveTime_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPFI_Lib, nullptr, "SaveObjectiveTime", Z_Construct_UFunction_UPFI_Lib_SaveObjectiveTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPFI_Lib_SaveObjectiveTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPFI_Lib_SaveObjectiveTime_Statics::PFI_Lib_eventSaveObjectiveTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPFI_Lib_SaveObjectiveTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPFI_Lib_SaveObjectiveTime_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPFI_Lib_SaveObjectiveTime_Statics::PFI_Lib_eventSaveObjectiveTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPFI_Lib_SaveObjectiveTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPFI_Lib_SaveObjectiveTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPFI_Lib::execSaveObjectiveTime)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_saveDirectory);
	P_GET_PROPERTY(FStrProperty,Z_Param_filename);
	P_GET_PROPERTY(FStrProperty,Z_Param_objective);
	P_GET_PROPERTY(FStrProperty,Z_Param_currentTime);
	P_GET_UBOOL(Z_Param_allowOverwrite);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UPFI_Lib::SaveObjectiveTime(Z_Param_saveDirectory,Z_Param_filename,Z_Param_objective,Z_Param_currentTime,Z_Param_allowOverwrite);
	P_NATIVE_END;
}
// ********** End Class UPFI_Lib Function SaveObjectiveTime ****************************************

// ********** Begin Class UPFI_Lib *****************************************************************
void UPFI_Lib::StaticRegisterNativesUPFI_Lib()
{
	UClass* Class = UPFI_Lib::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddNewLineToFile", &UPFI_Lib::execAddNewLineToFile },
		{ "SaveObjectiveTime", &UPFI_Lib::execSaveObjectiveTime },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UPFI_Lib;
UClass* UPFI_Lib::GetPrivateStaticClass()
{
	using TClass = UPFI_Lib;
	if (!Z_Registration_Info_UClass_UPFI_Lib.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("PFI_Lib"),
			Z_Registration_Info_UClass_UPFI_Lib.InnerSingleton,
			StaticRegisterNativesUPFI_Lib,
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
	return Z_Registration_Info_UClass_UPFI_Lib.InnerSingleton;
}
UClass* Z_Construct_UClass_UPFI_Lib_NoRegister()
{
	return UPFI_Lib::GetPrivateStaticClass();
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
		{ &Z_Construct_UFunction_UPFI_Lib_AddNewLineToFile, "AddNewLineToFile" }, // 2912714855
		{ &Z_Construct_UFunction_UPFI_Lib_SaveObjectiveTime, "SaveObjectiveTime" }, // 1313159375
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPFI_Lib>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPFI_Lib_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_FPI,
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
UPFI_Lib::UPFI_Lib(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPFI_Lib);
UPFI_Lib::~UPFI_Lib() {}
// ********** End Class UPFI_Lib *******************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_FPI_Source_FPI_PFI_Lib_h__Script_FPI_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPFI_Lib, UPFI_Lib::StaticClass, TEXT("UPFI_Lib"), &Z_Registration_Info_UClass_UPFI_Lib, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPFI_Lib), 3839454334U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FPI_Source_FPI_PFI_Lib_h__Script_FPI_3594264762(TEXT("/Script/FPI"),
	Z_CompiledInDeferFile_FID_FPI_Source_FPI_PFI_Lib_h__Script_FPI_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FPI_Source_FPI_PFI_Lib_h__Script_FPI_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS

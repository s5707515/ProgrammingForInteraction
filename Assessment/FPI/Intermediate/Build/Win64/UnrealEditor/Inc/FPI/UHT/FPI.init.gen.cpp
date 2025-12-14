// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFPI_init() {}
	FPI_API UFunction* Z_Construct_UDelegateFunction_FPI_BulletCountUpdatedDelegate__DelegateSignature();
	FPI_API UFunction* Z_Construct_UDelegateFunction_FPI_DamagedDelegate__DelegateSignature();
	FPI_API UFunction* Z_Construct_UDelegateFunction_FPI_PawnDeathDelegate__DelegateSignature();
	FPI_API UFunction* Z_Construct_UDelegateFunction_FPI_SprintStateChangedDelegate__DelegateSignature();
	FPI_API UFunction* Z_Construct_UDelegateFunction_FPI_UpdateSprintMeterDelegate__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_FPI;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_FPI()
	{
		if (!Z_Registration_Info_UPackage__Script_FPI.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_FPI_BulletCountUpdatedDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_FPI_DamagedDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_FPI_PawnDeathDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_FPI_SprintStateChangedDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_FPI_UpdateSprintMeterDelegate__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/FPI",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x437355B1,
				0xC619AFC1,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_FPI.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_FPI.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_FPI(Z_Construct_UPackage__Script_FPI, TEXT("/Script/FPI"), Z_Registration_Info_UPackage__Script_FPI, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x437355B1, 0xC619AFC1));
PRAGMA_ENABLE_DEPRECATION_WARNINGS

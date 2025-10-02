// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLab2_init() {}
	LAB2_API UFunction* Z_Construct_UDelegateFunction_Lab2_BulletCountUpdatedDelegate__DelegateSignature();
	LAB2_API UFunction* Z_Construct_UDelegateFunction_Lab2_DamagedDelegate__DelegateSignature();
	LAB2_API UFunction* Z_Construct_UDelegateFunction_Lab2_PawnDeathDelegate__DelegateSignature();
	LAB2_API UFunction* Z_Construct_UDelegateFunction_Lab2_SprintStateChangedDelegate__DelegateSignature();
	LAB2_API UFunction* Z_Construct_UDelegateFunction_Lab2_UpdateSprintMeterDelegate__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Lab2;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Lab2()
	{
		if (!Z_Registration_Info_UPackage__Script_Lab2.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_Lab2_BulletCountUpdatedDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_Lab2_DamagedDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_Lab2_PawnDeathDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_Lab2_SprintStateChangedDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_Lab2_UpdateSprintMeterDelegate__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Lab2",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x5429CAAF,
				0xDEEC979F,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Lab2.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Lab2.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Lab2(Z_Construct_UPackage__Script_Lab2, TEXT("/Script/Lab2"), Z_Registration_Info_UPackage__Script_Lab2, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x5429CAAF, 0xDEEC979F));
PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUE5_Week6_init() {}
	UE5_WEEK6_API UFunction* Z_Construct_UDelegateFunction_UE5_Week6_OnPickUp__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_UE5_Week6;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_UE5_Week6()
	{
		if (!Z_Registration_Info_UPackage__Script_UE5_Week6.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_UE5_Week6_OnPickUp__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/UE5_Week6",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x78216DF3,
				0xE3E30D27,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_UE5_Week6.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_UE5_Week6.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_UE5_Week6(Z_Construct_UPackage__Script_UE5_Week6, TEXT("/Script/UE5_Week6"), Z_Registration_Info_UPackage__Script_UE5_Week6, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x78216DF3, 0xE3E30D27));
PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE5_Week6/UE5_Week6PlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUE5_Week6PlayerController() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
UE5_WEEK6_API UClass* Z_Construct_UClass_AUE5_Week6PlayerController();
UE5_WEEK6_API UClass* Z_Construct_UClass_AUE5_Week6PlayerController_NoRegister();
UPackage* Z_Construct_UPackage__Script_UE5_Week6();
// End Cross Module References

// Begin Class AUE5_Week6PlayerController
void AUE5_Week6PlayerController::StaticRegisterNativesAUE5_Week6PlayerController()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AUE5_Week6PlayerController);
UClass* Z_Construct_UClass_AUE5_Week6PlayerController_NoRegister()
{
	return AUE5_Week6PlayerController::StaticClass();
}
struct Z_Construct_UClass_AUE5_Week6PlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "UE5_Week6PlayerController.h" },
		{ "ModuleRelativePath", "UE5_Week6PlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputMappingContext_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Input Mapping Context to be used for player input */" },
#endif
		{ "ModuleRelativePath", "UE5_Week6PlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input Mapping Context to be used for player input" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputMappingContext;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUE5_Week6PlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUE5_Week6PlayerController_Statics::NewProp_InputMappingContext = { "InputMappingContext", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AUE5_Week6PlayerController, InputMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputMappingContext_MetaData), NewProp_InputMappingContext_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AUE5_Week6PlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUE5_Week6PlayerController_Statics::NewProp_InputMappingContext,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AUE5_Week6PlayerController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AUE5_Week6PlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_UE5_Week6,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AUE5_Week6PlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AUE5_Week6PlayerController_Statics::ClassParams = {
	&AUE5_Week6PlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AUE5_Week6PlayerController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AUE5_Week6PlayerController_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AUE5_Week6PlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_AUE5_Week6PlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AUE5_Week6PlayerController()
{
	if (!Z_Registration_Info_UClass_AUE5_Week6PlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AUE5_Week6PlayerController.OuterSingleton, Z_Construct_UClass_AUE5_Week6PlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AUE5_Week6PlayerController.OuterSingleton;
}
template<> UE5_WEEK6_API UClass* StaticClass<AUE5_Week6PlayerController>()
{
	return AUE5_Week6PlayerController::StaticClass();
}
AUE5_Week6PlayerController::AUE5_Week6PlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AUE5_Week6PlayerController);
AUE5_Week6PlayerController::~AUE5_Week6PlayerController() {}
// End Class AUE5_Week6PlayerController

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_Week6_Source_UE5_Week6_UE5_Week6PlayerController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AUE5_Week6PlayerController, AUE5_Week6PlayerController::StaticClass, TEXT("AUE5_Week6PlayerController"), &Z_Registration_Info_UClass_AUE5_Week6PlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AUE5_Week6PlayerController), 464340917U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_Week6_Source_UE5_Week6_UE5_Week6PlayerController_h_845989812(TEXT("/Script/UE5_Week6"),
	Z_CompiledInDeferFile_FID_UE5_Week6_Source_UE5_Week6_UE5_Week6PlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_Week6_Source_UE5_Week6_UE5_Week6PlayerController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

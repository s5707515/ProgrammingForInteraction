// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PFIPlayerController.h"

#ifdef PFI_PFIPlayerController_generated_h
#error "PFIPlayerController.generated.h already included, missing '#pragma once' in PFIPlayerController.h"
#endif
#define PFI_PFIPlayerController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class APFIPlayerController *****************************************************
PFI_API UClass* Z_Construct_UClass_APFIPlayerController_NoRegister();

#define FID_Week_2_Project_Source_PFI_PFIPlayerController_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPFIPlayerController(); \
	friend struct Z_Construct_UClass_APFIPlayerController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PFI_API UClass* Z_Construct_UClass_APFIPlayerController_NoRegister(); \
public: \
	DECLARE_CLASS2(APFIPlayerController, APlayerController, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/PFI"), Z_Construct_UClass_APFIPlayerController_NoRegister) \
	DECLARE_SERIALIZER(APFIPlayerController)


#define FID_Week_2_Project_Source_PFI_PFIPlayerController_h_20_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	APFIPlayerController(APFIPlayerController&&) = delete; \
	APFIPlayerController(const APFIPlayerController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APFIPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APFIPlayerController); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(APFIPlayerController) \
	NO_API virtual ~APFIPlayerController();


#define FID_Week_2_Project_Source_PFI_PFIPlayerController_h_17_PROLOG
#define FID_Week_2_Project_Source_PFI_PFIPlayerController_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Week_2_Project_Source_PFI_PFIPlayerController_h_20_INCLASS_NO_PURE_DECLS \
	FID_Week_2_Project_Source_PFI_PFIPlayerController_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class APFIPlayerController;

// ********** End Class APFIPlayerController *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Week_2_Project_Source_PFI_PFIPlayerController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS

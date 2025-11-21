// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FPIPlayerController.h"

#ifdef FPI_FPIPlayerController_generated_h
#error "FPIPlayerController.generated.h already included, missing '#pragma once' in FPIPlayerController.h"
#endif
#define FPI_FPIPlayerController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AFPIPlayerController *****************************************************
FPI_API UClass* Z_Construct_UClass_AFPIPlayerController_NoRegister();

#define FID_FPI_Source_FPI_FPIPlayerController_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFPIPlayerController(); \
	friend struct Z_Construct_UClass_AFPIPlayerController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend FPI_API UClass* Z_Construct_UClass_AFPIPlayerController_NoRegister(); \
public: \
	DECLARE_CLASS2(AFPIPlayerController, APlayerController, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPI"), Z_Construct_UClass_AFPIPlayerController_NoRegister) \
	DECLARE_SERIALIZER(AFPIPlayerController)


#define FID_FPI_Source_FPI_FPIPlayerController_h_20_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AFPIPlayerController(AFPIPlayerController&&) = delete; \
	AFPIPlayerController(const AFPIPlayerController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPIPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPIPlayerController); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(AFPIPlayerController) \
	NO_API virtual ~AFPIPlayerController();


#define FID_FPI_Source_FPI_FPIPlayerController_h_17_PROLOG
#define FID_FPI_Source_FPI_FPIPlayerController_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_FPI_Source_FPI_FPIPlayerController_h_20_INCLASS_NO_PURE_DECLS \
	FID_FPI_Source_FPI_FPIPlayerController_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AFPIPlayerController;

// ********** End Class AFPIPlayerController *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_FPI_Source_FPI_FPIPlayerController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS

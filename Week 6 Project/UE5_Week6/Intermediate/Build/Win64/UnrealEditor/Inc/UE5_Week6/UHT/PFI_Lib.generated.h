// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PFI_Lib.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UE5_WEEK6_PFI_Lib_generated_h
#error "PFI_Lib.generated.h already included, missing '#pragma once' in PFI_Lib.h"
#endif
#define UE5_WEEK6_PFI_Lib_generated_h

#define FID_UE5_Week6_Source_UE5_Week6_PFI_Lib_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSaveArrayText);


#define FID_UE5_Week6_Source_UE5_Week6_PFI_Lib_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPFI_Lib(); \
	friend struct Z_Construct_UClass_UPFI_Lib_Statics; \
public: \
	DECLARE_CLASS(UPFI_Lib, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UE5_Week6"), NO_API) \
	DECLARE_SERIALIZER(UPFI_Lib)


#define FID_UE5_Week6_Source_UE5_Week6_PFI_Lib_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPFI_Lib(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPFI_Lib(UPFI_Lib&&); \
	UPFI_Lib(const UPFI_Lib&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPFI_Lib); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPFI_Lib); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPFI_Lib) \
	NO_API virtual ~UPFI_Lib();


#define FID_UE5_Week6_Source_UE5_Week6_PFI_Lib_h_12_PROLOG
#define FID_UE5_Week6_Source_UE5_Week6_PFI_Lib_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5_Week6_Source_UE5_Week6_PFI_Lib_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE5_Week6_Source_UE5_Week6_PFI_Lib_h_15_INCLASS_NO_PURE_DECLS \
	FID_UE5_Week6_Source_UE5_Week6_PFI_Lib_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UE5_WEEK6_API UClass* StaticClass<class UPFI_Lib>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5_Week6_Source_UE5_Week6_PFI_Lib_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "KeyUI.h"

#ifdef FPI_KeyUI_generated_h
#error "KeyUI.generated.h already included, missing '#pragma once' in KeyUI.h"
#endif
#define FPI_KeyUI_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UKeyUI *******************************************************************
#define FID_FPI_Source_FPI_KeyUI_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetUIKeyCount);


FPI_API UClass* Z_Construct_UClass_UKeyUI_NoRegister();

#define FID_FPI_Source_FPI_KeyUI_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUKeyUI(); \
	friend struct Z_Construct_UClass_UKeyUI_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend FPI_API UClass* Z_Construct_UClass_UKeyUI_NoRegister(); \
public: \
	DECLARE_CLASS2(UKeyUI, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FPI"), Z_Construct_UClass_UKeyUI_NoRegister) \
	DECLARE_SERIALIZER(UKeyUI)


#define FID_FPI_Source_FPI_KeyUI_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UKeyUI(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UKeyUI(UKeyUI&&) = delete; \
	UKeyUI(const UKeyUI&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UKeyUI); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UKeyUI); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UKeyUI) \
	NO_API virtual ~UKeyUI();


#define FID_FPI_Source_FPI_KeyUI_h_16_PROLOG
#define FID_FPI_Source_FPI_KeyUI_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_FPI_Source_FPI_KeyUI_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_FPI_Source_FPI_KeyUI_h_19_INCLASS_NO_PURE_DECLS \
	FID_FPI_Source_FPI_KeyUI_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UKeyUI;

// ********** End Class UKeyUI *********************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_FPI_Source_FPI_KeyUI_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS

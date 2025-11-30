// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "KeypadWidget.h"

#ifdef FPI_KeypadWidget_generated_h
#error "KeypadWidget.generated.h already included, missing '#pragma once' in KeypadWidget.h"
#endif
#define FPI_KeypadWidget_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UKeypadWidget ************************************************************
#define FID_FPI_Source_FPI_KeypadWidget_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execClearPasscode); \
	DECLARE_FUNCTION(execCheckPasscode); \
	DECLARE_FUNCTION(execTextBoxBack); \
	DECLARE_FUNCTION(execAddToTextBox);


FPI_API UClass* Z_Construct_UClass_UKeypadWidget_NoRegister();

#define FID_FPI_Source_FPI_KeypadWidget_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUKeypadWidget(); \
	friend struct Z_Construct_UClass_UKeypadWidget_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend FPI_API UClass* Z_Construct_UClass_UKeypadWidget_NoRegister(); \
public: \
	DECLARE_CLASS2(UKeypadWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FPI"), Z_Construct_UClass_UKeypadWidget_NoRegister) \
	DECLARE_SERIALIZER(UKeypadWidget)


#define FID_FPI_Source_FPI_KeypadWidget_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UKeypadWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UKeypadWidget(UKeypadWidget&&) = delete; \
	UKeypadWidget(const UKeypadWidget&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UKeypadWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UKeypadWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UKeypadWidget) \
	NO_API virtual ~UKeypadWidget();


#define FID_FPI_Source_FPI_KeypadWidget_h_12_PROLOG
#define FID_FPI_Source_FPI_KeypadWidget_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_FPI_Source_FPI_KeypadWidget_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_FPI_Source_FPI_KeypadWidget_h_15_INCLASS_NO_PURE_DECLS \
	FID_FPI_Source_FPI_KeypadWidget_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UKeypadWidget;

// ********** End Class UKeypadWidget **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_FPI_Source_FPI_KeypadWidget_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DoorButton.h"

#ifdef FPI_DoorButton_generated_h
#error "DoorButton.generated.h already included, missing '#pragma once' in DoorButton.h"
#endif
#define FPI_DoorButton_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ADoorButton **************************************************************
FPI_API UClass* Z_Construct_UClass_ADoorButton_NoRegister();

#define FID_FPI_Source_FPI_DoorButton_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADoorButton(); \
	friend struct Z_Construct_UClass_ADoorButton_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend FPI_API UClass* Z_Construct_UClass_ADoorButton_NoRegister(); \
public: \
	DECLARE_CLASS2(ADoorButton, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPI"), Z_Construct_UClass_ADoorButton_NoRegister) \
	DECLARE_SERIALIZER(ADoorButton)


#define FID_FPI_Source_FPI_DoorButton_h_12_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ADoorButton(ADoorButton&&) = delete; \
	ADoorButton(const ADoorButton&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADoorButton); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADoorButton); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADoorButton) \
	NO_API virtual ~ADoorButton();


#define FID_FPI_Source_FPI_DoorButton_h_9_PROLOG
#define FID_FPI_Source_FPI_DoorButton_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_FPI_Source_FPI_DoorButton_h_12_INCLASS_NO_PURE_DECLS \
	FID_FPI_Source_FPI_DoorButton_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ADoorButton;

// ********** End Class ADoorButton ****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_FPI_Source_FPI_DoorButton_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS

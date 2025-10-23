// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameTimer.h"

#ifdef PFI_GameTimer_generated_h
#error "GameTimer.generated.h already included, missing '#pragma once' in GameTimer.h"
#endif
#define PFI_GameTimer_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AGameTimer ***************************************************************
PFI_API UClass* Z_Construct_UClass_AGameTimer_NoRegister();

#define FID_Week_2_Project_Source_PFI_GameTimer_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGameTimer(); \
	friend struct Z_Construct_UClass_AGameTimer_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PFI_API UClass* Z_Construct_UClass_AGameTimer_NoRegister(); \
public: \
	DECLARE_CLASS2(AGameTimer, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PFI"), Z_Construct_UClass_AGameTimer_NoRegister) \
	DECLARE_SERIALIZER(AGameTimer)


#define FID_Week_2_Project_Source_PFI_GameTimer_h_12_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AGameTimer(AGameTimer&&) = delete; \
	AGameTimer(const AGameTimer&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGameTimer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGameTimer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGameTimer) \
	NO_API virtual ~AGameTimer();


#define FID_Week_2_Project_Source_PFI_GameTimer_h_9_PROLOG
#define FID_Week_2_Project_Source_PFI_GameTimer_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Week_2_Project_Source_PFI_GameTimer_h_12_INCLASS_NO_PURE_DECLS \
	FID_Week_2_Project_Source_PFI_GameTimer_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AGameTimer;

// ********** End Class AGameTimer *****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Week_2_Project_Source_PFI_GameTimer_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS

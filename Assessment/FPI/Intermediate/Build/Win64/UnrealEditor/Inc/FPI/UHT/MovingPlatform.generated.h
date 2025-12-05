// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MovingPlatform.h"

#ifdef FPI_MovingPlatform_generated_h
#error "MovingPlatform.generated.h already included, missing '#pragma once' in MovingPlatform.h"
#endif
#define FPI_MovingPlatform_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AMovingPlatform **********************************************************
FPI_API UClass* Z_Construct_UClass_AMovingPlatform_NoRegister();

#define FID_FPI_Source_FPI_MovingPlatform_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMovingPlatform(); \
	friend struct Z_Construct_UClass_AMovingPlatform_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend FPI_API UClass* Z_Construct_UClass_AMovingPlatform_NoRegister(); \
public: \
	DECLARE_CLASS2(AMovingPlatform, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPI"), Z_Construct_UClass_AMovingPlatform_NoRegister) \
	DECLARE_SERIALIZER(AMovingPlatform)


#define FID_FPI_Source_FPI_MovingPlatform_h_23_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AMovingPlatform(AMovingPlatform&&) = delete; \
	AMovingPlatform(const AMovingPlatform&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMovingPlatform); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMovingPlatform); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMovingPlatform) \
	NO_API virtual ~AMovingPlatform();


#define FID_FPI_Source_FPI_MovingPlatform_h_20_PROLOG
#define FID_FPI_Source_FPI_MovingPlatform_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_FPI_Source_FPI_MovingPlatform_h_23_INCLASS_NO_PURE_DECLS \
	FID_FPI_Source_FPI_MovingPlatform_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AMovingPlatform;

// ********** End Class AMovingPlatform ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_FPI_Source_FPI_MovingPlatform_h

// ********** Begin Enum EPlatformDirection ********************************************************
#define FOREACH_ENUM_EPLATFORMDIRECTION(op) \
	op(EPlatformDirection::Forward) \
	op(EPlatformDirection::Backward) \
	op(EPlatformDirection::Left) \
	op(EPlatformDirection::Right) \
	op(EPlatformDirection::Up) \
	op(EPlatformDirection::Down) 

enum class EPlatformDirection : uint8;
template<> struct TIsUEnumClass<EPlatformDirection> { enum { Value = true }; };
template<> FPI_API UEnum* StaticEnum<EPlatformDirection>();
// ********** End Enum EPlatformDirection **********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS

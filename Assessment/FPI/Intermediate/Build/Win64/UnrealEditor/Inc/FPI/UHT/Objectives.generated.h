// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Objectives.h"

#ifdef FPI_Objectives_generated_h
#error "Objectives.generated.h already included, missing '#pragma once' in Objectives.h"
#endif
#define FPI_Objectives_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

enum class EObjectives : uint8;

// ********** Begin Class UObjectives **************************************************************
#define FID_FPI_Source_FPI_Objectives_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execChangeObjective);


FPI_API UClass* Z_Construct_UClass_UObjectives_NoRegister();

#define FID_FPI_Source_FPI_Objectives_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUObjectives(); \
	friend struct Z_Construct_UClass_UObjectives_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend FPI_API UClass* Z_Construct_UClass_UObjectives_NoRegister(); \
public: \
	DECLARE_CLASS2(UObjectives, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FPI"), Z_Construct_UClass_UObjectives_NoRegister) \
	DECLARE_SERIALIZER(UObjectives)


#define FID_FPI_Source_FPI_Objectives_h_28_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UObjectives(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UObjectives(UObjectives&&) = delete; \
	UObjectives(const UObjectives&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UObjectives); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UObjectives); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UObjectives) \
	NO_API virtual ~UObjectives();


#define FID_FPI_Source_FPI_Objectives_h_25_PROLOG
#define FID_FPI_Source_FPI_Objectives_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_FPI_Source_FPI_Objectives_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_FPI_Source_FPI_Objectives_h_28_INCLASS_NO_PURE_DECLS \
	FID_FPI_Source_FPI_Objectives_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UObjectives;

// ********** End Class UObjectives ****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_FPI_Source_FPI_Objectives_h

// ********** Begin Enum EObjectives ***************************************************************
#define FOREACH_ENUM_EOBJECTIVES(op) \
	op(EObjectives::OpenDoor1) \
	op(EObjectives::OpenDoor2) \
	op(EObjectives::FindCodeForDoor) \
	op(EObjectives::ReachDoor3) \
	op(EObjectives::FindAKeyForDoor) \
	op(EObjectives::OpenDoor3) \
	op(EObjectives::YouWin) 

enum class EObjectives : uint8;
template<> struct TIsUEnumClass<EObjectives> { enum { Value = true }; };
template<> FPI_API UEnum* StaticEnum<EObjectives>();
// ********** End Enum EObjectives *****************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS

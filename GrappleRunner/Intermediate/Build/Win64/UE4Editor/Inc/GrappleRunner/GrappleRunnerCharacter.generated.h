// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GRAPPLERUNNER_GrappleRunnerCharacter_generated_h
#error "GrappleRunnerCharacter.generated.h already included, missing '#pragma once' in GrappleRunnerCharacter.h"
#endif
#define GRAPPLERUNNER_GrappleRunnerCharacter_generated_h

#define GrappleRunner_Source_GrappleRunner_GrappleRunnerCharacter_h_12_SPARSE_DATA
#define GrappleRunner_Source_GrappleRunner_GrappleRunnerCharacter_h_12_RPC_WRAPPERS
#define GrappleRunner_Source_GrappleRunner_GrappleRunnerCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define GrappleRunner_Source_GrappleRunner_GrappleRunnerCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGrappleRunnerCharacter(); \
	friend struct Z_Construct_UClass_AGrappleRunnerCharacter_Statics; \
public: \
	DECLARE_CLASS(AGrappleRunnerCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GrappleRunner"), NO_API) \
	DECLARE_SERIALIZER(AGrappleRunnerCharacter)


#define GrappleRunner_Source_GrappleRunner_GrappleRunnerCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAGrappleRunnerCharacter(); \
	friend struct Z_Construct_UClass_AGrappleRunnerCharacter_Statics; \
public: \
	DECLARE_CLASS(AGrappleRunnerCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GrappleRunner"), NO_API) \
	DECLARE_SERIALIZER(AGrappleRunnerCharacter)


#define GrappleRunner_Source_GrappleRunner_GrappleRunnerCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGrappleRunnerCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGrappleRunnerCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGrappleRunnerCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGrappleRunnerCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGrappleRunnerCharacter(AGrappleRunnerCharacter&&); \
	NO_API AGrappleRunnerCharacter(const AGrappleRunnerCharacter&); \
public:


#define GrappleRunner_Source_GrappleRunner_GrappleRunnerCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGrappleRunnerCharacter(AGrappleRunnerCharacter&&); \
	NO_API AGrappleRunnerCharacter(const AGrappleRunnerCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGrappleRunnerCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGrappleRunnerCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGrappleRunnerCharacter)


#define GrappleRunner_Source_GrappleRunner_GrappleRunnerCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(AGrappleRunnerCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(AGrappleRunnerCharacter, FollowCamera); }


#define GrappleRunner_Source_GrappleRunner_GrappleRunnerCharacter_h_9_PROLOG
#define GrappleRunner_Source_GrappleRunner_GrappleRunnerCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GrappleRunner_Source_GrappleRunner_GrappleRunnerCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	GrappleRunner_Source_GrappleRunner_GrappleRunnerCharacter_h_12_SPARSE_DATA \
	GrappleRunner_Source_GrappleRunner_GrappleRunnerCharacter_h_12_RPC_WRAPPERS \
	GrappleRunner_Source_GrappleRunner_GrappleRunnerCharacter_h_12_INCLASS \
	GrappleRunner_Source_GrappleRunner_GrappleRunnerCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GrappleRunner_Source_GrappleRunner_GrappleRunnerCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GrappleRunner_Source_GrappleRunner_GrappleRunnerCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	GrappleRunner_Source_GrappleRunner_GrappleRunnerCharacter_h_12_SPARSE_DATA \
	GrappleRunner_Source_GrappleRunner_GrappleRunnerCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	GrappleRunner_Source_GrappleRunner_GrappleRunnerCharacter_h_12_INCLASS_NO_PURE_DECLS \
	GrappleRunner_Source_GrappleRunner_GrappleRunnerCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GRAPPLERUNNER_API UClass* StaticClass<class AGrappleRunnerCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GrappleRunner_Source_GrappleRunner_GrappleRunnerCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

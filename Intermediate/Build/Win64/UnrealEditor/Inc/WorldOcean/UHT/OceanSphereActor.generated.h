// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OceanSphereActor.h"

#ifdef WORLDOCEAN_OceanSphereActor_generated_h
#error "OceanSphereActor.generated.h already included, missing '#pragma once' in OceanSphereActor.h"
#endif
#define WORLDOCEAN_OceanSphereActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AOceanSphereActor ********************************************************
struct Z_Construct_UClass_AOceanSphereActor_Statics;
WORLDOCEAN_API UClass* Z_Construct_UClass_AOceanSphereActor_NoRegister();

#define FID_Projects_vxl_Plugins_WorldOcean_Source_WorldOcean_Public_OceanSphereActor_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAOceanSphereActor(); \
	friend struct ::Z_Construct_UClass_AOceanSphereActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WORLDOCEAN_API UClass* ::Z_Construct_UClass_AOceanSphereActor_NoRegister(); \
public: \
	DECLARE_CLASS2(AOceanSphereActor, ARealtimeMeshActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/WorldOcean"), Z_Construct_UClass_AOceanSphereActor_NoRegister) \
	DECLARE_SERIALIZER(AOceanSphereActor)


#define FID_Projects_vxl_Plugins_WorldOcean_Source_WorldOcean_Public_OceanSphereActor_h_14_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AOceanSphereActor(AOceanSphereActor&&) = delete; \
	AOceanSphereActor(const AOceanSphereActor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AOceanSphereActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AOceanSphereActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AOceanSphereActor) \
	NO_API virtual ~AOceanSphereActor();


#define FID_Projects_vxl_Plugins_WorldOcean_Source_WorldOcean_Public_OceanSphereActor_h_11_PROLOG
#define FID_Projects_vxl_Plugins_WorldOcean_Source_WorldOcean_Public_OceanSphereActor_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_vxl_Plugins_WorldOcean_Source_WorldOcean_Public_OceanSphereActor_h_14_INCLASS_NO_PURE_DECLS \
	FID_Projects_vxl_Plugins_WorldOcean_Source_WorldOcean_Public_OceanSphereActor_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AOceanSphereActor;

// ********** End Class AOceanSphereActor **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Projects_vxl_Plugins_WorldOcean_Source_WorldOcean_Public_OceanSphereActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS

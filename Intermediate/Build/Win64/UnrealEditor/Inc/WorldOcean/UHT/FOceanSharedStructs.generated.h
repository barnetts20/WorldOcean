// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FOceanSharedStructs.h"

#ifdef WORLDOCEAN_FOceanSharedStructs_generated_h
#error "FOceanSharedStructs.generated.h already included, missing '#pragma once' in FOceanSharedStructs.h"
#endif
#define WORLDOCEAN_FOceanSharedStructs_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Projects_vxl_Plugins_WorldOcean_Source_WorldOcean_Public_FOceanSharedStructs_h

// ********** Begin Enum EdgeOrientation ***********************************************************
#define FOREACH_ENUM_EDGEORIENTATION(op) \
	op(EdgeOrientation::LEFT) \
	op(EdgeOrientation::RIGHT) \
	op(EdgeOrientation::UP) \
	op(EdgeOrientation::DOWN) 

enum class EdgeOrientation : uint8;
template<> struct TIsUEnumClass<EdgeOrientation> { enum { Value = true }; };
template<> WORLDOCEAN_NON_ATTRIBUTED_API UEnum* StaticEnum<EdgeOrientation>();
// ********** End Enum EdgeOrientation *************************************************************

// ********** Begin Enum EFaceDirection ************************************************************
#define FOREACH_ENUM_EFACEDIRECTION(op) \
	op(EFaceDirection::X_POS) \
	op(EFaceDirection::X_NEG) \
	op(EFaceDirection::Y_POS) \
	op(EFaceDirection::Y_NEG) \
	op(EFaceDirection::Z_POS) \
	op(EFaceDirection::Z_NEG) 

enum class EFaceDirection : uint8;
template<> struct TIsUEnumClass<EFaceDirection> { enum { Value = true }; };
template<> WORLDOCEAN_NON_ATTRIBUTED_API UEnum* StaticEnum<EFaceDirection>();
// ********** End Enum EFaceDirection **************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS

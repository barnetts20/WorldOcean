// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FOceanSharedStructs.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeFOceanSharedStructs() {}

// ********** Begin Cross Module References ********************************************************
UPackage* Z_Construct_UPackage__Script_WorldOcean();
WORLDOCEAN_API UEnum* Z_Construct_UEnum_WorldOcean_EdgeOrientation();
WORLDOCEAN_API UEnum* Z_Construct_UEnum_WorldOcean_EFaceDirection();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EdgeOrientation ***********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EdgeOrientation;
static UEnum* EdgeOrientation_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EdgeOrientation.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EdgeOrientation.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_WorldOcean_EdgeOrientation, (UObject*)Z_Construct_UPackage__Script_WorldOcean(), TEXT("EdgeOrientation"));
	}
	return Z_Registration_Info_UEnum_EdgeOrientation.OuterSingleton;
}
template<> WORLDOCEAN_NON_ATTRIBUTED_API UEnum* StaticEnum<EdgeOrientation>()
{
	return EdgeOrientation_StaticEnum();
}
struct Z_Construct_UEnum_WorldOcean_EdgeOrientation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ---------------------------------------------------------------------------\n// Edge / face orientation enums\n// ---------------------------------------------------------------------------\n" },
#endif
		{ "DOWN.Name", "EdgeOrientation::DOWN" },
		{ "LEFT.Name", "EdgeOrientation::LEFT" },
		{ "ModuleRelativePath", "Public/FOceanSharedStructs.h" },
		{ "RIGHT.Name", "EdgeOrientation::RIGHT" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Edge / face orientation enums" },
#endif
		{ "UP.Name", "EdgeOrientation::UP" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EdgeOrientation::LEFT", (int64)EdgeOrientation::LEFT },
		{ "EdgeOrientation::RIGHT", (int64)EdgeOrientation::RIGHT },
		{ "EdgeOrientation::UP", (int64)EdgeOrientation::UP },
		{ "EdgeOrientation::DOWN", (int64)EdgeOrientation::DOWN },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_WorldOcean_EdgeOrientation_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_WorldOcean_EdgeOrientation_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_WorldOcean,
	nullptr,
	"EdgeOrientation",
	"EdgeOrientation",
	Z_Construct_UEnum_WorldOcean_EdgeOrientation_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_WorldOcean_EdgeOrientation_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_WorldOcean_EdgeOrientation_Statics::Enum_MetaDataParams), Z_Construct_UEnum_WorldOcean_EdgeOrientation_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_WorldOcean_EdgeOrientation()
{
	if (!Z_Registration_Info_UEnum_EdgeOrientation.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EdgeOrientation.InnerSingleton, Z_Construct_UEnum_WorldOcean_EdgeOrientation_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EdgeOrientation.InnerSingleton;
}
// ********** End Enum EdgeOrientation *************************************************************

// ********** Begin Enum EFaceDirection ************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFaceDirection;
static UEnum* EFaceDirection_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EFaceDirection.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EFaceDirection.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_WorldOcean_EFaceDirection, (UObject*)Z_Construct_UPackage__Script_WorldOcean(), TEXT("EFaceDirection"));
	}
	return Z_Registration_Info_UEnum_EFaceDirection.OuterSingleton;
}
template<> WORLDOCEAN_NON_ATTRIBUTED_API UEnum* StaticEnum<EFaceDirection>()
{
	return EFaceDirection_StaticEnum();
}
struct Z_Construct_UEnum_WorldOcean_EFaceDirection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/FOceanSharedStructs.h" },
		{ "X_NEG.DisplayName", "X-" },
		{ "X_NEG.Name", "EFaceDirection::X_NEG" },
		{ "X_POS.DisplayName", "X+" },
		{ "X_POS.Name", "EFaceDirection::X_POS" },
		{ "Y_NEG.DisplayName", "Y-" },
		{ "Y_NEG.Name", "EFaceDirection::Y_NEG" },
		{ "Y_POS.DisplayName", "Y+" },
		{ "Y_POS.Name", "EFaceDirection::Y_POS" },
		{ "Z_NEG.DisplayName", "Z-" },
		{ "Z_NEG.Name", "EFaceDirection::Z_NEG" },
		{ "Z_POS.DisplayName", "Z+" },
		{ "Z_POS.Name", "EFaceDirection::Z_POS" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EFaceDirection::X_POS", (int64)EFaceDirection::X_POS },
		{ "EFaceDirection::X_NEG", (int64)EFaceDirection::X_NEG },
		{ "EFaceDirection::Y_POS", (int64)EFaceDirection::Y_POS },
		{ "EFaceDirection::Y_NEG", (int64)EFaceDirection::Y_NEG },
		{ "EFaceDirection::Z_POS", (int64)EFaceDirection::Z_POS },
		{ "EFaceDirection::Z_NEG", (int64)EFaceDirection::Z_NEG },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_WorldOcean_EFaceDirection_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_WorldOcean_EFaceDirection_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_WorldOcean,
	nullptr,
	"EFaceDirection",
	"EFaceDirection",
	Z_Construct_UEnum_WorldOcean_EFaceDirection_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_WorldOcean_EFaceDirection_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_WorldOcean_EFaceDirection_Statics::Enum_MetaDataParams), Z_Construct_UEnum_WorldOcean_EFaceDirection_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_WorldOcean_EFaceDirection()
{
	if (!Z_Registration_Info_UEnum_EFaceDirection.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFaceDirection.InnerSingleton, Z_Construct_UEnum_WorldOcean_EFaceDirection_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EFaceDirection.InnerSingleton;
}
// ********** End Enum EFaceDirection **************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Projects_vxl_Plugins_WorldOcean_Source_WorldOcean_Public_FOceanSharedStructs_h__Script_WorldOcean_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EdgeOrientation_StaticEnum, TEXT("EdgeOrientation"), &Z_Registration_Info_UEnum_EdgeOrientation, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1597127396U) },
		{ EFaceDirection_StaticEnum, TEXT("EFaceDirection"), &Z_Registration_Info_UEnum_EFaceDirection, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1184740806U) },
	};
}; // Z_CompiledInDeferFile_FID_Projects_vxl_Plugins_WorldOcean_Source_WorldOcean_Public_FOceanSharedStructs_h__Script_WorldOcean_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_vxl_Plugins_WorldOcean_Source_WorldOcean_Public_FOceanSharedStructs_h__Script_WorldOcean_1568705251{
	TEXT("/Script/WorldOcean"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Projects_vxl_Plugins_WorldOcean_Source_WorldOcean_Public_FOceanSharedStructs_h__Script_WorldOcean_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_vxl_Plugins_WorldOcean_Source_WorldOcean_Public_FOceanSharedStructs_h__Script_WorldOcean_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OceanSphereActor.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeOceanSphereActor() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
REALTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_ARealtimeMeshActor();
UPackage* Z_Construct_UPackage__Script_WorldOcean();
WORLDOCEAN_API UClass* Z_Construct_UClass_AOceanSphereActor();
WORLDOCEAN_API UClass* Z_Construct_UClass_AOceanSphereActor_NoRegister();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AOceanSphereActor ********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_AOceanSphereActor;
UClass* AOceanSphereActor::GetPrivateStaticClass()
{
	using TClass = AOceanSphereActor;
	if (!Z_Registration_Info_UClass_AOceanSphereActor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("OceanSphereActor"),
			Z_Registration_Info_UClass_AOceanSphereActor.InnerSingleton,
			StaticRegisterNativesAOceanSphereActor,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_AOceanSphereActor.InnerSingleton;
}
UClass* Z_Construct_UClass_AOceanSphereActor_NoRegister()
{
	return AOceanSphereActor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AOceanSphereActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "OceanSphereActor.h" },
		{ "ModuleRelativePath", "Public/OceanSphereActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OceanMaterial_MetaData[] = {
		{ "Category", "Ocean|Material" },
		{ "ModuleRelativePath", "Public/OceanSphereActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OceanRadius_MetaData[] = {
		{ "Category", "Ocean|Shape" },
		{ "ClampMin", "1.0" },
		{ "ModuleRelativePath", "Public/OceanSphereActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FaceResolution_MetaData[] = {
		{ "Category", "Ocean|Mesh" },
		{ "ClampMin", "3" },
		{ "ModuleRelativePath", "Public/OceanSphereActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChunkDepth_MetaData[] = {
		{ "Category", "Ocean|LOD" },
		{ "ModuleRelativePath", "Public/OceanSphereActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinDepth_MetaData[] = {
		{ "Category", "Ocean|LOD" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Must be >= ChunkDepth\n" },
#endif
		{ "ModuleRelativePath", "Public/OceanSphereActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Must be >= ChunkDepth" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxDepth_MetaData[] = {
		{ "Category", "Ocean|LOD" },
		{ "ModuleRelativePath", "Public/OceanSphereActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScreenSpaceThreshold_MetaData[] = {
		{ "Category", "Ocean|LOD" },
		{ "ClampMin", "0.001" },
		{ "ModuleRelativePath", "Public/OceanSphereActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinLodInterval_MetaData[] = {
		{ "Category", "Ocean|LOD" },
		{ "ModuleRelativePath", "Public/OceanSphereActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VelocityLookAheadFactor_MetaData[] = {
		{ "Category", "Ocean|LOD" },
		{ "ModuleRelativePath", "Public/OceanSphereActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTickInEditor_MetaData[] = {
		{ "Category", "Ocean|LOD" },
		{ "ModuleRelativePath", "Public/OceanSphereActor.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class AOceanSphereActor constinit property declarations ************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OceanMaterial;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_OceanRadius;
	static const UECodeGen_Private::FIntPropertyParams NewProp_FaceResolution;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ChunkDepth;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MinDepth;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxDepth;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_ScreenSpaceThreshold;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_MinLodInterval;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_VelocityLookAheadFactor;
	static void NewProp_bTickInEditor_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTickInEditor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class AOceanSphereActor constinit property declarations **************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOceanSphereActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_AOceanSphereActor_Statics

// ********** Begin Class AOceanSphereActor Property Definitions ***********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOceanSphereActor_Statics::NewProp_OceanMaterial = { "OceanMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOceanSphereActor, OceanMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OceanMaterial_MetaData), NewProp_OceanMaterial_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_AOceanSphereActor_Statics::NewProp_OceanRadius = { "OceanRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOceanSphereActor, OceanRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OceanRadius_MetaData), NewProp_OceanRadius_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AOceanSphereActor_Statics::NewProp_FaceResolution = { "FaceResolution", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOceanSphereActor, FaceResolution), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FaceResolution_MetaData), NewProp_FaceResolution_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AOceanSphereActor_Statics::NewProp_ChunkDepth = { "ChunkDepth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOceanSphereActor, ChunkDepth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChunkDepth_MetaData), NewProp_ChunkDepth_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AOceanSphereActor_Statics::NewProp_MinDepth = { "MinDepth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOceanSphereActor, MinDepth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinDepth_MetaData), NewProp_MinDepth_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AOceanSphereActor_Statics::NewProp_MaxDepth = { "MaxDepth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOceanSphereActor, MaxDepth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxDepth_MetaData), NewProp_MaxDepth_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_AOceanSphereActor_Statics::NewProp_ScreenSpaceThreshold = { "ScreenSpaceThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOceanSphereActor, ScreenSpaceThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScreenSpaceThreshold_MetaData), NewProp_ScreenSpaceThreshold_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_AOceanSphereActor_Statics::NewProp_MinLodInterval = { "MinLodInterval", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOceanSphereActor, MinLodInterval), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinLodInterval_MetaData), NewProp_MinLodInterval_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_AOceanSphereActor_Statics::NewProp_VelocityLookAheadFactor = { "VelocityLookAheadFactor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOceanSphereActor, VelocityLookAheadFactor), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VelocityLookAheadFactor_MetaData), NewProp_VelocityLookAheadFactor_MetaData) };
void Z_Construct_UClass_AOceanSphereActor_Statics::NewProp_bTickInEditor_SetBit(void* Obj)
{
	((AOceanSphereActor*)Obj)->bTickInEditor = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AOceanSphereActor_Statics::NewProp_bTickInEditor = { "bTickInEditor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AOceanSphereActor), &Z_Construct_UClass_AOceanSphereActor_Statics::NewProp_bTickInEditor_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTickInEditor_MetaData), NewProp_bTickInEditor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AOceanSphereActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOceanSphereActor_Statics::NewProp_OceanMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOceanSphereActor_Statics::NewProp_OceanRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOceanSphereActor_Statics::NewProp_FaceResolution,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOceanSphereActor_Statics::NewProp_ChunkDepth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOceanSphereActor_Statics::NewProp_MinDepth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOceanSphereActor_Statics::NewProp_MaxDepth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOceanSphereActor_Statics::NewProp_ScreenSpaceThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOceanSphereActor_Statics::NewProp_MinLodInterval,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOceanSphereActor_Statics::NewProp_VelocityLookAheadFactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOceanSphereActor_Statics::NewProp_bTickInEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AOceanSphereActor_Statics::PropPointers) < 2048);
// ********** End Class AOceanSphereActor Property Definitions *************************************
UObject* (*const Z_Construct_UClass_AOceanSphereActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ARealtimeMeshActor,
	(UObject* (*)())Z_Construct_UPackage__Script_WorldOcean,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AOceanSphereActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AOceanSphereActor_Statics::ClassParams = {
	&AOceanSphereActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AOceanSphereActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AOceanSphereActor_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AOceanSphereActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AOceanSphereActor_Statics::Class_MetaDataParams)
};
void AOceanSphereActor::StaticRegisterNativesAOceanSphereActor()
{
}
UClass* Z_Construct_UClass_AOceanSphereActor()
{
	if (!Z_Registration_Info_UClass_AOceanSphereActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AOceanSphereActor.OuterSingleton, Z_Construct_UClass_AOceanSphereActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AOceanSphereActor.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AOceanSphereActor);
AOceanSphereActor::~AOceanSphereActor() {}
// ********** End Class AOceanSphereActor **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Projects_vxl_Plugins_WorldOcean_Source_WorldOcean_Public_OceanSphereActor_h__Script_WorldOcean_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AOceanSphereActor, AOceanSphereActor::StaticClass, TEXT("AOceanSphereActor"), &Z_Registration_Info_UClass_AOceanSphereActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AOceanSphereActor), 1735990908U) },
	};
}; // Z_CompiledInDeferFile_FID_Projects_vxl_Plugins_WorldOcean_Source_WorldOcean_Public_OceanSphereActor_h__Script_WorldOcean_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_vxl_Plugins_WorldOcean_Source_WorldOcean_Public_OceanSphereActor_h__Script_WorldOcean_2314985182{
	TEXT("/Script/WorldOcean"),
	Z_CompiledInDeferFile_FID_Projects_vxl_Plugins_WorldOcean_Source_WorldOcean_Public_OceanSphereActor_h__Script_WorldOcean_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_vxl_Plugins_WorldOcean_Source_WorldOcean_Public_OceanSphereActor_h__Script_WorldOcean_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS

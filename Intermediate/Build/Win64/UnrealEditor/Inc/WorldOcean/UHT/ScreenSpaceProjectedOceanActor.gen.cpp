// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ScreenSpaceProjectedOceanActor.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeScreenSpaceProjectedOceanActor() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_WorldOcean();
WORLDOCEAN_API UClass* Z_Construct_UClass_AScreenSpaceProjectedOceanActor();
WORLDOCEAN_API UClass* Z_Construct_UClass_AScreenSpaceProjectedOceanActor_NoRegister();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AScreenSpaceProjectedOceanActor ******************************************
FClassRegistrationInfo Z_Registration_Info_UClass_AScreenSpaceProjectedOceanActor;
UClass* AScreenSpaceProjectedOceanActor::GetPrivateStaticClass()
{
	using TClass = AScreenSpaceProjectedOceanActor;
	if (!Z_Registration_Info_UClass_AScreenSpaceProjectedOceanActor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("ScreenSpaceProjectedOceanActor"),
			Z_Registration_Info_UClass_AScreenSpaceProjectedOceanActor.InnerSingleton,
			StaticRegisterNativesAScreenSpaceProjectedOceanActor,
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
	return Z_Registration_Info_UClass_AScreenSpaceProjectedOceanActor.InnerSingleton;
}
UClass* Z_Construct_UClass_AScreenSpaceProjectedOceanActor_NoRegister()
{
	return AScreenSpaceProjectedOceanActor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AScreenSpaceProjectedOceanActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ScreenSpaceProjectedOceanActor.h" },
		{ "ModuleRelativePath", "Public/ScreenSpaceProjectedOceanActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OceanPlaneMesh_MetaData[] = {
		{ "Category", "Ocean|Mesh" },
		{ "ModuleRelativePath", "Public/ScreenSpaceProjectedOceanActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OceanMaterial_MetaData[] = {
		{ "Category", "Ocean|Mesh" },
		{ "ModuleRelativePath", "Public/ScreenSpaceProjectedOceanActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlaneDistance_MetaData[] = {
		{ "Category", "Ocean|Projection" },
		{ "ClampMax", "10000" },
		{ "ClampMin", "15" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Distance from camera to place the projection plane.\n// Must be past the near clip plane (~10). Lower = less precision drift.\n" },
#endif
		{ "ModuleRelativePath", "Public/ScreenSpaceProjectedOceanActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Distance from camera to place the projection plane.\nMust be past the near clip plane (~10). Lower = less precision drift." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlaneMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ScreenSpaceProjectedOceanActor.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class AScreenSpaceProjectedOceanActor constinit property declarations **********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OceanPlaneMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OceanMaterial;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_PlaneDistance;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlaneMeshComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class AScreenSpaceProjectedOceanActor constinit property declarations ************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AScreenSpaceProjectedOceanActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_AScreenSpaceProjectedOceanActor_Statics

// ********** Begin Class AScreenSpaceProjectedOceanActor Property Definitions *********************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AScreenSpaceProjectedOceanActor_Statics::NewProp_OceanPlaneMesh = { "OceanPlaneMesh", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AScreenSpaceProjectedOceanActor, OceanPlaneMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OceanPlaneMesh_MetaData), NewProp_OceanPlaneMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AScreenSpaceProjectedOceanActor_Statics::NewProp_OceanMaterial = { "OceanMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AScreenSpaceProjectedOceanActor, OceanMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OceanMaterial_MetaData), NewProp_OceanMaterial_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_AScreenSpaceProjectedOceanActor_Statics::NewProp_PlaneDistance = { "PlaneDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AScreenSpaceProjectedOceanActor, PlaneDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlaneDistance_MetaData), NewProp_PlaneDistance_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AScreenSpaceProjectedOceanActor_Statics::NewProp_PlaneMeshComponent = { "PlaneMeshComponent", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AScreenSpaceProjectedOceanActor, PlaneMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlaneMeshComponent_MetaData), NewProp_PlaneMeshComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AScreenSpaceProjectedOceanActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AScreenSpaceProjectedOceanActor_Statics::NewProp_OceanPlaneMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AScreenSpaceProjectedOceanActor_Statics::NewProp_OceanMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AScreenSpaceProjectedOceanActor_Statics::NewProp_PlaneDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AScreenSpaceProjectedOceanActor_Statics::NewProp_PlaneMeshComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AScreenSpaceProjectedOceanActor_Statics::PropPointers) < 2048);
// ********** End Class AScreenSpaceProjectedOceanActor Property Definitions ***********************
UObject* (*const Z_Construct_UClass_AScreenSpaceProjectedOceanActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_WorldOcean,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AScreenSpaceProjectedOceanActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AScreenSpaceProjectedOceanActor_Statics::ClassParams = {
	&AScreenSpaceProjectedOceanActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AScreenSpaceProjectedOceanActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AScreenSpaceProjectedOceanActor_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AScreenSpaceProjectedOceanActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AScreenSpaceProjectedOceanActor_Statics::Class_MetaDataParams)
};
void AScreenSpaceProjectedOceanActor::StaticRegisterNativesAScreenSpaceProjectedOceanActor()
{
}
UClass* Z_Construct_UClass_AScreenSpaceProjectedOceanActor()
{
	if (!Z_Registration_Info_UClass_AScreenSpaceProjectedOceanActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AScreenSpaceProjectedOceanActor.OuterSingleton, Z_Construct_UClass_AScreenSpaceProjectedOceanActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AScreenSpaceProjectedOceanActor.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AScreenSpaceProjectedOceanActor);
AScreenSpaceProjectedOceanActor::~AScreenSpaceProjectedOceanActor() {}
// ********** End Class AScreenSpaceProjectedOceanActor ********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Projects_vxl_Plugins_WorldOcean_Source_WorldOcean_Public_ScreenSpaceProjectedOceanActor_h__Script_WorldOcean_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AScreenSpaceProjectedOceanActor, AScreenSpaceProjectedOceanActor::StaticClass, TEXT("AScreenSpaceProjectedOceanActor"), &Z_Registration_Info_UClass_AScreenSpaceProjectedOceanActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AScreenSpaceProjectedOceanActor), 135915350U) },
	};
}; // Z_CompiledInDeferFile_FID_Projects_vxl_Plugins_WorldOcean_Source_WorldOcean_Public_ScreenSpaceProjectedOceanActor_h__Script_WorldOcean_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_vxl_Plugins_WorldOcean_Source_WorldOcean_Public_ScreenSpaceProjectedOceanActor_h__Script_WorldOcean_2104390193{
	TEXT("/Script/WorldOcean"),
	Z_CompiledInDeferFile_FID_Projects_vxl_Plugins_WorldOcean_Source_WorldOcean_Public_ScreenSpaceProjectedOceanActor_h__Script_WorldOcean_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_vxl_Plugins_WorldOcean_Source_WorldOcean_Public_ScreenSpaceProjectedOceanActor_h__Script_WorldOcean_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS

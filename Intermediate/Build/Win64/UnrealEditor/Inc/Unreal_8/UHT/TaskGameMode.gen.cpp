// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Unreal_8/TaskGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTaskGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UNREAL_8_API UClass* Z_Construct_UClass_ATaskGameMode();
UNREAL_8_API UClass* Z_Construct_UClass_ATaskGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_Unreal_8();
// End Cross Module References

// Begin Class ATaskGameMode
void ATaskGameMode::StaticRegisterNativesATaskGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATaskGameMode);
UClass* Z_Construct_UClass_ATaskGameMode_NoRegister()
{
	return ATaskGameMode::StaticClass();
}
struct Z_Construct_UClass_ATaskGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "TaskGameMode.h" },
		{ "ModuleRelativePath", "TaskGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATaskGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ATaskGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Unreal_8,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATaskGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATaskGameMode_Statics::ClassParams = {
	&ATaskGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATaskGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ATaskGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATaskGameMode()
{
	if (!Z_Registration_Info_UClass_ATaskGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATaskGameMode.OuterSingleton, Z_Construct_UClass_ATaskGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATaskGameMode.OuterSingleton;
}
template<> UNREAL_8_API UClass* StaticClass<ATaskGameMode>()
{
	return ATaskGameMode::StaticClass();
}
ATaskGameMode::ATaskGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATaskGameMode);
ATaskGameMode::~ATaskGameMode() {}
// End Class ATaskGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_GitStudy_Unreal_8_Source_Unreal_8_TaskGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATaskGameMode, ATaskGameMode::StaticClass, TEXT("ATaskGameMode"), &Z_Registration_Info_UClass_ATaskGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATaskGameMode), 2084198876U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitStudy_Unreal_8_Source_Unreal_8_TaskGameMode_h_3793137378(TEXT("/Script/Unreal_8"),
	Z_CompiledInDeferFile_FID_GitStudy_Unreal_8_Source_Unreal_8_TaskGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitStudy_Unreal_8_Source_Unreal_8_TaskGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

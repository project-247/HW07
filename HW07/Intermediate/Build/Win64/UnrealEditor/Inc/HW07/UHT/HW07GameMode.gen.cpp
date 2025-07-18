// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HW07/HW07GameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHW07GameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
HW07_API UClass* Z_Construct_UClass_AHW07GameMode();
HW07_API UClass* Z_Construct_UClass_AHW07GameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_HW07();
// End Cross Module References

// Begin Class AHW07GameMode
void AHW07GameMode::StaticRegisterNativesAHW07GameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AHW07GameMode);
UClass* Z_Construct_UClass_AHW07GameMode_NoRegister()
{
	return AHW07GameMode::StaticClass();
}
struct Z_Construct_UClass_AHW07GameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "HW07GameMode.h" },
		{ "ModuleRelativePath", "HW07GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHW07GameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AHW07GameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_HW07,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHW07GameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AHW07GameMode_Statics::ClassParams = {
	&AHW07GameMode::StaticClass,
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
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHW07GameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AHW07GameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AHW07GameMode()
{
	if (!Z_Registration_Info_UClass_AHW07GameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHW07GameMode.OuterSingleton, Z_Construct_UClass_AHW07GameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AHW07GameMode.OuterSingleton;
}
template<> HW07_API UClass* StaticClass<AHW07GameMode>()
{
	return AHW07GameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AHW07GameMode);
AHW07GameMode::~AHW07GameMode() {}
// End Class AHW07GameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Project_HW07_HW07_Source_HW07_HW07GameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AHW07GameMode, AHW07GameMode::StaticClass, TEXT("AHW07GameMode"), &Z_Registration_Info_UClass_AHW07GameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHW07GameMode), 1319764609U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Project_HW07_HW07_Source_HW07_HW07GameMode_h_1633142952(TEXT("/Script/HW07"),
	Z_CompiledInDeferFile_FID_Unreal_Project_HW07_HW07_Source_HW07_HW07GameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Project_HW07_HW07_Source_HW07_HW07GameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

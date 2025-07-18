// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HW07/HWPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHWPlayerController() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
HW07_API UClass* Z_Construct_UClass_AHWPlayerController();
HW07_API UClass* Z_Construct_UClass_AHWPlayerController_NoRegister();
UPackage* Z_Construct_UPackage__Script_HW07();
// End Cross Module References

// Begin Class AHWPlayerController
void AHWPlayerController::StaticRegisterNativesAHWPlayerController()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AHWPlayerController);
UClass* Z_Construct_UClass_AHWPlayerController_NoRegister()
{
	return AHWPlayerController::StaticClass();
}
struct Z_Construct_UClass_AHWPlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "HWPlayerController.h" },
		{ "ModuleRelativePath", "HWPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[] = {
		{ "Category", "HWPlayerController" },
		{ "ModuleRelativePath", "HWPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookAction_MetaData[] = {
		{ "Category", "HWPlayerController" },
		{ "ModuleRelativePath", "HWPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputMapping_MetaData[] = {
		{ "Category", "HWPlayerController" },
		{ "ModuleRelativePath", "HWPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputMapping;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHWPlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHWPlayerController_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHWPlayerController, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveAction_MetaData), NewProp_MoveAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHWPlayerController_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHWPlayerController, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookAction_MetaData), NewProp_LookAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHWPlayerController_Statics::NewProp_InputMapping = { "InputMapping", nullptr, (EPropertyFlags)0x0144000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHWPlayerController, InputMapping), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputMapping_MetaData), NewProp_InputMapping_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHWPlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHWPlayerController_Statics::NewProp_MoveAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHWPlayerController_Statics::NewProp_LookAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHWPlayerController_Statics::NewProp_InputMapping,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHWPlayerController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AHWPlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_HW07,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHWPlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AHWPlayerController_Statics::ClassParams = {
	&AHWPlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AHWPlayerController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AHWPlayerController_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHWPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_AHWPlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AHWPlayerController()
{
	if (!Z_Registration_Info_UClass_AHWPlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHWPlayerController.OuterSingleton, Z_Construct_UClass_AHWPlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AHWPlayerController.OuterSingleton;
}
template<> HW07_API UClass* StaticClass<AHWPlayerController>()
{
	return AHWPlayerController::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AHWPlayerController);
AHWPlayerController::~AHWPlayerController() {}
// End Class AHWPlayerController

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Project_HW07_HW07_Source_HW07_HWPlayerController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AHWPlayerController, AHWPlayerController::StaticClass, TEXT("AHWPlayerController"), &Z_Registration_Info_UClass_AHWPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHWPlayerController), 333226520U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Project_HW07_HW07_Source_HW07_HWPlayerController_h_2204345853(TEXT("/Script/HW07"),
	Z_CompiledInDeferFile_FID_Unreal_Project_HW07_HW07_Source_HW07_HWPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Project_HW07_HW07_Source_HW07_HWPlayerController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

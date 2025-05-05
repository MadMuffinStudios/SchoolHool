// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SchoolHool/Base/BaseGameState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseGameState() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameStateBase();
SCHOOLHOOL_API UClass* Z_Construct_UClass_ABaseGameState();
SCHOOLHOOL_API UClass* Z_Construct_UClass_ABaseGameState_NoRegister();
UPackage* Z_Construct_UPackage__Script_SchoolHool();
// End Cross Module References

// Begin Class ABaseGameState
void ABaseGameState::StaticRegisterNativesABaseGameState()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABaseGameState);
UClass* Z_Construct_UClass_ABaseGameState_NoRegister()
{
	return ABaseGameState::StaticClass();
}
struct Z_Construct_UClass_ABaseGameState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Base/BaseGameState.h" },
		{ "ModuleRelativePath", "Base/BaseGameState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABaseGameState>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ABaseGameState_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameStateBase,
	(UObject* (*)())Z_Construct_UPackage__Script_SchoolHool,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseGameState_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABaseGameState_Statics::ClassParams = {
	&ABaseGameState::StaticClass,
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
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseGameState_Statics::Class_MetaDataParams), Z_Construct_UClass_ABaseGameState_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABaseGameState()
{
	if (!Z_Registration_Info_UClass_ABaseGameState.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABaseGameState.OuterSingleton, Z_Construct_UClass_ABaseGameState_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABaseGameState.OuterSingleton;
}
template<> SCHOOLHOOL_API UClass* StaticClass<ABaseGameState>()
{
	return ABaseGameState::StaticClass();
}
ABaseGameState::ABaseGameState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABaseGameState);
ABaseGameState::~ABaseGameState() {}
// End Class ABaseGameState

// Begin Registration
struct Z_CompiledInDeferFile_FID_Proj_MadMuffinStudios_Games_SchoolHool_Project_SchoolHool_Source_SchoolHool_Base_BaseGameState_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABaseGameState, ABaseGameState::StaticClass, TEXT("ABaseGameState"), &Z_Registration_Info_UClass_ABaseGameState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABaseGameState), 468164217U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Proj_MadMuffinStudios_Games_SchoolHool_Project_SchoolHool_Source_SchoolHool_Base_BaseGameState_h_2164203455(TEXT("/Script/SchoolHool"),
	Z_CompiledInDeferFile_FID_Proj_MadMuffinStudios_Games_SchoolHool_Project_SchoolHool_Source_SchoolHool_Base_BaseGameState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Proj_MadMuffinStudios_Games_SchoolHool_Project_SchoolHool_Source_SchoolHool_Base_BaseGameState_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

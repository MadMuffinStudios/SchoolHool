// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SchoolHool/SchoolHoolGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSchoolHoolGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
SCHOOLHOOL_API UClass* Z_Construct_UClass_ASchoolHoolGameMode();
SCHOOLHOOL_API UClass* Z_Construct_UClass_ASchoolHoolGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_SchoolHool();
// End Cross Module References

// Begin Class ASchoolHoolGameMode
void ASchoolHoolGameMode::StaticRegisterNativesASchoolHoolGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASchoolHoolGameMode);
UClass* Z_Construct_UClass_ASchoolHoolGameMode_NoRegister()
{
	return ASchoolHoolGameMode::StaticClass();
}
struct Z_Construct_UClass_ASchoolHoolGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "SchoolHoolGameMode.h" },
		{ "ModuleRelativePath", "SchoolHoolGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASchoolHoolGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ASchoolHoolGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_SchoolHool,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASchoolHoolGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASchoolHoolGameMode_Statics::ClassParams = {
	&ASchoolHoolGameMode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASchoolHoolGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ASchoolHoolGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASchoolHoolGameMode()
{
	if (!Z_Registration_Info_UClass_ASchoolHoolGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASchoolHoolGameMode.OuterSingleton, Z_Construct_UClass_ASchoolHoolGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASchoolHoolGameMode.OuterSingleton;
}
template<> SCHOOLHOOL_API UClass* StaticClass<ASchoolHoolGameMode>()
{
	return ASchoolHoolGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASchoolHoolGameMode);
ASchoolHoolGameMode::~ASchoolHoolGameMode() {}
// End Class ASchoolHoolGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Proj_MadMuffinStudios_Games_SchoolHool_Project_SchoolHool_Source_SchoolHool_SchoolHoolGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASchoolHoolGameMode, ASchoolHoolGameMode::StaticClass, TEXT("ASchoolHoolGameMode"), &Z_Registration_Info_UClass_ASchoolHoolGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASchoolHoolGameMode), 1958377782U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Proj_MadMuffinStudios_Games_SchoolHool_Project_SchoolHool_Source_SchoolHool_SchoolHoolGameMode_h_1143460396(TEXT("/Script/SchoolHool"),
	Z_CompiledInDeferFile_FID_Proj_MadMuffinStudios_Games_SchoolHool_Project_SchoolHool_Source_SchoolHool_SchoolHoolGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Proj_MadMuffinStudios_Games_SchoolHool_Project_SchoolHool_Source_SchoolHool_SchoolHoolGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

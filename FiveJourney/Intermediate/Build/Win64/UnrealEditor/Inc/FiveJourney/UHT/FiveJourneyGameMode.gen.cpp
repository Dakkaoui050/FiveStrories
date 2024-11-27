// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FiveJourney/FiveJourneyGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFiveJourneyGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
FIVEJOURNEY_API UClass* Z_Construct_UClass_AFiveJourneyGameMode();
FIVEJOURNEY_API UClass* Z_Construct_UClass_AFiveJourneyGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_FiveJourney();
// End Cross Module References

// Begin Class AFiveJourneyGameMode
void AFiveJourneyGameMode::StaticRegisterNativesAFiveJourneyGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFiveJourneyGameMode);
UClass* Z_Construct_UClass_AFiveJourneyGameMode_NoRegister()
{
	return AFiveJourneyGameMode::StaticClass();
}
struct Z_Construct_UClass_AFiveJourneyGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "FiveJourneyGameMode.h" },
		{ "ModuleRelativePath", "FiveJourneyGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFiveJourneyGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AFiveJourneyGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_FiveJourney,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFiveJourneyGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AFiveJourneyGameMode_Statics::ClassParams = {
	&AFiveJourneyGameMode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFiveJourneyGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AFiveJourneyGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AFiveJourneyGameMode()
{
	if (!Z_Registration_Info_UClass_AFiveJourneyGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFiveJourneyGameMode.OuterSingleton, Z_Construct_UClass_AFiveJourneyGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AFiveJourneyGameMode.OuterSingleton;
}
template<> FIVEJOURNEY_API UClass* StaticClass<AFiveJourneyGameMode>()
{
	return AFiveJourneyGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AFiveJourneyGameMode);
AFiveJourneyGameMode::~AFiveJourneyGameMode() {}
// End Class AFiveJourneyGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealEngineProject_FiveJourney_Source_FiveJourney_FiveJourneyGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AFiveJourneyGameMode, AFiveJourneyGameMode::StaticClass, TEXT("AFiveJourneyGameMode"), &Z_Registration_Info_UClass_AFiveJourneyGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFiveJourneyGameMode), 3586970337U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngineProject_FiveJourney_Source_FiveJourney_FiveJourneyGameMode_h_513629068(TEXT("/Script/FiveJourney"),
	Z_CompiledInDeferFile_FID_UnrealEngineProject_FiveJourney_Source_FiveJourney_FiveJourneyGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngineProject_FiveJourney_Source_FiveJourney_FiveJourneyGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

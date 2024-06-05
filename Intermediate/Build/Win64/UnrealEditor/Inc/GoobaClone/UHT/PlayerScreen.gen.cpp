// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GoobaClone/PlayerScreen.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerScreen() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	GOOBACLONE_API UClass* Z_Construct_UClass_APlayerScreen();
	GOOBACLONE_API UClass* Z_Construct_UClass_APlayerScreen_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GoobaClone();
// End Cross Module References
	void APlayerScreen::StaticRegisterNativesAPlayerScreen()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APlayerScreen);
	UClass* Z_Construct_UClass_APlayerScreen_NoRegister()
	{
		return APlayerScreen::StaticClass();
	}
	struct Z_Construct_UClass_APlayerScreen_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlayerScreen_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_GoobaClone,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerScreen_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerScreen_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "PlayerScreen.h" },
		{ "ModuleRelativePath", "PlayerScreen.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlayerScreen_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayerScreen>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APlayerScreen_Statics::ClassParams = {
		&APlayerScreen::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerScreen_Statics::Class_MetaDataParams), Z_Construct_UClass_APlayerScreen_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_APlayerScreen()
	{
		if (!Z_Registration_Info_UClass_APlayerScreen.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APlayerScreen.OuterSingleton, Z_Construct_UClass_APlayerScreen_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APlayerScreen.OuterSingleton;
	}
	template<> GOOBACLONE_API UClass* StaticClass<APlayerScreen>()
	{
		return APlayerScreen::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlayerScreen);
	APlayerScreen::~APlayerScreen() {}
	struct Z_CompiledInDeferFile_FID_Users_glenn_Documents_Unreal_Projects_GoobaClone_Source_GoobaClone_PlayerScreen_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_glenn_Documents_Unreal_Projects_GoobaClone_Source_GoobaClone_PlayerScreen_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APlayerScreen, APlayerScreen::StaticClass, TEXT("APlayerScreen"), &Z_Registration_Info_UClass_APlayerScreen, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlayerScreen), 2402615873U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_glenn_Documents_Unreal_Projects_GoobaClone_Source_GoobaClone_PlayerScreen_h_2099999435(TEXT("/Script/GoobaClone"),
		Z_CompiledInDeferFile_FID_Users_glenn_Documents_Unreal_Projects_GoobaClone_Source_GoobaClone_PlayerScreen_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_glenn_Documents_Unreal_Projects_GoobaClone_Source_GoobaClone_PlayerScreen_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

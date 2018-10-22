// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Meditation_VR_1/Meditation_VR_1GameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeditation_VR_1GameModeBase() {}
// Cross Module References
	MEDITATION_VR_1_API UClass* Z_Construct_UClass_AMeditation_VR_1GameModeBase_NoRegister();
	MEDITATION_VR_1_API UClass* Z_Construct_UClass_AMeditation_VR_1GameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Meditation_VR_1();
// End Cross Module References
	void AMeditation_VR_1GameModeBase::StaticRegisterNativesAMeditation_VR_1GameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AMeditation_VR_1GameModeBase_NoRegister()
	{
		return AMeditation_VR_1GameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AMeditation_VR_1GameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMeditation_VR_1GameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Meditation_VR_1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMeditation_VR_1GameModeBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Meditation_VR_1GameModeBase.h" },
		{ "ModuleRelativePath", "Meditation_VR_1GameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMeditation_VR_1GameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMeditation_VR_1GameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMeditation_VR_1GameModeBase_Statics::ClassParams = {
		&AMeditation_VR_1GameModeBase::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009002A8u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AMeditation_VR_1GameModeBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AMeditation_VR_1GameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMeditation_VR_1GameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMeditation_VR_1GameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMeditation_VR_1GameModeBase, 581164692);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMeditation_VR_1GameModeBase(Z_Construct_UClass_AMeditation_VR_1GameModeBase, &AMeditation_VR_1GameModeBase::StaticClass, TEXT("/Script/Meditation_VR_1"), TEXT("AMeditation_VR_1GameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMeditation_VR_1GameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

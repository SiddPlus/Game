// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Game/Public/PlayerUpgrades.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerUpgrades() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
GAME_API UClass* Z_Construct_UClass_UPlayerUpgrades();
GAME_API UClass* Z_Construct_UClass_UPlayerUpgrades_NoRegister();
GAME_API UScriptStruct* Z_Construct_UScriptStruct_FUpgradeData();
GAME_API UScriptStruct* Z_Construct_UScriptStruct_FUpgradeLevelData();
GAME_API UScriptStruct* Z_Construct_UScriptStruct_FUpgradeTree();
UPackage* Z_Construct_UPackage__Script_Game();
// End Cross Module References

// Begin ScriptStruct FUpgradeLevelData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_UpgradeLevelData;
class UScriptStruct* FUpgradeLevelData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_UpgradeLevelData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_UpgradeLevelData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUpgradeLevelData, (UObject*)Z_Construct_UPackage__Script_Game(), TEXT("UpgradeLevelData"));
	}
	return Z_Registration_Info_UScriptStruct_UpgradeLevelData.OuterSingleton;
}
template<> GAME_API UScriptStruct* StaticStruct<FUpgradeLevelData>()
{
	return FUpgradeLevelData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FUpgradeLevelData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PlayerUpgrades.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerLevelRequirement_MetaData[] = {
		{ "Category", "Level Upgrades" },
		{ "ModuleRelativePath", "Public/PlayerUpgrades.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UpgradeCost_MetaData[] = {
		{ "Category", "Level Upgrades" },
		{ "ModuleRelativePath", "Public/PlayerUpgrades.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BonusText_MetaData[] = {
		{ "Category", "Level Upgrades" },
		{ "ModuleRelativePath", "Public/PlayerUpgrades.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_PlayerLevelRequirement;
	static const UECodeGen_Private::FIntPropertyParams NewProp_UpgradeCost;
	static const UECodeGen_Private::FTextPropertyParams NewProp_BonusText;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUpgradeLevelData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FUpgradeLevelData_Statics::NewProp_PlayerLevelRequirement = { "PlayerLevelRequirement", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUpgradeLevelData, PlayerLevelRequirement), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerLevelRequirement_MetaData), NewProp_PlayerLevelRequirement_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FUpgradeLevelData_Statics::NewProp_UpgradeCost = { "UpgradeCost", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUpgradeLevelData, UpgradeCost), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UpgradeCost_MetaData), NewProp_UpgradeCost_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FUpgradeLevelData_Statics::NewProp_BonusText = { "BonusText", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUpgradeLevelData, BonusText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BonusText_MetaData), NewProp_BonusText_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUpgradeLevelData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUpgradeLevelData_Statics::NewProp_PlayerLevelRequirement,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUpgradeLevelData_Statics::NewProp_UpgradeCost,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUpgradeLevelData_Statics::NewProp_BonusText,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUpgradeLevelData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUpgradeLevelData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Game,
	nullptr,
	&NewStructOps,
	"UpgradeLevelData",
	Z_Construct_UScriptStruct_FUpgradeLevelData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUpgradeLevelData_Statics::PropPointers),
	sizeof(FUpgradeLevelData),
	alignof(FUpgradeLevelData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUpgradeLevelData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FUpgradeLevelData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FUpgradeLevelData()
{
	if (!Z_Registration_Info_UScriptStruct_UpgradeLevelData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_UpgradeLevelData.InnerSingleton, Z_Construct_UScriptStruct_FUpgradeLevelData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_UpgradeLevelData.InnerSingleton;
}
// End ScriptStruct FUpgradeLevelData

// Begin ScriptStruct FUpgradeData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_UpgradeData;
class UScriptStruct* FUpgradeData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_UpgradeData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_UpgradeData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUpgradeData, (UObject*)Z_Construct_UPackage__Script_Game(), TEXT("UpgradeData"));
	}
	return Z_Registration_Info_UScriptStruct_UpgradeData.OuterSingleton;
}
template<> GAME_API UScriptStruct* StaticStruct<FUpgradeData>()
{
	return FUpgradeData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FUpgradeData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PlayerUpgrades.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UpgradeName_MetaData[] = {
		{ "Category", "Upgrade" },
		{ "ModuleRelativePath", "Public/PlayerUpgrades.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UpgradeDescription_MetaData[] = {
		{ "Category", "Upgrade" },
		{ "ModuleRelativePath", "Public/PlayerUpgrades.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UpgradeID_MetaData[] = {
		{ "Category", "Upgrade" },
		{ "ModuleRelativePath", "Public/PlayerUpgrades.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrerequisiteUpgradeID_MetaData[] = {
		{ "Category", "Upgrade" },
		{ "ModuleRelativePath", "Public/PlayerUpgrades.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerLevelRequirement_MetaData[] = {
		{ "Category", "Upgrade Stats" },
		{ "ModuleRelativePath", "Public/PlayerUpgrades.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PurchaseCost_MetaData[] = {
		{ "Category", "Upgrade" },
		{ "ModuleRelativePath", "Public/PlayerUpgrades.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsPurchased_MetaData[] = {
		{ "Category", "Upgrade" },
		{ "ModuleRelativePath", "Public/PlayerUpgrades.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentLevel_MetaData[] = {
		{ "Category", "Upgrade" },
		{ "ModuleRelativePath", "Public/PlayerUpgrades.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UpgradeLevels_MetaData[] = {
		{ "Category", "Upgrade" },
		{ "ModuleRelativePath", "Public/PlayerUpgrades.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_UpgradeName;
	static const UECodeGen_Private::FTextPropertyParams NewProp_UpgradeDescription;
	static const UECodeGen_Private::FNamePropertyParams NewProp_UpgradeID;
	static const UECodeGen_Private::FNamePropertyParams NewProp_PrerequisiteUpgradeID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PlayerLevelRequirement;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PurchaseCost;
	static void NewProp_IsPurchased_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsPurchased;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentLevel;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UpgradeLevels_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_UpgradeLevels;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUpgradeData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FUpgradeData_Statics::NewProp_UpgradeName = { "UpgradeName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUpgradeData, UpgradeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UpgradeName_MetaData), NewProp_UpgradeName_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FUpgradeData_Statics::NewProp_UpgradeDescription = { "UpgradeDescription", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUpgradeData, UpgradeDescription), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UpgradeDescription_MetaData), NewProp_UpgradeDescription_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FUpgradeData_Statics::NewProp_UpgradeID = { "UpgradeID", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUpgradeData, UpgradeID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UpgradeID_MetaData), NewProp_UpgradeID_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FUpgradeData_Statics::NewProp_PrerequisiteUpgradeID = { "PrerequisiteUpgradeID", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUpgradeData, PrerequisiteUpgradeID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrerequisiteUpgradeID_MetaData), NewProp_PrerequisiteUpgradeID_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FUpgradeData_Statics::NewProp_PlayerLevelRequirement = { "PlayerLevelRequirement", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUpgradeData, PlayerLevelRequirement), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerLevelRequirement_MetaData), NewProp_PlayerLevelRequirement_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FUpgradeData_Statics::NewProp_PurchaseCost = { "PurchaseCost", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUpgradeData, PurchaseCost), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PurchaseCost_MetaData), NewProp_PurchaseCost_MetaData) };
void Z_Construct_UScriptStruct_FUpgradeData_Statics::NewProp_IsPurchased_SetBit(void* Obj)
{
	((FUpgradeData*)Obj)->IsPurchased = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FUpgradeData_Statics::NewProp_IsPurchased = { "IsPurchased", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FUpgradeData), &Z_Construct_UScriptStruct_FUpgradeData_Statics::NewProp_IsPurchased_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsPurchased_MetaData), NewProp_IsPurchased_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FUpgradeData_Statics::NewProp_CurrentLevel = { "CurrentLevel", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUpgradeData, CurrentLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentLevel_MetaData), NewProp_CurrentLevel_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUpgradeData_Statics::NewProp_UpgradeLevels_Inner = { "UpgradeLevels", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FUpgradeLevelData, METADATA_PARAMS(0, nullptr) }; // 2493547701
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FUpgradeData_Statics::NewProp_UpgradeLevels = { "UpgradeLevels", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUpgradeData, UpgradeLevels), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UpgradeLevels_MetaData), NewProp_UpgradeLevels_MetaData) }; // 2493547701
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUpgradeData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUpgradeData_Statics::NewProp_UpgradeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUpgradeData_Statics::NewProp_UpgradeDescription,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUpgradeData_Statics::NewProp_UpgradeID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUpgradeData_Statics::NewProp_PrerequisiteUpgradeID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUpgradeData_Statics::NewProp_PlayerLevelRequirement,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUpgradeData_Statics::NewProp_PurchaseCost,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUpgradeData_Statics::NewProp_IsPurchased,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUpgradeData_Statics::NewProp_CurrentLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUpgradeData_Statics::NewProp_UpgradeLevels_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUpgradeData_Statics::NewProp_UpgradeLevels,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUpgradeData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUpgradeData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Game,
	nullptr,
	&NewStructOps,
	"UpgradeData",
	Z_Construct_UScriptStruct_FUpgradeData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUpgradeData_Statics::PropPointers),
	sizeof(FUpgradeData),
	alignof(FUpgradeData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUpgradeData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FUpgradeData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FUpgradeData()
{
	if (!Z_Registration_Info_UScriptStruct_UpgradeData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_UpgradeData.InnerSingleton, Z_Construct_UScriptStruct_FUpgradeData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_UpgradeData.InnerSingleton;
}
// End ScriptStruct FUpgradeData

// Begin ScriptStruct FUpgradeTree
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_UpgradeTree;
class UScriptStruct* FUpgradeTree::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_UpgradeTree.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_UpgradeTree.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUpgradeTree, (UObject*)Z_Construct_UPackage__Script_Game(), TEXT("UpgradeTree"));
	}
	return Z_Registration_Info_UScriptStruct_UpgradeTree.OuterSingleton;
}
template<> GAME_API UScriptStruct* StaticStruct<FUpgradeTree>()
{
	return FUpgradeTree::StaticStruct();
}
struct Z_Construct_UScriptStruct_FUpgradeTree_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PlayerUpgrades.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TreeName_MetaData[] = {
		{ "Category", "Upgrade Tree" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = \"Upgrade Tree\")\n\x09int TreeID;*/" },
#endif
		{ "ModuleRelativePath", "Public/PlayerUpgrades.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = \"Upgrade Tree\")\n       int TreeID;" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Upgrades_MetaData[] = {
		{ "Category", "Upgrade Tree" },
		{ "ModuleRelativePath", "Public/PlayerUpgrades.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_TreeName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Upgrades_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Upgrades;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUpgradeTree>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FUpgradeTree_Statics::NewProp_TreeName = { "TreeName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUpgradeTree, TreeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TreeName_MetaData), NewProp_TreeName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUpgradeTree_Statics::NewProp_Upgrades_Inner = { "Upgrades", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FUpgradeData, METADATA_PARAMS(0, nullptr) }; // 2083324720
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FUpgradeTree_Statics::NewProp_Upgrades = { "Upgrades", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUpgradeTree, Upgrades), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Upgrades_MetaData), NewProp_Upgrades_MetaData) }; // 2083324720
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUpgradeTree_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUpgradeTree_Statics::NewProp_TreeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUpgradeTree_Statics::NewProp_Upgrades_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUpgradeTree_Statics::NewProp_Upgrades,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUpgradeTree_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUpgradeTree_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Game,
	nullptr,
	&NewStructOps,
	"UpgradeTree",
	Z_Construct_UScriptStruct_FUpgradeTree_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUpgradeTree_Statics::PropPointers),
	sizeof(FUpgradeTree),
	alignof(FUpgradeTree),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUpgradeTree_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FUpgradeTree_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FUpgradeTree()
{
	if (!Z_Registration_Info_UScriptStruct_UpgradeTree.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_UpgradeTree.InnerSingleton, Z_Construct_UScriptStruct_FUpgradeTree_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_UpgradeTree.InnerSingleton;
}
// End ScriptStruct FUpgradeTree

// Begin Class UPlayerUpgrades Function FindUpgradeIndices
struct Z_Construct_UFunction_UPlayerUpgrades_FindUpgradeIndices_Statics
{
	struct PlayerUpgrades_eventFindUpgradeIndices_Parms
	{
		FName TreeID;
		FName UpgradeID;
		int32 OutTreeIndex;
		int32 OutUpgradeIndex;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Upgrades" },
		{ "ModuleRelativePath", "Public/PlayerUpgrades.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TreeID_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UpgradeID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_TreeID;
	static const UECodeGen_Private::FNamePropertyParams NewProp_UpgradeID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OutTreeIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OutUpgradeIndex;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPlayerUpgrades_FindUpgradeIndices_Statics::NewProp_TreeID = { "TreeID", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerUpgrades_eventFindUpgradeIndices_Parms, TreeID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TreeID_MetaData), NewProp_TreeID_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPlayerUpgrades_FindUpgradeIndices_Statics::NewProp_UpgradeID = { "UpgradeID", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerUpgrades_eventFindUpgradeIndices_Parms, UpgradeID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UpgradeID_MetaData), NewProp_UpgradeID_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPlayerUpgrades_FindUpgradeIndices_Statics::NewProp_OutTreeIndex = { "OutTreeIndex", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerUpgrades_eventFindUpgradeIndices_Parms, OutTreeIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPlayerUpgrades_FindUpgradeIndices_Statics::NewProp_OutUpgradeIndex = { "OutUpgradeIndex", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerUpgrades_eventFindUpgradeIndices_Parms, OutUpgradeIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UPlayerUpgrades_FindUpgradeIndices_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PlayerUpgrades_eventFindUpgradeIndices_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayerUpgrades_FindUpgradeIndices_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlayerUpgrades_eventFindUpgradeIndices_Parms), &Z_Construct_UFunction_UPlayerUpgrades_FindUpgradeIndices_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerUpgrades_FindUpgradeIndices_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerUpgrades_FindUpgradeIndices_Statics::NewProp_TreeID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerUpgrades_FindUpgradeIndices_Statics::NewProp_UpgradeID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerUpgrades_FindUpgradeIndices_Statics::NewProp_OutTreeIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerUpgrades_FindUpgradeIndices_Statics::NewProp_OutUpgradeIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerUpgrades_FindUpgradeIndices_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerUpgrades_FindUpgradeIndices_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerUpgrades_FindUpgradeIndices_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerUpgrades, nullptr, "FindUpgradeIndices", nullptr, nullptr, Z_Construct_UFunction_UPlayerUpgrades_FindUpgradeIndices_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerUpgrades_FindUpgradeIndices_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayerUpgrades_FindUpgradeIndices_Statics::PlayerUpgrades_eventFindUpgradeIndices_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerUpgrades_FindUpgradeIndices_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerUpgrades_FindUpgradeIndices_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayerUpgrades_FindUpgradeIndices_Statics::PlayerUpgrades_eventFindUpgradeIndices_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayerUpgrades_FindUpgradeIndices()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerUpgrades_FindUpgradeIndices_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayerUpgrades::execFindUpgradeIndices)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_TreeID);
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_UpgradeID);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutTreeIndex);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutUpgradeIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->FindUpgradeIndices(Z_Param_Out_TreeID,Z_Param_Out_UpgradeID,Z_Param_Out_OutTreeIndex,Z_Param_Out_OutUpgradeIndex);
	P_NATIVE_END;
}
// End Class UPlayerUpgrades Function FindUpgradeIndices

// Begin Class UPlayerUpgrades Function PurchaseUpgrade
struct Z_Construct_UFunction_UPlayerUpgrades_PurchaseUpgrade_Statics
{
	struct PlayerUpgrades_eventPurchaseUpgrade_Parms
	{
		FName TreeID;
		FName UpgradeID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Upgrades)" },
		{ "ModuleRelativePath", "Public/PlayerUpgrades.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TreeID_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UpgradeID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_TreeID;
	static const UECodeGen_Private::FNamePropertyParams NewProp_UpgradeID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPlayerUpgrades_PurchaseUpgrade_Statics::NewProp_TreeID = { "TreeID", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerUpgrades_eventPurchaseUpgrade_Parms, TreeID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TreeID_MetaData), NewProp_TreeID_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPlayerUpgrades_PurchaseUpgrade_Statics::NewProp_UpgradeID = { "UpgradeID", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerUpgrades_eventPurchaseUpgrade_Parms, UpgradeID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UpgradeID_MetaData), NewProp_UpgradeID_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerUpgrades_PurchaseUpgrade_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerUpgrades_PurchaseUpgrade_Statics::NewProp_TreeID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerUpgrades_PurchaseUpgrade_Statics::NewProp_UpgradeID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerUpgrades_PurchaseUpgrade_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerUpgrades_PurchaseUpgrade_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerUpgrades, nullptr, "PurchaseUpgrade", nullptr, nullptr, Z_Construct_UFunction_UPlayerUpgrades_PurchaseUpgrade_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerUpgrades_PurchaseUpgrade_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayerUpgrades_PurchaseUpgrade_Statics::PlayerUpgrades_eventPurchaseUpgrade_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerUpgrades_PurchaseUpgrade_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerUpgrades_PurchaseUpgrade_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayerUpgrades_PurchaseUpgrade_Statics::PlayerUpgrades_eventPurchaseUpgrade_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayerUpgrades_PurchaseUpgrade()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerUpgrades_PurchaseUpgrade_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayerUpgrades::execPurchaseUpgrade)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_TreeID);
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_UpgradeID);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PurchaseUpgrade(Z_Param_Out_TreeID,Z_Param_Out_UpgradeID);
	P_NATIVE_END;
}
// End Class UPlayerUpgrades Function PurchaseUpgrade

// Begin Class UPlayerUpgrades Function UpgradeUpgrade
struct Z_Construct_UFunction_UPlayerUpgrades_UpgradeUpgrade_Statics
{
	struct PlayerUpgrades_eventUpgradeUpgrade_Parms
	{
		FName TreeID;
		FName UpgradeID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Upgrades" },
		{ "ModuleRelativePath", "Public/PlayerUpgrades.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TreeID_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UpgradeID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_TreeID;
	static const UECodeGen_Private::FNamePropertyParams NewProp_UpgradeID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPlayerUpgrades_UpgradeUpgrade_Statics::NewProp_TreeID = { "TreeID", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerUpgrades_eventUpgradeUpgrade_Parms, TreeID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TreeID_MetaData), NewProp_TreeID_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPlayerUpgrades_UpgradeUpgrade_Statics::NewProp_UpgradeID = { "UpgradeID", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerUpgrades_eventUpgradeUpgrade_Parms, UpgradeID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UpgradeID_MetaData), NewProp_UpgradeID_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerUpgrades_UpgradeUpgrade_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerUpgrades_UpgradeUpgrade_Statics::NewProp_TreeID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerUpgrades_UpgradeUpgrade_Statics::NewProp_UpgradeID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerUpgrades_UpgradeUpgrade_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerUpgrades_UpgradeUpgrade_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerUpgrades, nullptr, "UpgradeUpgrade", nullptr, nullptr, Z_Construct_UFunction_UPlayerUpgrades_UpgradeUpgrade_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerUpgrades_UpgradeUpgrade_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayerUpgrades_UpgradeUpgrade_Statics::PlayerUpgrades_eventUpgradeUpgrade_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerUpgrades_UpgradeUpgrade_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerUpgrades_UpgradeUpgrade_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayerUpgrades_UpgradeUpgrade_Statics::PlayerUpgrades_eventUpgradeUpgrade_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayerUpgrades_UpgradeUpgrade()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerUpgrades_UpgradeUpgrade_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayerUpgrades::execUpgradeUpgrade)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_TreeID);
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_UpgradeID);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpgradeUpgrade(Z_Param_Out_TreeID,Z_Param_Out_UpgradeID);
	P_NATIVE_END;
}
// End Class UPlayerUpgrades Function UpgradeUpgrade

// Begin Class UPlayerUpgrades
void UPlayerUpgrades::StaticRegisterNativesUPlayerUpgrades()
{
	UClass* Class = UPlayerUpgrades::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "FindUpgradeIndices", &UPlayerUpgrades::execFindUpgradeIndices },
		{ "PurchaseUpgrade", &UPlayerUpgrades::execPurchaseUpgrade },
		{ "UpgradeUpgrade", &UPlayerUpgrades::execUpgradeUpgrade },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlayerUpgrades);
UClass* Z_Construct_UClass_UPlayerUpgrades_NoRegister()
{
	return UPlayerUpgrades::StaticClass();
}
struct Z_Construct_UClass_UPlayerUpgrades_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "PlayerUpgrades.h" },
		{ "ModuleRelativePath", "Public/PlayerUpgrades.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UpgradeTrees_MetaData[] = {
		{ "Category", "Upgrades" },
		{ "ModuleRelativePath", "Public/PlayerUpgrades.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_UpgradeTrees_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_UpgradeTrees;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlayerUpgrades_FindUpgradeIndices, "FindUpgradeIndices" }, // 1692680164
		{ &Z_Construct_UFunction_UPlayerUpgrades_PurchaseUpgrade, "PurchaseUpgrade" }, // 209192877
		{ &Z_Construct_UFunction_UPlayerUpgrades_UpgradeUpgrade, "UpgradeUpgrade" }, // 1226275517
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerUpgrades>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPlayerUpgrades_Statics::NewProp_UpgradeTrees_Inner = { "UpgradeTrees", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FUpgradeTree, METADATA_PARAMS(0, nullptr) }; // 1111141495
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPlayerUpgrades_Statics::NewProp_UpgradeTrees = { "UpgradeTrees", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerUpgrades, UpgradeTrees), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UpgradeTrees_MetaData), NewProp_UpgradeTrees_MetaData) }; // 1111141495
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayerUpgrades_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerUpgrades_Statics::NewProp_UpgradeTrees_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerUpgrades_Statics::NewProp_UpgradeTrees,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerUpgrades_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPlayerUpgrades_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Game,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerUpgrades_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayerUpgrades_Statics::ClassParams = {
	&UPlayerUpgrades::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UPlayerUpgrades_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerUpgrades_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerUpgrades_Statics::Class_MetaDataParams), Z_Construct_UClass_UPlayerUpgrades_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPlayerUpgrades()
{
	if (!Z_Registration_Info_UClass_UPlayerUpgrades.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayerUpgrades.OuterSingleton, Z_Construct_UClass_UPlayerUpgrades_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPlayerUpgrades.OuterSingleton;
}
template<> GAME_API UClass* StaticClass<UPlayerUpgrades>()
{
	return UPlayerUpgrades::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerUpgrades);
UPlayerUpgrades::~UPlayerUpgrades() {}
// End Class UPlayerUpgrades

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_2304613_Documents_GitHub_Game_Game_Source_Game_Public_PlayerUpgrades_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FUpgradeLevelData::StaticStruct, Z_Construct_UScriptStruct_FUpgradeLevelData_Statics::NewStructOps, TEXT("UpgradeLevelData"), &Z_Registration_Info_UScriptStruct_UpgradeLevelData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUpgradeLevelData), 2493547701U) },
		{ FUpgradeData::StaticStruct, Z_Construct_UScriptStruct_FUpgradeData_Statics::NewStructOps, TEXT("UpgradeData"), &Z_Registration_Info_UScriptStruct_UpgradeData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUpgradeData), 2083324720U) },
		{ FUpgradeTree::StaticStruct, Z_Construct_UScriptStruct_FUpgradeTree_Statics::NewStructOps, TEXT("UpgradeTree"), &Z_Registration_Info_UScriptStruct_UpgradeTree, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUpgradeTree), 1111141495U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPlayerUpgrades, UPlayerUpgrades::StaticClass, TEXT("UPlayerUpgrades"), &Z_Registration_Info_UClass_UPlayerUpgrades, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayerUpgrades), 3415122572U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_2304613_Documents_GitHub_Game_Game_Source_Game_Public_PlayerUpgrades_h_3110588269(TEXT("/Script/Game"),
	Z_CompiledInDeferFile_FID_Users_2304613_Documents_GitHub_Game_Game_Source_Game_Public_PlayerUpgrades_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_2304613_Documents_GitHub_Game_Game_Source_Game_Public_PlayerUpgrades_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_2304613_Documents_GitHub_Game_Game_Source_Game_Public_PlayerUpgrades_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_2304613_Documents_GitHub_Game_Game_Source_Game_Public_PlayerUpgrades_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

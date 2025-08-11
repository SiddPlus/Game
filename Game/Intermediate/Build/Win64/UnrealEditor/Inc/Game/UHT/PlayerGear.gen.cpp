// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Game/Public/PlayerGear.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerGear() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
GAME_API UClass* Z_Construct_UClass_UPlayerGear();
GAME_API UClass* Z_Construct_UClass_UPlayerGear_NoRegister();
GAME_API UEnum* Z_Construct_UEnum_Game_EGearType();
GAME_API UScriptStruct* Z_Construct_UScriptStruct_FGear();
GAME_API UScriptStruct* Z_Construct_UScriptStruct_FGearUpgradeLevels();
UPackage* Z_Construct_UPackage__Script_Game();
// End Cross Module References

// Begin Enum EGearType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGearType;
static UEnum* EGearType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EGearType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EGearType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Game_EGearType, (UObject*)Z_Construct_UPackage__Script_Game(), TEXT("EGearType"));
	}
	return Z_Registration_Info_UEnum_EGearType.OuterSingleton;
}
template<> GAME_API UEnum* StaticEnum<EGearType>()
{
	return EGearType_StaticEnum();
}
struct Z_Construct_UEnum_Game_EGearType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Armor.Name", "EGearType::Armor" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PlayerGear.h" },
		{ "Weapon.Name", "EGearType::Weapon" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EGearType::Weapon", (int64)EGearType::Weapon },
		{ "EGearType::Armor", (int64)EGearType::Armor },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Game_EGearType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Game,
	nullptr,
	"EGearType",
	"EGearType",
	Z_Construct_UEnum_Game_EGearType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Game_EGearType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Game_EGearType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Game_EGearType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Game_EGearType()
{
	if (!Z_Registration_Info_UEnum_EGearType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGearType.InnerSingleton, Z_Construct_UEnum_Game_EGearType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EGearType.InnerSingleton;
}
// End Enum EGearType

// Begin ScriptStruct FGearUpgradeLevels
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GearUpgradeLevels;
class UScriptStruct* FGearUpgradeLevels::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GearUpgradeLevels.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GearUpgradeLevels.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGearUpgradeLevels, (UObject*)Z_Construct_UPackage__Script_Game(), TEXT("GearUpgradeLevels"));
	}
	return Z_Registration_Info_UScriptStruct_GearUpgradeLevels.OuterSingleton;
}
template<> GAME_API UScriptStruct* StaticStruct<FGearUpgradeLevels>()
{
	return FGearUpgradeLevels::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGearUpgradeLevels_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PlayerGear.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerLevelRequirement_MetaData[] = {
		{ "Category", "Gear Upgrade" },
		{ "ModuleRelativePath", "Public/PlayerGear.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UpgradeCost_MetaData[] = {
		{ "Category", "Gear Upgrade" },
		{ "ModuleRelativePath", "Public/PlayerGear.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BonusText_MetaData[] = {
		{ "Category", "Gear Upgrade" },
		{ "ModuleRelativePath", "Public/PlayerGear.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_PlayerLevelRequirement;
	static const UECodeGen_Private::FIntPropertyParams NewProp_UpgradeCost;
	static const UECodeGen_Private::FTextPropertyParams NewProp_BonusText;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGearUpgradeLevels>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGearUpgradeLevels_Statics::NewProp_PlayerLevelRequirement = { "PlayerLevelRequirement", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGearUpgradeLevels, PlayerLevelRequirement), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerLevelRequirement_MetaData), NewProp_PlayerLevelRequirement_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGearUpgradeLevels_Statics::NewProp_UpgradeCost = { "UpgradeCost", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGearUpgradeLevels, UpgradeCost), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UpgradeCost_MetaData), NewProp_UpgradeCost_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FGearUpgradeLevels_Statics::NewProp_BonusText = { "BonusText", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGearUpgradeLevels, BonusText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BonusText_MetaData), NewProp_BonusText_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGearUpgradeLevels_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGearUpgradeLevels_Statics::NewProp_PlayerLevelRequirement,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGearUpgradeLevels_Statics::NewProp_UpgradeCost,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGearUpgradeLevels_Statics::NewProp_BonusText,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGearUpgradeLevels_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGearUpgradeLevels_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Game,
	nullptr,
	&NewStructOps,
	"GearUpgradeLevels",
	Z_Construct_UScriptStruct_FGearUpgradeLevels_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGearUpgradeLevels_Statics::PropPointers),
	sizeof(FGearUpgradeLevels),
	alignof(FGearUpgradeLevels),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGearUpgradeLevels_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGearUpgradeLevels_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGearUpgradeLevels()
{
	if (!Z_Registration_Info_UScriptStruct_GearUpgradeLevels.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GearUpgradeLevels.InnerSingleton, Z_Construct_UScriptStruct_FGearUpgradeLevels_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GearUpgradeLevels.InnerSingleton;
}
// End ScriptStruct FGearUpgradeLevels

// Begin ScriptStruct FGear
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Gear;
class UScriptStruct* FGear::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Gear.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Gear.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGear, (UObject*)Z_Construct_UPackage__Script_Game(), TEXT("Gear"));
	}
	return Z_Registration_Info_UScriptStruct_Gear.OuterSingleton;
}
template<> GAME_API UScriptStruct* StaticStruct<FGear>()
{
	return FGear::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGear_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PlayerGear.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GearType_MetaData[] = {
		{ "Category", "Gear Data" },
		{ "ModuleRelativePath", "Public/PlayerGear.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GearName_MetaData[] = {
		{ "Category", "Gear Data" },
		{ "ModuleRelativePath", "Public/PlayerGear.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerLevelRequirement_MetaData[] = {
		{ "Category", "Gear Data" },
		{ "ModuleRelativePath", "Public/PlayerGear.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PurchaseCost_MetaData[] = {
		{ "Category", "Gear Data" },
		{ "ModuleRelativePath", "Public/PlayerGear.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsPurchased_MetaData[] = {
		{ "Category", "Gear Data" },
		{ "ModuleRelativePath", "Public/PlayerGear.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentLevel_MetaData[] = {
		{ "Category", "Gear Data" },
		{ "ModuleRelativePath", "Public/PlayerGear.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UpgradeLevels_MetaData[] = {
		{ "Category", "Gear Data" },
		{ "ModuleRelativePath", "Public/PlayerGear.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_GearType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_GearType;
	static const UECodeGen_Private::FTextPropertyParams NewProp_GearName;
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
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGear>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGear_Statics::NewProp_GearType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGear_Statics::NewProp_GearType = { "GearType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGear, GearType), Z_Construct_UEnum_Game_EGearType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GearType_MetaData), NewProp_GearType_MetaData) }; // 401727809
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FGear_Statics::NewProp_GearName = { "GearName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGear, GearName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GearName_MetaData), NewProp_GearName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGear_Statics::NewProp_PlayerLevelRequirement = { "PlayerLevelRequirement", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGear, PlayerLevelRequirement), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerLevelRequirement_MetaData), NewProp_PlayerLevelRequirement_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGear_Statics::NewProp_PurchaseCost = { "PurchaseCost", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGear, PurchaseCost), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PurchaseCost_MetaData), NewProp_PurchaseCost_MetaData) };
void Z_Construct_UScriptStruct_FGear_Statics::NewProp_IsPurchased_SetBit(void* Obj)
{
	((FGear*)Obj)->IsPurchased = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGear_Statics::NewProp_IsPurchased = { "IsPurchased", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGear), &Z_Construct_UScriptStruct_FGear_Statics::NewProp_IsPurchased_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsPurchased_MetaData), NewProp_IsPurchased_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGear_Statics::NewProp_CurrentLevel = { "CurrentLevel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGear, CurrentLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentLevel_MetaData), NewProp_CurrentLevel_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGear_Statics::NewProp_UpgradeLevels_Inner = { "UpgradeLevels", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGearUpgradeLevels, METADATA_PARAMS(0, nullptr) }; // 1657191248
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGear_Statics::NewProp_UpgradeLevels = { "UpgradeLevels", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGear, UpgradeLevels), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UpgradeLevels_MetaData), NewProp_UpgradeLevels_MetaData) }; // 1657191248
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGear_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGear_Statics::NewProp_GearType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGear_Statics::NewProp_GearType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGear_Statics::NewProp_GearName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGear_Statics::NewProp_PlayerLevelRequirement,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGear_Statics::NewProp_PurchaseCost,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGear_Statics::NewProp_IsPurchased,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGear_Statics::NewProp_CurrentLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGear_Statics::NewProp_UpgradeLevels_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGear_Statics::NewProp_UpgradeLevels,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGear_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGear_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Game,
	nullptr,
	&NewStructOps,
	"Gear",
	Z_Construct_UScriptStruct_FGear_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGear_Statics::PropPointers),
	sizeof(FGear),
	alignof(FGear),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGear_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGear_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGear()
{
	if (!Z_Registration_Info_UScriptStruct_Gear.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Gear.InnerSingleton, Z_Construct_UScriptStruct_FGear_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_Gear.InnerSingleton;
}
// End ScriptStruct FGear

// Begin Class UPlayerGear Function FindGearIndex
struct Z_Construct_UFunction_UPlayerGear_FindGearIndex_Statics
{
	struct PlayerGear_eventFindGearIndex_Parms
	{
		FName GearID;
		int32 OutGearIndex;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Gear" },
		{ "ModuleRelativePath", "Public/PlayerGear.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GearID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_GearID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OutGearIndex;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPlayerGear_FindGearIndex_Statics::NewProp_GearID = { "GearID", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerGear_eventFindGearIndex_Parms, GearID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GearID_MetaData), NewProp_GearID_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPlayerGear_FindGearIndex_Statics::NewProp_OutGearIndex = { "OutGearIndex", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerGear_eventFindGearIndex_Parms, OutGearIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UPlayerGear_FindGearIndex_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PlayerGear_eventFindGearIndex_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayerGear_FindGearIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlayerGear_eventFindGearIndex_Parms), &Z_Construct_UFunction_UPlayerGear_FindGearIndex_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerGear_FindGearIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerGear_FindGearIndex_Statics::NewProp_GearID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerGear_FindGearIndex_Statics::NewProp_OutGearIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerGear_FindGearIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerGear_FindGearIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerGear_FindGearIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerGear, nullptr, "FindGearIndex", nullptr, nullptr, Z_Construct_UFunction_UPlayerGear_FindGearIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerGear_FindGearIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayerGear_FindGearIndex_Statics::PlayerGear_eventFindGearIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerGear_FindGearIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerGear_FindGearIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayerGear_FindGearIndex_Statics::PlayerGear_eventFindGearIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayerGear_FindGearIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerGear_FindGearIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayerGear::execFindGearIndex)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_GearID);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutGearIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->FindGearIndex(Z_Param_Out_GearID,Z_Param_Out_OutGearIndex);
	P_NATIVE_END;
}
// End Class UPlayerGear Function FindGearIndex

// Begin Class UPlayerGear Function PurchaseGear
struct Z_Construct_UFunction_UPlayerGear_PurchaseGear_Statics
{
	struct PlayerGear_eventPurchaseGear_Parms
	{
		FName GearID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Gear" },
		{ "ModuleRelativePath", "Public/PlayerGear.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GearID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_GearID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPlayerGear_PurchaseGear_Statics::NewProp_GearID = { "GearID", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerGear_eventPurchaseGear_Parms, GearID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GearID_MetaData), NewProp_GearID_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerGear_PurchaseGear_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerGear_PurchaseGear_Statics::NewProp_GearID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerGear_PurchaseGear_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerGear_PurchaseGear_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerGear, nullptr, "PurchaseGear", nullptr, nullptr, Z_Construct_UFunction_UPlayerGear_PurchaseGear_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerGear_PurchaseGear_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayerGear_PurchaseGear_Statics::PlayerGear_eventPurchaseGear_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerGear_PurchaseGear_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerGear_PurchaseGear_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayerGear_PurchaseGear_Statics::PlayerGear_eventPurchaseGear_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayerGear_PurchaseGear()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerGear_PurchaseGear_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayerGear::execPurchaseGear)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_GearID);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PurchaseGear(Z_Param_Out_GearID);
	P_NATIVE_END;
}
// End Class UPlayerGear Function PurchaseGear

// Begin Class UPlayerGear Function UpgradeGear
struct Z_Construct_UFunction_UPlayerGear_UpgradeGear_Statics
{
	struct PlayerGear_eventUpgradeGear_Parms
	{
		FName GearID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Gear" },
		{ "ModuleRelativePath", "Public/PlayerGear.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GearID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_GearID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPlayerGear_UpgradeGear_Statics::NewProp_GearID = { "GearID", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerGear_eventUpgradeGear_Parms, GearID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GearID_MetaData), NewProp_GearID_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerGear_UpgradeGear_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerGear_UpgradeGear_Statics::NewProp_GearID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerGear_UpgradeGear_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerGear_UpgradeGear_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerGear, nullptr, "UpgradeGear", nullptr, nullptr, Z_Construct_UFunction_UPlayerGear_UpgradeGear_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerGear_UpgradeGear_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayerGear_UpgradeGear_Statics::PlayerGear_eventUpgradeGear_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerGear_UpgradeGear_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerGear_UpgradeGear_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayerGear_UpgradeGear_Statics::PlayerGear_eventUpgradeGear_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayerGear_UpgradeGear()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerGear_UpgradeGear_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayerGear::execUpgradeGear)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_GearID);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpgradeGear(Z_Param_Out_GearID);
	P_NATIVE_END;
}
// End Class UPlayerGear Function UpgradeGear

// Begin Class UPlayerGear
void UPlayerGear::StaticRegisterNativesUPlayerGear()
{
	UClass* Class = UPlayerGear::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "FindGearIndex", &UPlayerGear::execFindGearIndex },
		{ "PurchaseGear", &UPlayerGear::execPurchaseGear },
		{ "UpgradeGear", &UPlayerGear::execUpgradeGear },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlayerGear);
UClass* Z_Construct_UClass_UPlayerGear_NoRegister()
{
	return UPlayerGear::StaticClass();
}
struct Z_Construct_UClass_UPlayerGear_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "PlayerGear.h" },
		{ "ModuleRelativePath", "Public/PlayerGear.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Gear_MetaData[] = {
		{ "Category", "Gear" },
		{ "ModuleRelativePath", "Public/PlayerGear.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Gear_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Gear;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlayerGear_FindGearIndex, "FindGearIndex" }, // 2696980022
		{ &Z_Construct_UFunction_UPlayerGear_PurchaseGear, "PurchaseGear" }, // 1186907829
		{ &Z_Construct_UFunction_UPlayerGear_UpgradeGear, "UpgradeGear" }, // 1331321306
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerGear>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPlayerGear_Statics::NewProp_Gear_Inner = { "Gear", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGear, METADATA_PARAMS(0, nullptr) }; // 2491838566
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPlayerGear_Statics::NewProp_Gear = { "Gear", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerGear, Gear), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Gear_MetaData), NewProp_Gear_MetaData) }; // 2491838566
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayerGear_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerGear_Statics::NewProp_Gear_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerGear_Statics::NewProp_Gear,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerGear_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPlayerGear_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Game,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerGear_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayerGear_Statics::ClassParams = {
	&UPlayerGear::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UPlayerGear_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerGear_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerGear_Statics::Class_MetaDataParams), Z_Construct_UClass_UPlayerGear_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPlayerGear()
{
	if (!Z_Registration_Info_UClass_UPlayerGear.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayerGear.OuterSingleton, Z_Construct_UClass_UPlayerGear_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPlayerGear.OuterSingleton;
}
template<> GAME_API UClass* StaticClass<UPlayerGear>()
{
	return UPlayerGear::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerGear);
UPlayerGear::~UPlayerGear() {}
// End Class UPlayerGear

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_2304613_Documents_GitHub_Game_Game_Source_Game_Public_PlayerGear_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EGearType_StaticEnum, TEXT("EGearType"), &Z_Registration_Info_UEnum_EGearType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 401727809U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FGearUpgradeLevels::StaticStruct, Z_Construct_UScriptStruct_FGearUpgradeLevels_Statics::NewStructOps, TEXT("GearUpgradeLevels"), &Z_Registration_Info_UScriptStruct_GearUpgradeLevels, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGearUpgradeLevels), 1657191248U) },
		{ FGear::StaticStruct, Z_Construct_UScriptStruct_FGear_Statics::NewStructOps, TEXT("Gear"), &Z_Registration_Info_UScriptStruct_Gear, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGear), 2491838566U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPlayerGear, UPlayerGear::StaticClass, TEXT("UPlayerGear"), &Z_Registration_Info_UClass_UPlayerGear, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayerGear), 686838693U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_2304613_Documents_GitHub_Game_Game_Source_Game_Public_PlayerGear_h_2331618829(TEXT("/Script/Game"),
	Z_CompiledInDeferFile_FID_Users_2304613_Documents_GitHub_Game_Game_Source_Game_Public_PlayerGear_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_2304613_Documents_GitHub_Game_Game_Source_Game_Public_PlayerGear_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_2304613_Documents_GitHub_Game_Game_Source_Game_Public_PlayerGear_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_2304613_Documents_GitHub_Game_Game_Source_Game_Public_PlayerGear_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Users_2304613_Documents_GitHub_Game_Game_Source_Game_Public_PlayerGear_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_2304613_Documents_GitHub_Game_Game_Source_Game_Public_PlayerGear_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

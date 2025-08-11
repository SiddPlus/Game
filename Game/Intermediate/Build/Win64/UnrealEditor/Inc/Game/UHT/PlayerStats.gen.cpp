// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Game/Public/PlayerStats.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerStats() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
GAME_API UClass* Z_Construct_UClass_UPlayerStats();
GAME_API UClass* Z_Construct_UClass_UPlayerStats_NoRegister();
GAME_API UScriptStruct* Z_Construct_UScriptStruct_FUpgradeTierData();
UPackage* Z_Construct_UPackage__Script_Game();
// End Cross Module References

// Begin ScriptStruct FUpgradeTierData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_UpgradeTierData;
class UScriptStruct* FUpgradeTierData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_UpgradeTierData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_UpgradeTierData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUpgradeTierData, (UObject*)Z_Construct_UPackage__Script_Game(), TEXT("UpgradeTierData"));
	}
	return Z_Registration_Info_UScriptStruct_UpgradeTierData.OuterSingleton;
}
template<> GAME_API UScriptStruct* StaticStruct<FUpgradeTierData>()
{
	return FUpgradeTierData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FUpgradeTierData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PlayerStats.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerLevelRequirement_MetaData[] = {
		{ "Category", "Upgrade Tier" },
		{ "ModuleRelativePath", "Public/PlayerStats.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CostGold_MetaData[] = {
		{ "Category", "Upgrade Tier" },
		{ "ModuleRelativePath", "Public/PlayerStats.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StatIncreaseAmount_MetaData[] = {
		{ "Category", "Upgrade Tier" },
		{ "ModuleRelativePath", "Public/PlayerStats.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_PlayerLevelRequirement;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CostGold;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StatIncreaseAmount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUpgradeTierData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FUpgradeTierData_Statics::NewProp_PlayerLevelRequirement = { "PlayerLevelRequirement", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUpgradeTierData, PlayerLevelRequirement), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerLevelRequirement_MetaData), NewProp_PlayerLevelRequirement_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FUpgradeTierData_Statics::NewProp_CostGold = { "CostGold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUpgradeTierData, CostGold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CostGold_MetaData), NewProp_CostGold_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FUpgradeTierData_Statics::NewProp_StatIncreaseAmount = { "StatIncreaseAmount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUpgradeTierData, StatIncreaseAmount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StatIncreaseAmount_MetaData), NewProp_StatIncreaseAmount_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUpgradeTierData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUpgradeTierData_Statics::NewProp_PlayerLevelRequirement,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUpgradeTierData_Statics::NewProp_CostGold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUpgradeTierData_Statics::NewProp_StatIncreaseAmount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUpgradeTierData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUpgradeTierData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Game,
	nullptr,
	&NewStructOps,
	"UpgradeTierData",
	Z_Construct_UScriptStruct_FUpgradeTierData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUpgradeTierData_Statics::PropPointers),
	sizeof(FUpgradeTierData),
	alignof(FUpgradeTierData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUpgradeTierData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FUpgradeTierData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FUpgradeTierData()
{
	if (!Z_Registration_Info_UScriptStruct_UpgradeTierData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_UpgradeTierData.InnerSingleton, Z_Construct_UScriptStruct_FUpgradeTierData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_UpgradeTierData.InnerSingleton;
}
// End ScriptStruct FUpgradeTierData

// Begin Class UPlayerStats Function DecreaseHealth
struct Z_Construct_UFunction_UPlayerStats_DecreaseHealth_Statics
{
	struct PlayerStats_eventDecreaseHealth_Parms
	{
		float Amount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Player Stats|Health" },
		{ "ModuleRelativePath", "Public/PlayerStats.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Amount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPlayerStats_DecreaseHealth_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerStats_eventDecreaseHealth_Parms, Amount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerStats_DecreaseHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerStats_DecreaseHealth_Statics::NewProp_Amount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerStats_DecreaseHealth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerStats_DecreaseHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerStats, nullptr, "DecreaseHealth", nullptr, nullptr, Z_Construct_UFunction_UPlayerStats_DecreaseHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerStats_DecreaseHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayerStats_DecreaseHealth_Statics::PlayerStats_eventDecreaseHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerStats_DecreaseHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerStats_DecreaseHealth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayerStats_DecreaseHealth_Statics::PlayerStats_eventDecreaseHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayerStats_DecreaseHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerStats_DecreaseHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayerStats::execDecreaseHealth)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Amount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DecreaseHealth(Z_Param_Amount);
	P_NATIVE_END;
}
// End Class UPlayerStats Function DecreaseHealth

// Begin Class UPlayerStats Function DecreaseStamina
struct Z_Construct_UFunction_UPlayerStats_DecreaseStamina_Statics
{
	struct PlayerStats_eventDecreaseStamina_Parms
	{
		float Amount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Player Stats|Stamina" },
		{ "ModuleRelativePath", "Public/PlayerStats.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Amount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPlayerStats_DecreaseStamina_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerStats_eventDecreaseStamina_Parms, Amount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerStats_DecreaseStamina_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerStats_DecreaseStamina_Statics::NewProp_Amount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerStats_DecreaseStamina_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerStats_DecreaseStamina_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerStats, nullptr, "DecreaseStamina", nullptr, nullptr, Z_Construct_UFunction_UPlayerStats_DecreaseStamina_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerStats_DecreaseStamina_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayerStats_DecreaseStamina_Statics::PlayerStats_eventDecreaseStamina_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerStats_DecreaseStamina_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerStats_DecreaseStamina_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayerStats_DecreaseStamina_Statics::PlayerStats_eventDecreaseStamina_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayerStats_DecreaseStamina()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerStats_DecreaseStamina_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayerStats::execDecreaseStamina)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Amount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DecreaseStamina(Z_Param_Amount);
	P_NATIVE_END;
}
// End Class UPlayerStats Function DecreaseStamina

// Begin Class UPlayerStats Function DecreaseStaminaDrain
struct Z_Construct_UFunction_UPlayerStats_DecreaseStaminaDrain_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Player Stats|Modifiers|Upgrades" },
		{ "ModuleRelativePath", "Public/PlayerStats.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerStats_DecreaseStaminaDrain_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerStats, nullptr, "DecreaseStaminaDrain", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerStats_DecreaseStaminaDrain_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerStats_DecreaseStaminaDrain_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UPlayerStats_DecreaseStaminaDrain()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerStats_DecreaseStaminaDrain_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayerStats::execDecreaseStaminaDrain)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DecreaseStaminaDrain();
	P_NATIVE_END;
}
// End Class UPlayerStats Function DecreaseStaminaDrain

// Begin Class UPlayerStats Function IncreaseGold
struct Z_Construct_UFunction_UPlayerStats_IncreaseGold_Statics
{
	struct PlayerStats_eventIncreaseGold_Parms
	{
		int32 Amount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Player Stats|Currency" },
		{ "ModuleRelativePath", "Public/PlayerStats.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Amount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPlayerStats_IncreaseGold_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerStats_eventIncreaseGold_Parms, Amount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerStats_IncreaseGold_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerStats_IncreaseGold_Statics::NewProp_Amount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerStats_IncreaseGold_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerStats_IncreaseGold_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerStats, nullptr, "IncreaseGold", nullptr, nullptr, Z_Construct_UFunction_UPlayerStats_IncreaseGold_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerStats_IncreaseGold_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayerStats_IncreaseGold_Statics::PlayerStats_eventIncreaseGold_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerStats_IncreaseGold_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerStats_IncreaseGold_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayerStats_IncreaseGold_Statics::PlayerStats_eventIncreaseGold_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayerStats_IncreaseGold()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerStats_IncreaseGold_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayerStats::execIncreaseGold)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Amount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->IncreaseGold(Z_Param_Amount);
	P_NATIVE_END;
}
// End Class UPlayerStats Function IncreaseGold

// Begin Class UPlayerStats Function IncreaseHealth
struct Z_Construct_UFunction_UPlayerStats_IncreaseHealth_Statics
{
	struct PlayerStats_eventIncreaseHealth_Parms
	{
		float Amount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Player Stats|Health" },
		{ "ModuleRelativePath", "Public/PlayerStats.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Amount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPlayerStats_IncreaseHealth_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerStats_eventIncreaseHealth_Parms, Amount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerStats_IncreaseHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerStats_IncreaseHealth_Statics::NewProp_Amount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerStats_IncreaseHealth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerStats_IncreaseHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerStats, nullptr, "IncreaseHealth", nullptr, nullptr, Z_Construct_UFunction_UPlayerStats_IncreaseHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerStats_IncreaseHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayerStats_IncreaseHealth_Statics::PlayerStats_eventIncreaseHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerStats_IncreaseHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerStats_IncreaseHealth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayerStats_IncreaseHealth_Statics::PlayerStats_eventIncreaseHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayerStats_IncreaseHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerStats_IncreaseHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayerStats::execIncreaseHealth)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Amount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->IncreaseHealth(Z_Param_Amount);
	P_NATIVE_END;
}
// End Class UPlayerStats Function IncreaseHealth

// Begin Class UPlayerStats Function IncreaseStamina
struct Z_Construct_UFunction_UPlayerStats_IncreaseStamina_Statics
{
	struct PlayerStats_eventIncreaseStamina_Parms
	{
		float Amount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Player Stats|Stamina" },
		{ "ModuleRelativePath", "Public/PlayerStats.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Amount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPlayerStats_IncreaseStamina_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerStats_eventIncreaseStamina_Parms, Amount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerStats_IncreaseStamina_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerStats_IncreaseStamina_Statics::NewProp_Amount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerStats_IncreaseStamina_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerStats_IncreaseStamina_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerStats, nullptr, "IncreaseStamina", nullptr, nullptr, Z_Construct_UFunction_UPlayerStats_IncreaseStamina_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerStats_IncreaseStamina_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayerStats_IncreaseStamina_Statics::PlayerStats_eventIncreaseStamina_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerStats_IncreaseStamina_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerStats_IncreaseStamina_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayerStats_IncreaseStamina_Statics::PlayerStats_eventIncreaseStamina_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayerStats_IncreaseStamina()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerStats_IncreaseStamina_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayerStats::execIncreaseStamina)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Amount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->IncreaseStamina(Z_Param_Amount);
	P_NATIVE_END;
}
// End Class UPlayerStats Function IncreaseStamina

// Begin Class UPlayerStats Function IncreaseXP_Level
struct Z_Construct_UFunction_UPlayerStats_IncreaseXP_Level_Statics
{
	struct PlayerStats_eventIncreaseXP_Level_Parms
	{
		int32 Amount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Player Stats|Progression" },
		{ "ModuleRelativePath", "Public/PlayerStats.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Amount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPlayerStats_IncreaseXP_Level_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerStats_eventIncreaseXP_Level_Parms, Amount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerStats_IncreaseXP_Level_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerStats_IncreaseXP_Level_Statics::NewProp_Amount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerStats_IncreaseXP_Level_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerStats_IncreaseXP_Level_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerStats, nullptr, "IncreaseXP_Level", nullptr, nullptr, Z_Construct_UFunction_UPlayerStats_IncreaseXP_Level_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerStats_IncreaseXP_Level_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayerStats_IncreaseXP_Level_Statics::PlayerStats_eventIncreaseXP_Level_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerStats_IncreaseXP_Level_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerStats_IncreaseXP_Level_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayerStats_IncreaseXP_Level_Statics::PlayerStats_eventIncreaseXP_Level_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayerStats_IncreaseXP_Level()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerStats_IncreaseXP_Level_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayerStats::execIncreaseXP_Level)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Amount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->IncreaseXP_Level(Z_Param_Amount);
	P_NATIVE_END;
}
// End Class UPlayerStats Function IncreaseXP_Level

// Begin Class UPlayerStats Function TransferCurrentGoldToBank
struct Z_Construct_UFunction_UPlayerStats_TransferCurrentGoldToBank_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Player Stats|Currency" },
		{ "ModuleRelativePath", "Public/PlayerStats.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerStats_TransferCurrentGoldToBank_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerStats, nullptr, "TransferCurrentGoldToBank", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerStats_TransferCurrentGoldToBank_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerStats_TransferCurrentGoldToBank_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UPlayerStats_TransferCurrentGoldToBank()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerStats_TransferCurrentGoldToBank_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayerStats::execTransferCurrentGoldToBank)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TransferCurrentGoldToBank();
	P_NATIVE_END;
}
// End Class UPlayerStats Function TransferCurrentGoldToBank

// Begin Class UPlayerStats Function UpgradeDamageMultiplier
struct Z_Construct_UFunction_UPlayerStats_UpgradeDamageMultiplier_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Player Stats|Modifiers|Upgrades" },
		{ "ModuleRelativePath", "Public/PlayerStats.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerStats_UpgradeDamageMultiplier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerStats, nullptr, "UpgradeDamageMultiplier", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerStats_UpgradeDamageMultiplier_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerStats_UpgradeDamageMultiplier_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UPlayerStats_UpgradeDamageMultiplier()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerStats_UpgradeDamageMultiplier_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayerStats::execUpgradeDamageMultiplier)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpgradeDamageMultiplier();
	P_NATIVE_END;
}
// End Class UPlayerStats Function UpgradeDamageMultiplier

// Begin Class UPlayerStats Function UpgradeHealthRegen
struct Z_Construct_UFunction_UPlayerStats_UpgradeHealthRegen_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Player Stats|Modifiers|Upgrades" },
		{ "ModuleRelativePath", "Public/PlayerStats.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerStats_UpgradeHealthRegen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerStats, nullptr, "UpgradeHealthRegen", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerStats_UpgradeHealthRegen_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerStats_UpgradeHealthRegen_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UPlayerStats_UpgradeHealthRegen()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerStats_UpgradeHealthRegen_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayerStats::execUpgradeHealthRegen)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpgradeHealthRegen();
	P_NATIVE_END;
}
// End Class UPlayerStats Function UpgradeHealthRegen

// Begin Class UPlayerStats Function UpgradeMaxHealth
struct Z_Construct_UFunction_UPlayerStats_UpgradeMaxHealth_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Player Stats|Health|Upgrades" },
		{ "ModuleRelativePath", "Public/PlayerStats.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerStats_UpgradeMaxHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerStats, nullptr, "UpgradeMaxHealth", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerStats_UpgradeMaxHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerStats_UpgradeMaxHealth_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UPlayerStats_UpgradeMaxHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerStats_UpgradeMaxHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayerStats::execUpgradeMaxHealth)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpgradeMaxHealth();
	P_NATIVE_END;
}
// End Class UPlayerStats Function UpgradeMaxHealth

// Begin Class UPlayerStats Function UpgradeMaxStamina
struct Z_Construct_UFunction_UPlayerStats_UpgradeMaxStamina_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Player Stats|Stamina|Upgrades" },
		{ "ModuleRelativePath", "Public/PlayerStats.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerStats_UpgradeMaxStamina_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerStats, nullptr, "UpgradeMaxStamina", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerStats_UpgradeMaxStamina_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerStats_UpgradeMaxStamina_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UPlayerStats_UpgradeMaxStamina()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerStats_UpgradeMaxStamina_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayerStats::execUpgradeMaxStamina)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpgradeMaxStamina();
	P_NATIVE_END;
}
// End Class UPlayerStats Function UpgradeMaxStamina

// Begin Class UPlayerStats Function UpgradeMovementSpeedMultiplier
struct Z_Construct_UFunction_UPlayerStats_UpgradeMovementSpeedMultiplier_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Player Stats|Modifiers|Upgrades" },
		{ "ModuleRelativePath", "Public/PlayerStats.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerStats_UpgradeMovementSpeedMultiplier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerStats, nullptr, "UpgradeMovementSpeedMultiplier", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerStats_UpgradeMovementSpeedMultiplier_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerStats_UpgradeMovementSpeedMultiplier_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UPlayerStats_UpgradeMovementSpeedMultiplier()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerStats_UpgradeMovementSpeedMultiplier_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayerStats::execUpgradeMovementSpeedMultiplier)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpgradeMovementSpeedMultiplier();
	P_NATIVE_END;
}
// End Class UPlayerStats Function UpgradeMovementSpeedMultiplier

// Begin Class UPlayerStats Function UpgradeStaminaRegen
struct Z_Construct_UFunction_UPlayerStats_UpgradeStaminaRegen_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Player Stats|Modifiers|Upgrades" },
		{ "ModuleRelativePath", "Public/PlayerStats.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerStats_UpgradeStaminaRegen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerStats, nullptr, "UpgradeStaminaRegen", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerStats_UpgradeStaminaRegen_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerStats_UpgradeStaminaRegen_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UPlayerStats_UpgradeStaminaRegen()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerStats_UpgradeStaminaRegen_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayerStats::execUpgradeStaminaRegen)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpgradeStaminaRegen();
	P_NATIVE_END;
}
// End Class UPlayerStats Function UpgradeStaminaRegen

// Begin Class UPlayerStats
void UPlayerStats::StaticRegisterNativesUPlayerStats()
{
	UClass* Class = UPlayerStats::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DecreaseHealth", &UPlayerStats::execDecreaseHealth },
		{ "DecreaseStamina", &UPlayerStats::execDecreaseStamina },
		{ "DecreaseStaminaDrain", &UPlayerStats::execDecreaseStaminaDrain },
		{ "IncreaseGold", &UPlayerStats::execIncreaseGold },
		{ "IncreaseHealth", &UPlayerStats::execIncreaseHealth },
		{ "IncreaseStamina", &UPlayerStats::execIncreaseStamina },
		{ "IncreaseXP_Level", &UPlayerStats::execIncreaseXP_Level },
		{ "TransferCurrentGoldToBank", &UPlayerStats::execTransferCurrentGoldToBank },
		{ "UpgradeDamageMultiplier", &UPlayerStats::execUpgradeDamageMultiplier },
		{ "UpgradeHealthRegen", &UPlayerStats::execUpgradeHealthRegen },
		{ "UpgradeMaxHealth", &UPlayerStats::execUpgradeMaxHealth },
		{ "UpgradeMaxStamina", &UPlayerStats::execUpgradeMaxStamina },
		{ "UpgradeMovementSpeedMultiplier", &UPlayerStats::execUpgradeMovementSpeedMultiplier },
		{ "UpgradeStaminaRegen", &UPlayerStats::execUpgradeStaminaRegen },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlayerStats);
UClass* Z_Construct_UClass_UPlayerStats_NoRegister()
{
	return UPlayerStats::StaticClass();
}
struct Z_Construct_UClass_UPlayerStats_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "PlayerStats.h" },
		{ "ModuleRelativePath", "Public/PlayerStats.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentHealth_MetaData[] = {
		{ "Category", "Player Stats|Health" },
		{ "ModuleRelativePath", "Public/PlayerStats.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[] = {
		{ "Category", "Player Stats|Health" },
		{ "ModuleRelativePath", "Public/PlayerStats.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentMaxHealthUpgradeLevel_MetaData[] = {
		{ "Category", "Player Stats|Health|Upgrades" },
		{ "ModuleRelativePath", "Public/PlayerStats.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealthUpgradeLevels_MetaData[] = {
		{ "Category", "Player Stats|Health|Upgrades" },
		{ "ModuleRelativePath", "Public/PlayerStats.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsPlayerDead_MetaData[] = {
		{ "Category", "Player Stats|Health" },
		{ "ModuleRelativePath", "Public/PlayerStats.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsPlayerInCombat_MetaData[] = {
		{ "Category", "Player Stats|Health" },
		{ "ModuleRelativePath", "Public/PlayerStats.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentStamina_MetaData[] = {
		{ "Category", "Player Stats|Stamina" },
		{ "ModuleRelativePath", "Public/PlayerStats.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxStamina_MetaData[] = {
		{ "Category", "Player Stats|Stamina" },
		{ "ModuleRelativePath", "Public/PlayerStats.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentMaxStaminaUpgradeLevel_MetaData[] = {
		{ "Category", "Player Stats|Stamina|Upgrades" },
		{ "ModuleRelativePath", "Public/PlayerStats.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxStaminaUpgradeLevels_MetaData[] = {
		{ "Category", "Player Stats|Stamina|Upgrades" },
		{ "ModuleRelativePath", "Public/PlayerStats.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HasStamina_MetaData[] = {
		{ "Category", "Player Stats|Stamina" },
		{ "ModuleRelativePath", "Public/PlayerStats.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentXP_MetaData[] = {
		{ "Category", "Player Stats|Progression" },
		{ "ModuleRelativePath", "Public/PlayerStats.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TempXP_MetaData[] = {
		{ "Category", "Player Stats|Progression" },
		{ "ModuleRelativePath", "Public/PlayerStats.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxXP_MetaData[] = {
		{ "Category", "Player Stats|Progression" },
		{ "ModuleRelativePath", "Public/PlayerStats.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentLevel_MetaData[] = {
		{ "Category", "Player Stats|Progression" },
		{ "ModuleRelativePath", "Public/PlayerStats.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxLevel_MetaData[] = {
		{ "Category", "Player Stats|Progression" },
		{ "ModuleRelativePath", "Public/PlayerStats.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentGold_MetaData[] = {
		{ "Category", "Player Stats|Currency" },
		{ "ModuleRelativePath", "Public/PlayerStats.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentGoldBank_MetaData[] = {
		{ "Category", "Player Stats|Currency" },
		{ "ModuleRelativePath", "Public/PlayerStats.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentUpgradePoints_MetaData[] = {
		{ "Category", "Player Stats|Upgrades" },
		{ "ModuleRelativePath", "Public/PlayerStats.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentDamageMultiplier_MetaData[] = {
		{ "Category", "Player Stats|Modifiers" },
		{ "ModuleRelativePath", "Public/PlayerStats.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentMovementSpeedMultiplier_MetaData[] = {
		{ "Category", "Player Stats|Modifiers" },
		{ "ModuleRelativePath", "Public/PlayerStats.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentHealthRegen_MetaData[] = {
		{ "Category", "Player Stats|Modifiers" },
		{ "ModuleRelativePath", "Public/PlayerStats.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentStaminaRegen_MetaData[] = {
		{ "Category", "Player Stats|Modifiers" },
		{ "ModuleRelativePath", "Public/PlayerStats.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentStaminaDrain_MetaData[] = {
		{ "Category", "Player Stats|Modifiers" },
		{ "ModuleRelativePath", "Public/PlayerStats.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentDamageMultiplierUpgradeLevel_MetaData[] = {
		{ "Category", "Player Stats|Modifiers|Upgrades" },
		{ "ModuleRelativePath", "Public/PlayerStats.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageMultiplierUpgradeLevels_MetaData[] = {
		{ "Category", "Player Stats|Modifiers|Upgrades" },
		{ "ModuleRelativePath", "Public/PlayerStats.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentMovementSpeedMultiplierUpgradeLevel_MetaData[] = {
		{ "Category", "Player Stats|Modifiers|Upgrades" },
		{ "ModuleRelativePath", "Public/PlayerStats.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementSpeedMultiplierUpgradeLevels_MetaData[] = {
		{ "Category", "Player Stats|Modifiers|Upgrades" },
		{ "ModuleRelativePath", "Public/PlayerStats.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentHealthRegenUpgradeLevel_MetaData[] = {
		{ "Category", "Player Stats|Modifiers|Upgrades" },
		{ "ModuleRelativePath", "Public/PlayerStats.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HealthRegenUpgradeLevels_MetaData[] = {
		{ "Category", "Player Stats|Modifiers|Upgrades" },
		{ "ModuleRelativePath", "Public/PlayerStats.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentStaminaRegenUpgradeLevel_MetaData[] = {
		{ "Category", "Player Stats|Modifiers|Upgrades" },
		{ "ModuleRelativePath", "Public/PlayerStats.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaminaRegenUpgradeLevels_MetaData[] = {
		{ "Category", "Player Stats|Modifiers|Upgrades" },
		{ "ModuleRelativePath", "Public/PlayerStats.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentStaminaDrainDrainLevel_MetaData[] = {
		{ "Category", "Player Stats|Modifiers|Upgrades" },
		{ "ModuleRelativePath", "Public/PlayerStats.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaminaDrainDrainLevels_MetaData[] = {
		{ "Category", "Player Stats|Modifiers|Upgrades" },
		{ "ModuleRelativePath", "Public/PlayerStats.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentHealth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHealth;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentMaxHealthUpgradeLevel;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaxHealthUpgradeLevels_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MaxHealthUpgradeLevels;
	static void NewProp_IsPlayerDead_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsPlayerDead;
	static void NewProp_IsPlayerInCombat_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsPlayerInCombat;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentStamina;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxStamina;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentMaxStaminaUpgradeLevel;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaxStaminaUpgradeLevels_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MaxStaminaUpgradeLevels;
	static void NewProp_HasStamina_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_HasStamina;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentXP;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TempXP;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxXP;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentLevel;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxLevel;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentGold;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentGoldBank;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentUpgradePoints;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentDamageMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentMovementSpeedMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentHealthRegen;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentStaminaRegen;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentStaminaDrain;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentDamageMultiplierUpgradeLevel;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DamageMultiplierUpgradeLevels_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DamageMultiplierUpgradeLevels;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentMovementSpeedMultiplierUpgradeLevel;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MovementSpeedMultiplierUpgradeLevels_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MovementSpeedMultiplierUpgradeLevels;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentHealthRegenUpgradeLevel;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HealthRegenUpgradeLevels_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_HealthRegenUpgradeLevels;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentStaminaRegenUpgradeLevel;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StaminaRegenUpgradeLevels_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_StaminaRegenUpgradeLevels;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentStaminaDrainDrainLevel;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StaminaDrainDrainLevels_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_StaminaDrainDrainLevels;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlayerStats_DecreaseHealth, "DecreaseHealth" }, // 2262543878
		{ &Z_Construct_UFunction_UPlayerStats_DecreaseStamina, "DecreaseStamina" }, // 3404809273
		{ &Z_Construct_UFunction_UPlayerStats_DecreaseStaminaDrain, "DecreaseStaminaDrain" }, // 1393073461
		{ &Z_Construct_UFunction_UPlayerStats_IncreaseGold, "IncreaseGold" }, // 1435822945
		{ &Z_Construct_UFunction_UPlayerStats_IncreaseHealth, "IncreaseHealth" }, // 787051984
		{ &Z_Construct_UFunction_UPlayerStats_IncreaseStamina, "IncreaseStamina" }, // 2038896406
		{ &Z_Construct_UFunction_UPlayerStats_IncreaseXP_Level, "IncreaseXP_Level" }, // 10541219
		{ &Z_Construct_UFunction_UPlayerStats_TransferCurrentGoldToBank, "TransferCurrentGoldToBank" }, // 701880558
		{ &Z_Construct_UFunction_UPlayerStats_UpgradeDamageMultiplier, "UpgradeDamageMultiplier" }, // 4204548222
		{ &Z_Construct_UFunction_UPlayerStats_UpgradeHealthRegen, "UpgradeHealthRegen" }, // 2084112767
		{ &Z_Construct_UFunction_UPlayerStats_UpgradeMaxHealth, "UpgradeMaxHealth" }, // 731302293
		{ &Z_Construct_UFunction_UPlayerStats_UpgradeMaxStamina, "UpgradeMaxStamina" }, // 4269326280
		{ &Z_Construct_UFunction_UPlayerStats_UpgradeMovementSpeedMultiplier, "UpgradeMovementSpeedMultiplier" }, // 431511906
		{ &Z_Construct_UFunction_UPlayerStats_UpgradeStaminaRegen, "UpgradeStaminaRegen" }, // 3362179213
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerStats>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerStats_Statics::NewProp_CurrentHealth = { "CurrentHealth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerStats, CurrentHealth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentHealth_MetaData), NewProp_CurrentHealth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerStats_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerStats, MaxHealth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxHealth_MetaData), NewProp_MaxHealth_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPlayerStats_Statics::NewProp_CurrentMaxHealthUpgradeLevel = { "CurrentMaxHealthUpgradeLevel", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerStats, CurrentMaxHealthUpgradeLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentMaxHealthUpgradeLevel_MetaData), NewProp_CurrentMaxHealthUpgradeLevel_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPlayerStats_Statics::NewProp_MaxHealthUpgradeLevels_Inner = { "MaxHealthUpgradeLevels", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FUpgradeTierData, METADATA_PARAMS(0, nullptr) }; // 3597153752
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPlayerStats_Statics::NewProp_MaxHealthUpgradeLevels = { "MaxHealthUpgradeLevels", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerStats, MaxHealthUpgradeLevels), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxHealthUpgradeLevels_MetaData), NewProp_MaxHealthUpgradeLevels_MetaData) }; // 3597153752
void Z_Construct_UClass_UPlayerStats_Statics::NewProp_IsPlayerDead_SetBit(void* Obj)
{
	((UPlayerStats*)Obj)->IsPlayerDead = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPlayerStats_Statics::NewProp_IsPlayerDead = { "IsPlayerDead", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPlayerStats), &Z_Construct_UClass_UPlayerStats_Statics::NewProp_IsPlayerDead_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsPlayerDead_MetaData), NewProp_IsPlayerDead_MetaData) };
void Z_Construct_UClass_UPlayerStats_Statics::NewProp_IsPlayerInCombat_SetBit(void* Obj)
{
	((UPlayerStats*)Obj)->IsPlayerInCombat = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPlayerStats_Statics::NewProp_IsPlayerInCombat = { "IsPlayerInCombat", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPlayerStats), &Z_Construct_UClass_UPlayerStats_Statics::NewProp_IsPlayerInCombat_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsPlayerInCombat_MetaData), NewProp_IsPlayerInCombat_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerStats_Statics::NewProp_CurrentStamina = { "CurrentStamina", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerStats, CurrentStamina), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentStamina_MetaData), NewProp_CurrentStamina_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerStats_Statics::NewProp_MaxStamina = { "MaxStamina", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerStats, MaxStamina), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxStamina_MetaData), NewProp_MaxStamina_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPlayerStats_Statics::NewProp_CurrentMaxStaminaUpgradeLevel = { "CurrentMaxStaminaUpgradeLevel", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerStats, CurrentMaxStaminaUpgradeLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentMaxStaminaUpgradeLevel_MetaData), NewProp_CurrentMaxStaminaUpgradeLevel_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPlayerStats_Statics::NewProp_MaxStaminaUpgradeLevels_Inner = { "MaxStaminaUpgradeLevels", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FUpgradeTierData, METADATA_PARAMS(0, nullptr) }; // 3597153752
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPlayerStats_Statics::NewProp_MaxStaminaUpgradeLevels = { "MaxStaminaUpgradeLevels", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerStats, MaxStaminaUpgradeLevels), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxStaminaUpgradeLevels_MetaData), NewProp_MaxStaminaUpgradeLevels_MetaData) }; // 3597153752
void Z_Construct_UClass_UPlayerStats_Statics::NewProp_HasStamina_SetBit(void* Obj)
{
	((UPlayerStats*)Obj)->HasStamina = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPlayerStats_Statics::NewProp_HasStamina = { "HasStamina", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPlayerStats), &Z_Construct_UClass_UPlayerStats_Statics::NewProp_HasStamina_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HasStamina_MetaData), NewProp_HasStamina_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPlayerStats_Statics::NewProp_CurrentXP = { "CurrentXP", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerStats, CurrentXP), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentXP_MetaData), NewProp_CurrentXP_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPlayerStats_Statics::NewProp_TempXP = { "TempXP", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerStats, TempXP), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TempXP_MetaData), NewProp_TempXP_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPlayerStats_Statics::NewProp_MaxXP = { "MaxXP", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerStats, MaxXP), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxXP_MetaData), NewProp_MaxXP_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPlayerStats_Statics::NewProp_CurrentLevel = { "CurrentLevel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerStats, CurrentLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentLevel_MetaData), NewProp_CurrentLevel_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPlayerStats_Statics::NewProp_MaxLevel = { "MaxLevel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerStats, MaxLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxLevel_MetaData), NewProp_MaxLevel_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPlayerStats_Statics::NewProp_CurrentGold = { "CurrentGold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerStats, CurrentGold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentGold_MetaData), NewProp_CurrentGold_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPlayerStats_Statics::NewProp_CurrentGoldBank = { "CurrentGoldBank", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerStats, CurrentGoldBank), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentGoldBank_MetaData), NewProp_CurrentGoldBank_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPlayerStats_Statics::NewProp_CurrentUpgradePoints = { "CurrentUpgradePoints", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerStats, CurrentUpgradePoints), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentUpgradePoints_MetaData), NewProp_CurrentUpgradePoints_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerStats_Statics::NewProp_CurrentDamageMultiplier = { "CurrentDamageMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerStats, CurrentDamageMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentDamageMultiplier_MetaData), NewProp_CurrentDamageMultiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerStats_Statics::NewProp_CurrentMovementSpeedMultiplier = { "CurrentMovementSpeedMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerStats, CurrentMovementSpeedMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentMovementSpeedMultiplier_MetaData), NewProp_CurrentMovementSpeedMultiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerStats_Statics::NewProp_CurrentHealthRegen = { "CurrentHealthRegen", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerStats, CurrentHealthRegen), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentHealthRegen_MetaData), NewProp_CurrentHealthRegen_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerStats_Statics::NewProp_CurrentStaminaRegen = { "CurrentStaminaRegen", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerStats, CurrentStaminaRegen), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentStaminaRegen_MetaData), NewProp_CurrentStaminaRegen_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerStats_Statics::NewProp_CurrentStaminaDrain = { "CurrentStaminaDrain", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerStats, CurrentStaminaDrain), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentStaminaDrain_MetaData), NewProp_CurrentStaminaDrain_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPlayerStats_Statics::NewProp_CurrentDamageMultiplierUpgradeLevel = { "CurrentDamageMultiplierUpgradeLevel", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerStats, CurrentDamageMultiplierUpgradeLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentDamageMultiplierUpgradeLevel_MetaData), NewProp_CurrentDamageMultiplierUpgradeLevel_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPlayerStats_Statics::NewProp_DamageMultiplierUpgradeLevels_Inner = { "DamageMultiplierUpgradeLevels", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FUpgradeTierData, METADATA_PARAMS(0, nullptr) }; // 3597153752
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPlayerStats_Statics::NewProp_DamageMultiplierUpgradeLevels = { "DamageMultiplierUpgradeLevels", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerStats, DamageMultiplierUpgradeLevels), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageMultiplierUpgradeLevels_MetaData), NewProp_DamageMultiplierUpgradeLevels_MetaData) }; // 3597153752
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPlayerStats_Statics::NewProp_CurrentMovementSpeedMultiplierUpgradeLevel = { "CurrentMovementSpeedMultiplierUpgradeLevel", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerStats, CurrentMovementSpeedMultiplierUpgradeLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentMovementSpeedMultiplierUpgradeLevel_MetaData), NewProp_CurrentMovementSpeedMultiplierUpgradeLevel_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPlayerStats_Statics::NewProp_MovementSpeedMultiplierUpgradeLevels_Inner = { "MovementSpeedMultiplierUpgradeLevels", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FUpgradeTierData, METADATA_PARAMS(0, nullptr) }; // 3597153752
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPlayerStats_Statics::NewProp_MovementSpeedMultiplierUpgradeLevels = { "MovementSpeedMultiplierUpgradeLevels", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerStats, MovementSpeedMultiplierUpgradeLevels), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementSpeedMultiplierUpgradeLevels_MetaData), NewProp_MovementSpeedMultiplierUpgradeLevels_MetaData) }; // 3597153752
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPlayerStats_Statics::NewProp_CurrentHealthRegenUpgradeLevel = { "CurrentHealthRegenUpgradeLevel", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerStats, CurrentHealthRegenUpgradeLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentHealthRegenUpgradeLevel_MetaData), NewProp_CurrentHealthRegenUpgradeLevel_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPlayerStats_Statics::NewProp_HealthRegenUpgradeLevels_Inner = { "HealthRegenUpgradeLevels", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FUpgradeTierData, METADATA_PARAMS(0, nullptr) }; // 3597153752
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPlayerStats_Statics::NewProp_HealthRegenUpgradeLevels = { "HealthRegenUpgradeLevels", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerStats, HealthRegenUpgradeLevels), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HealthRegenUpgradeLevels_MetaData), NewProp_HealthRegenUpgradeLevels_MetaData) }; // 3597153752
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPlayerStats_Statics::NewProp_CurrentStaminaRegenUpgradeLevel = { "CurrentStaminaRegenUpgradeLevel", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerStats, CurrentStaminaRegenUpgradeLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentStaminaRegenUpgradeLevel_MetaData), NewProp_CurrentStaminaRegenUpgradeLevel_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPlayerStats_Statics::NewProp_StaminaRegenUpgradeLevels_Inner = { "StaminaRegenUpgradeLevels", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FUpgradeTierData, METADATA_PARAMS(0, nullptr) }; // 3597153752
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPlayerStats_Statics::NewProp_StaminaRegenUpgradeLevels = { "StaminaRegenUpgradeLevels", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerStats, StaminaRegenUpgradeLevels), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaminaRegenUpgradeLevels_MetaData), NewProp_StaminaRegenUpgradeLevels_MetaData) }; // 3597153752
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPlayerStats_Statics::NewProp_CurrentStaminaDrainDrainLevel = { "CurrentStaminaDrainDrainLevel", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerStats, CurrentStaminaDrainDrainLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentStaminaDrainDrainLevel_MetaData), NewProp_CurrentStaminaDrainDrainLevel_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPlayerStats_Statics::NewProp_StaminaDrainDrainLevels_Inner = { "StaminaDrainDrainLevels", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FUpgradeTierData, METADATA_PARAMS(0, nullptr) }; // 3597153752
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPlayerStats_Statics::NewProp_StaminaDrainDrainLevels = { "StaminaDrainDrainLevels", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerStats, StaminaDrainDrainLevels), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaminaDrainDrainLevels_MetaData), NewProp_StaminaDrainDrainLevels_MetaData) }; // 3597153752
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayerStats_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerStats_Statics::NewProp_CurrentHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerStats_Statics::NewProp_MaxHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerStats_Statics::NewProp_CurrentMaxHealthUpgradeLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerStats_Statics::NewProp_MaxHealthUpgradeLevels_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerStats_Statics::NewProp_MaxHealthUpgradeLevels,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerStats_Statics::NewProp_IsPlayerDead,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerStats_Statics::NewProp_IsPlayerInCombat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerStats_Statics::NewProp_CurrentStamina,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerStats_Statics::NewProp_MaxStamina,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerStats_Statics::NewProp_CurrentMaxStaminaUpgradeLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerStats_Statics::NewProp_MaxStaminaUpgradeLevels_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerStats_Statics::NewProp_MaxStaminaUpgradeLevels,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerStats_Statics::NewProp_HasStamina,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerStats_Statics::NewProp_CurrentXP,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerStats_Statics::NewProp_TempXP,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerStats_Statics::NewProp_MaxXP,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerStats_Statics::NewProp_CurrentLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerStats_Statics::NewProp_MaxLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerStats_Statics::NewProp_CurrentGold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerStats_Statics::NewProp_CurrentGoldBank,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerStats_Statics::NewProp_CurrentUpgradePoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerStats_Statics::NewProp_CurrentDamageMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerStats_Statics::NewProp_CurrentMovementSpeedMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerStats_Statics::NewProp_CurrentHealthRegen,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerStats_Statics::NewProp_CurrentStaminaRegen,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerStats_Statics::NewProp_CurrentStaminaDrain,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerStats_Statics::NewProp_CurrentDamageMultiplierUpgradeLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerStats_Statics::NewProp_DamageMultiplierUpgradeLevels_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerStats_Statics::NewProp_DamageMultiplierUpgradeLevels,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerStats_Statics::NewProp_CurrentMovementSpeedMultiplierUpgradeLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerStats_Statics::NewProp_MovementSpeedMultiplierUpgradeLevels_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerStats_Statics::NewProp_MovementSpeedMultiplierUpgradeLevels,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerStats_Statics::NewProp_CurrentHealthRegenUpgradeLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerStats_Statics::NewProp_HealthRegenUpgradeLevels_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerStats_Statics::NewProp_HealthRegenUpgradeLevels,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerStats_Statics::NewProp_CurrentStaminaRegenUpgradeLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerStats_Statics::NewProp_StaminaRegenUpgradeLevels_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerStats_Statics::NewProp_StaminaRegenUpgradeLevels,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerStats_Statics::NewProp_CurrentStaminaDrainDrainLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerStats_Statics::NewProp_StaminaDrainDrainLevels_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerStats_Statics::NewProp_StaminaDrainDrainLevels,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerStats_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPlayerStats_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Game,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerStats_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayerStats_Statics::ClassParams = {
	&UPlayerStats::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UPlayerStats_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerStats_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerStats_Statics::Class_MetaDataParams), Z_Construct_UClass_UPlayerStats_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPlayerStats()
{
	if (!Z_Registration_Info_UClass_UPlayerStats.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayerStats.OuterSingleton, Z_Construct_UClass_UPlayerStats_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPlayerStats.OuterSingleton;
}
template<> GAME_API UClass* StaticClass<UPlayerStats>()
{
	return UPlayerStats::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerStats);
UPlayerStats::~UPlayerStats() {}
// End Class UPlayerStats

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_2304613_Documents_GitHub_Game_Game_Source_Game_Public_PlayerStats_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FUpgradeTierData::StaticStruct, Z_Construct_UScriptStruct_FUpgradeTierData_Statics::NewStructOps, TEXT("UpgradeTierData"), &Z_Registration_Info_UScriptStruct_UpgradeTierData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUpgradeTierData), 3597153752U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPlayerStats, UPlayerStats::StaticClass, TEXT("UPlayerStats"), &Z_Registration_Info_UClass_UPlayerStats, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayerStats), 3543225476U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_2304613_Documents_GitHub_Game_Game_Source_Game_Public_PlayerStats_h_1836031913(TEXT("/Script/Game"),
	Z_CompiledInDeferFile_FID_Users_2304613_Documents_GitHub_Game_Game_Source_Game_Public_PlayerStats_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_2304613_Documents_GitHub_Game_Game_Source_Game_Public_PlayerStats_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_2304613_Documents_GitHub_Game_Game_Source_Game_Public_PlayerStats_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_2304613_Documents_GitHub_Game_Game_Source_Game_Public_PlayerStats_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

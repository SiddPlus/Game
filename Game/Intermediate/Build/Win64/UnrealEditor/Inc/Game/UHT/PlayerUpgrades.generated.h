// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PlayerUpgrades.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAME_PlayerUpgrades_generated_h
#error "PlayerUpgrades.generated.h already included, missing '#pragma once' in PlayerUpgrades.h"
#endif
#define GAME_PlayerUpgrades_generated_h

#define FID_Users_2304613_Documents_GitHub_Game_Game_Source_Game_Public_PlayerUpgrades_h_11_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FUpgradeLevelData_Statics; \
	GAME_API static class UScriptStruct* StaticStruct();


template<> GAME_API UScriptStruct* StaticStruct<struct FUpgradeLevelData>();

#define FID_Users_2304613_Documents_GitHub_Game_Game_Source_Game_Public_PlayerUpgrades_h_26_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FUpgradeData_Statics; \
	GAME_API static class UScriptStruct* StaticStruct();


template<> GAME_API UScriptStruct* StaticStruct<struct FUpgradeData>();

#define FID_Users_2304613_Documents_GitHub_Game_Game_Source_Game_Public_PlayerUpgrades_h_59_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FUpgradeTree_Statics; \
	GAME_API static class UScriptStruct* StaticStruct();


template<> GAME_API UScriptStruct* StaticStruct<struct FUpgradeTree>();

#define FID_Users_2304613_Documents_GitHub_Game_Game_Source_Game_Public_PlayerUpgrades_h_73_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execUpgradeUpgrade); \
	DECLARE_FUNCTION(execPurchaseUpgrade); \
	DECLARE_FUNCTION(execFindUpgradeIndices);


#define FID_Users_2304613_Documents_GitHub_Game_Game_Source_Game_Public_PlayerUpgrades_h_73_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlayerUpgrades(); \
	friend struct Z_Construct_UClass_UPlayerUpgrades_Statics; \
public: \
	DECLARE_CLASS(UPlayerUpgrades, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Game"), NO_API) \
	DECLARE_SERIALIZER(UPlayerUpgrades)


#define FID_Users_2304613_Documents_GitHub_Game_Game_Source_Game_Public_PlayerUpgrades_h_73_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPlayerUpgrades(UPlayerUpgrades&&); \
	UPlayerUpgrades(const UPlayerUpgrades&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayerUpgrades); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayerUpgrades); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPlayerUpgrades) \
	NO_API virtual ~UPlayerUpgrades();


#define FID_Users_2304613_Documents_GitHub_Game_Game_Source_Game_Public_PlayerUpgrades_h_70_PROLOG
#define FID_Users_2304613_Documents_GitHub_Game_Game_Source_Game_Public_PlayerUpgrades_h_73_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_2304613_Documents_GitHub_Game_Game_Source_Game_Public_PlayerUpgrades_h_73_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_2304613_Documents_GitHub_Game_Game_Source_Game_Public_PlayerUpgrades_h_73_INCLASS_NO_PURE_DECLS \
	FID_Users_2304613_Documents_GitHub_Game_Game_Source_Game_Public_PlayerUpgrades_h_73_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAME_API UClass* StaticClass<class UPlayerUpgrades>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_2304613_Documents_GitHub_Game_Game_Source_Game_Public_PlayerUpgrades_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

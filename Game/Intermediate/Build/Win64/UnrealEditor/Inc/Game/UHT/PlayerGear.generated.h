// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PlayerGear.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAME_PlayerGear_generated_h
#error "PlayerGear.generated.h already included, missing '#pragma once' in PlayerGear.h"
#endif
#define GAME_PlayerGear_generated_h

#define FID_Users_2304613_Documents_GitHub_Game_Game_Source_Game_Public_PlayerGear_h_18_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGearUpgradeLevels_Statics; \
	GAME_API static class UScriptStruct* StaticStruct();


template<> GAME_API UScriptStruct* StaticStruct<struct FGearUpgradeLevels>();

#define FID_Users_2304613_Documents_GitHub_Game_Game_Source_Game_Public_PlayerGear_h_33_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGear_Statics; \
	GAME_API static class UScriptStruct* StaticStruct();


template<> GAME_API UScriptStruct* StaticStruct<struct FGear>();

#define FID_Users_2304613_Documents_GitHub_Game_Game_Source_Game_Public_PlayerGear_h_60_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execUpgradeGear); \
	DECLARE_FUNCTION(execPurchaseGear); \
	DECLARE_FUNCTION(execFindGearIndex);


#define FID_Users_2304613_Documents_GitHub_Game_Game_Source_Game_Public_PlayerGear_h_60_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlayerGear(); \
	friend struct Z_Construct_UClass_UPlayerGear_Statics; \
public: \
	DECLARE_CLASS(UPlayerGear, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Game"), NO_API) \
	DECLARE_SERIALIZER(UPlayerGear)


#define FID_Users_2304613_Documents_GitHub_Game_Game_Source_Game_Public_PlayerGear_h_60_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPlayerGear(UPlayerGear&&); \
	UPlayerGear(const UPlayerGear&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayerGear); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayerGear); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPlayerGear) \
	NO_API virtual ~UPlayerGear();


#define FID_Users_2304613_Documents_GitHub_Game_Game_Source_Game_Public_PlayerGear_h_57_PROLOG
#define FID_Users_2304613_Documents_GitHub_Game_Game_Source_Game_Public_PlayerGear_h_60_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_2304613_Documents_GitHub_Game_Game_Source_Game_Public_PlayerGear_h_60_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_2304613_Documents_GitHub_Game_Game_Source_Game_Public_PlayerGear_h_60_INCLASS_NO_PURE_DECLS \
	FID_Users_2304613_Documents_GitHub_Game_Game_Source_Game_Public_PlayerGear_h_60_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAME_API UClass* StaticClass<class UPlayerGear>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_2304613_Documents_GitHub_Game_Game_Source_Game_Public_PlayerGear_h


#define FOREACH_ENUM_EGEARTYPE(op) \
	op(EGearType::Weapon) \
	op(EGearType::Armor) 

enum class EGearType : uint8;
template<> struct TIsUEnumClass<EGearType> { enum { Value = true }; };
template<> GAME_API UEnum* StaticEnum<EGearType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS

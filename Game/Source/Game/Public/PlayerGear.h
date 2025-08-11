#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include"PlayerStats.h"
#include "PlayerGear.generated.h"

UENUM(BlueprintType)
enum class EGearType : uint8
{
	Weapon,
	Armor
};

USTRUCT(BlueprintType)
struct FGearUpgradeLevels
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Gear Upgrade")
	int PlayerLevelRequirement;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Gear Upgrade")
	int UpgradeCost;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Gear Upgrade")
	FText BonusText;
};

USTRUCT(BlueprintType)
struct FGear
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Gear Data")
	EGearType GearType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Gear Data")
	FText GearName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Gear Data")
	int PlayerLevelRequirement;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Gear Data")
	int PurchaseCost;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Gear Data")
	bool IsPurchased;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Gear Data")
	int CurrentLevel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Gear Data")
	TArray<FGearUpgradeLevels> UpgradeLevels;
};


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class GAME_API UPlayerGear : public UActorComponent
{
	GENERATED_BODY()

public:	
	UPlayerGear();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Gear")
	TArray<FGear> Gears;
	
	UFUNCTION(BlueprintPure, Category = "Gear")
	bool FindGearIndex(const FName& GearID, int& OutGearIndex);
	UFUNCTION(BlueprintCallable, Category = "Gear")
	void PurchaseGear(const FName& GearID);
	UFUNCTION(BlueprintCallable, Category = "Gear")
	void UpgradeGear(const FName& GearID);
};

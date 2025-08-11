#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include"PlayerStats.h"
#include "PlayerUpgrades.generated.h"

USTRUCT(BlueprintType)
struct FUpgradeLevelData
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Level Upgrades")
	int PlayerLevelRequirement;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Level Upgrades")
	int UpgradeCost;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Level Upgrades")
	FText BonusText;
};

USTRUCT(BlueprintType)
struct FUpgradeData
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Upgrade")
	FText UpgradeName;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Upgrade")
	FText UpgradeDescription;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Upgrade")
	FName UpgradeID;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Upgrade")
	FName PrerequisiteUpgradeID;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Upgrade Stats")
	int32 PlayerLevelRequirement;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Upgrade")
	int PurchaseCost;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Upgrade")
	bool IsPurchased = false;
    
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Upgrade")
	int CurrentLevel = 0;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Upgrade")
	TArray<FUpgradeLevelData> UpgradeLevels;
};

USTRUCT(BlueprintType)
struct FUpgradeTree
{
	GENERATED_BODY()

	/*UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Upgrade Tree")
	int TreeID;*/
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Upgrade Tree")
	FText TreeName;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Upgrade Tree")
	TArray<FUpgradeData> Upgrades;
};

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class GAME_API UPlayerUpgrades : public UActorComponent
{
	GENERATED_BODY()

public:	
	UPlayerUpgrades();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Upgrades")
	TArray<FUpgradeTree> UpgradeTrees;
	
	UFUNCTION(BlueprintPure, Category = "Upgrades")
	bool FindUpgradeIndices(const FName& TreeID, const FName& UpgradeID, int32& OutTreeIndex, int32& OutUpgradeIndex);
	UFUNCTION(BlueprintCallable, Category = "Upgrades)")
	void PurchaseUpgrade(const FName& TreeID, const FName& UpgradeID);
	UFUNCTION(BlueprintCallable, Category = "Upgrades")
	void UpgradeUpgrade(const FName& TreeID, const FName& UpgradeID);

		
};

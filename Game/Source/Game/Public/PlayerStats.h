#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PlayerStats.generated.h"

USTRUCT(BlueprintType)
struct FUpgradeTierData
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Upgrade Tier")
	int PlayerLevelRequirement;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Upgrade Tier")
	int CostGold;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Upgrade Tier")
	float StatIncreaseAmount;
};

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class GAME_API UPlayerStats : public UActorComponent
{
	GENERATED_BODY()

public:	
	UPlayerStats();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player Stats|Health")
	float CurrentHealth;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player Stats|Health")
	float MaxHealth = 100;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Player Stats|Health|Upgrades")
	int CurrentMaxHealthUpgradeLevel = 1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player Stats|Health|Upgrades")
	TArray<FUpgradeTierData> MaxHealthUpgradeLevels;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Player Stats|Health")
	bool IsPlayerDead;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Player Stats|Health")
	bool IsPlayerInCombat;

	UFUNCTION(BlueprintCallable, Category = "Player Stats|Health")
	void IncreaseHealth(float Amount);
	UFUNCTION(BlueprintCallable, Category = "Player Stats|Health")
	void DecreaseHealth(float Amount);
	UFUNCTION(BlueprintCallable, Category = "Player Stats|Health|Upgrades")
	void UpgradeMaxHealth();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player Stats|Stamina")
	float CurrentStamina;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player Stats|Stamina")
	float MaxStamina = 100;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Player Stats|Stamina|Upgrades")
	int CurrentMaxStaminaUpgradeLevel = 1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player Stats|Stamina|Upgrades")
	TArray<FUpgradeTierData> MaxStaminaUpgradeLevels;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Player Stats|Stamina")
	bool HasStamina;

	UFUNCTION(BlueprintCallable, Category = "Player Stats|Stamina")
	void IncreaseStamina(float Amount);
	UFUNCTION(BlueprintCallable, Category = "Player Stats|Stamina")
	void DecreaseStamina(float Amount);
	UFUNCTION(BlueprintCallable, Category = "Player Stats|Stamina|Upgrades")
	void UpgradeMaxStamina();


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player Stats|Progression")
	int CurrentXP = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player Stats|Progression")
	int TempXP = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player Stats|Progression")
	int MaxXP = 100;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player Stats|Progression")
	int CurrentLevel = 1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player Stats|Progression")
	int MaxLevel = 10;

	UFUNCTION(BlueprintCallable, Category = "Player Stats|Progression")
	void IncreaseXP_Level(int Amount);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player Stats|Currency")
	int CurrentGold = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player Stats|Currency")
	int CurrentGoldBank = 0;

	UFUNCTION(BlueprintCallable, Category = "Player Stats|Currency")
	void IncreaseGold(int Amount);
	UFUNCTION(BlueprintCallable, Category = "Player Stats|Currency")
	void TransferCurrentGoldToBank();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player Stats|Upgrades")
	int CurrentUpgradePoints = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player Stats|Modifiers")
	float CurrentDamageMultiplier = 1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player Stats|Modifiers")
	float CurrentMovementSpeedMultiplier = 2;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player Stats|Modifiers")
	float CurrentHealthRegen = 1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player Stats|Modifiers")
	float CurrentStaminaRegen = 1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player Stats|Modifiers")
	float CurrentStaminaDrain = 3;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Player Stats|Modifiers|Upgrades")
	int CurrentDamageMultiplierUpgradeLevel = 1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player Stats|Modifiers|Upgrades")
	TArray<FUpgradeTierData> DamageMultiplierUpgradeLevels;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Player Stats|Modifiers|Upgrades")
	int CurrentMovementSpeedMultiplierUpgradeLevel = 1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player Stats|Modifiers|Upgrades")
	TArray<FUpgradeTierData> MovementSpeedMultiplierUpgradeLevels;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Player Stats|Modifiers|Upgrades")
	int CurrentHealthRegenUpgradeLevel = 1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player Stats|Modifiers|Upgrades")
	TArray<FUpgradeTierData> HealthRegenUpgradeLevels;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Player Stats|Modifiers|Upgrades")
	int CurrentStaminaRegenUpgradeLevel = 1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player Stats|Modifiers|Upgrades")
	TArray<FUpgradeTierData> StaminaRegenUpgradeLevels;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Player Stats|Modifiers|Upgrades")
	int CurrentStaminaDrainDrainLevel = 1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player Stats|Modifiers|Upgrades")
	TArray<FUpgradeTierData> StaminaDrainDrainLevels;
	
	UFUNCTION(BlueprintCallable, Category = "Player Stats|Modifiers|Upgrades")
	void UpgradeDamageMultiplier();
	UFUNCTION(BlueprintCallable, Category = "Player Stats|Modifiers|Upgrades")
	void UpgradeMovementSpeedMultiplier();
	UFUNCTION(BlueprintCallable, Category = "Player Stats|Modifiers|Upgrades")
	void UpgradeHealthRegen();
	UFUNCTION(BlueprintCallable, Category = "Player Stats|Modifiers|Upgrades")
	void UpgradeStaminaRegen();
	UFUNCTION(BlueprintCallable, Category = "Player Stats|Modifiers|Upgrades")
	void DecreaseStaminaDrain();

};

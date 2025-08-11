#include "PlayerStats.h"

UPlayerStats::UPlayerStats()
{
	PrimaryComponentTick.bCanEverTick = true;
}

void UPlayerStats::BeginPlay()
{
	Super::BeginPlay();

	IsPlayerDead = false;
	HasStamina = true;
	IsPlayerInCombat = false;

	CurrentHealth = MaxHealth;
	CurrentStamina = MaxStamina;
}

void UPlayerStats::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	GEngine->AddOnScreenDebugMessage(-1, 0.f, FColor::Yellow, FString::Printf(TEXT("Current Stamina: %f"), CurrentStamina));
	
	if (CurrentHealth < MaxHealth && !IsPlayerDead && !IsPlayerInCombat && CurrentHealthRegen > 0)
	{
		IncreaseHealth(CurrentHealthRegen * DeltaTime);
	}
}

void UPlayerStats::IncreaseHealth(float Amount)
{
	if (CurrentHealth < MaxHealth)
	{
		CurrentHealth += Amount;
		if (CurrentHealth > MaxHealth)
		{
			CurrentHealth = MaxHealth;
		}
	}
}

void UPlayerStats::DecreaseHealth(float Amount)
{
	if (!(CurrentHealth <= 0))
	{
		CurrentHealth -= Amount;
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Player is dead!")); // Player is dead
		IsPlayerDead = true;
		CurrentGold = 0;
	}
}

void UPlayerStats::UpgradeMaxHealth()
{
	if (CurrentMaxHealthUpgradeLevel < MaxHealthUpgradeLevels.Num())
	{
		const FUpgradeTierData& UpgradeData = MaxHealthUpgradeLevels[CurrentMaxHealthUpgradeLevel];
		if (CurrentLevel >= UpgradeData.PlayerLevelRequirement && CurrentGoldBank >= UpgradeData.CostGold)
		{
			CurrentGoldBank -= UpgradeData.CostGold;
			MaxHealth += UpgradeData.StatIncreaseAmount;
			CurrentMaxHealthUpgradeLevel++;
			CurrentHealth = MaxHealth;
		}
	}
}

void UPlayerStats::IncreaseStamina(float Amount)
{
	if (CurrentStamina < MaxStamina)
	{
		CurrentStamina += Amount;
		if (CurrentStamina > MaxStamina)
		{
			CurrentStamina = MaxStamina;
		}
	}
	if (CurrentStamina > 0)// maybe CurrentStamina == MaxSamina
	{
		HasStamina = true;
	}
}

void UPlayerStats::DecreaseStamina(float Amount)
{
	if (!(CurrentStamina <= 0))
	{
		CurrentStamina -= Amount;
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Player can't run")); // Player can't run
		HasStamina = false;
	}
}

void UPlayerStats::UpgradeMaxStamina()
{
	if (CurrentMaxStaminaUpgradeLevel < MaxStaminaUpgradeLevels.Num())
	{
		const FUpgradeTierData& UpgradeData = MaxStaminaUpgradeLevels[CurrentMaxStaminaUpgradeLevel];
		if (CurrentLevel >= UpgradeData.PlayerLevelRequirement && CurrentGoldBank >= UpgradeData.CostGold)
		{
			CurrentGoldBank -= UpgradeData.CostGold;
			MaxStamina += UpgradeData.StatIncreaseAmount;
			CurrentMaxStaminaUpgradeLevel++;
			CurrentStamina = MaxStamina;
		}
	}
}

void UPlayerStats::IncreaseXP_Level(int Amount)
{
	CurrentXP += Amount;

	if (CurrentXP >= MaxXP)
	{
		TempXP = CurrentXP - MaxXP;
		
		CurrentLevel++;
		if (CurrentLevel > MaxLevel)
		{
			CurrentLevel = MaxLevel;
		}
		else
		{
			CurrentUpgradePoints += CurrentLevel;
		}
	
		CurrentXP = TempXP;
		MaxXP *= CurrentLevel;
	}
}

void UPlayerStats::IncreaseGold(int Amount)
{
	CurrentGold += Amount;
}

void UPlayerStats::TransferCurrentGoldToBank()
{
	CurrentGoldBank += CurrentGold;
	CurrentGold = 0;
}

void UPlayerStats::UpgradeDamageMultiplier()
{
	if (CurrentDamageMultiplierUpgradeLevel < DamageMultiplierUpgradeLevels.Num())
	{
		const FUpgradeTierData& UpgradeData = DamageMultiplierUpgradeLevels[CurrentDamageMultiplierUpgradeLevel];
		if (CurrentLevel >= UpgradeData.PlayerLevelRequirement && CurrentGoldBank >= UpgradeData.CostGold)
		{
			CurrentGoldBank -= UpgradeData.CostGold;
			CurrentDamageMultiplier += UpgradeData.StatIncreaseAmount;
			CurrentDamageMultiplierUpgradeLevel++;
		}
	}
}

void UPlayerStats::UpgradeMovementSpeedMultiplier()
{
	if (CurrentMovementSpeedMultiplierUpgradeLevel < MovementSpeedMultiplierUpgradeLevels.Num())
	{
		const FUpgradeTierData& UpgradeData = MovementSpeedMultiplierUpgradeLevels[CurrentMovementSpeedMultiplierUpgradeLevel];
		if (CurrentLevel >= UpgradeData.PlayerLevelRequirement && CurrentGoldBank >= UpgradeData.CostGold)
		{
			CurrentGoldBank -= UpgradeData.CostGold;
			CurrentMovementSpeedMultiplier += UpgradeData.StatIncreaseAmount;
			CurrentMovementSpeedMultiplierUpgradeLevel++;
		}
	}
}

void UPlayerStats::UpgradeHealthRegen()
{
	if (CurrentHealthRegenUpgradeLevel < HealthRegenUpgradeLevels.Num())
	{
		const FUpgradeTierData& UpgradeData = HealthRegenUpgradeLevels[CurrentHealthRegenUpgradeLevel];
		if (CurrentLevel >= UpgradeData.PlayerLevelRequirement && CurrentGoldBank >= UpgradeData.CostGold)
		{
			CurrentGoldBank -= UpgradeData.CostGold;
			CurrentHealthRegen += UpgradeData.StatIncreaseAmount; 
			CurrentHealthRegenUpgradeLevel++;
		}
	}
}

void UPlayerStats::UpgradeStaminaRegen()
{
	if (CurrentStaminaRegenUpgradeLevel < StaminaRegenUpgradeLevels.Num())
	{
		const FUpgradeTierData& UpgradeData = StaminaRegenUpgradeLevels[CurrentStaminaRegenUpgradeLevel];
		if (CurrentLevel >= UpgradeData.PlayerLevelRequirement && CurrentGoldBank >= UpgradeData.CostGold)
		{
			CurrentGoldBank -= UpgradeData.CostGold;
			CurrentStaminaRegen += UpgradeData.StatIncreaseAmount; 
			CurrentStaminaRegenUpgradeLevel++;
		}
	}
}

void UPlayerStats::DecreaseStaminaDrain()
{
	if (CurrentStaminaDrainDrainLevel < StaminaDrainDrainLevels.Num())
	{
		const FUpgradeTierData UpgradeData = StaminaDrainDrainLevels[CurrentStaminaDrainDrainLevel];
		if (CurrentLevel >= UpgradeData.PlayerLevelRequirement && CurrentGoldBank >= UpgradeData.CostGold)
		{
			CurrentGoldBank -= UpgradeData.CostGold;
			CurrentStaminaDrain += UpgradeData.StatIncreaseAmount; 
			CurrentStaminaDrainDrainLevel++;
		}
	}
}


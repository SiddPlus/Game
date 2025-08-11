#include "PlayerGear.h"

UPlayerGear::UPlayerGear()
{
	PrimaryComponentTick.bCanEverTick = true;
}

void UPlayerGear::BeginPlay()
{
	Super::BeginPlay();
}

void UPlayerGear::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}

UPlayerStats* PlayerStats;

bool UPlayerGear::FindGearIndex(const FName& GearID, int& OutGearIndex)
{
	for (int i = 0; i < Gear.Num(); ++i)
	{
		if (Gear[i].GearName.ToString() == GearID.ToString())
		{
			OutGearIndex = i;
			return true;
		}
	}
	return false;
}

void UPlayerGear::PurchaseGear(const FName& GearID)
{
	int GearIndex;

	if (!FindGearIndex(GearID, GearIndex) || !PlayerStats)
	{
		return;
	}

	FGear& GearItem = Gear[GearIndex];
	
	if (GearItem.IsPurchased)
	{
		UE_LOG(LogTemp, Warning, TEXT("Gear '%s' is already purchased."), *GearItem.GearName.ToString());
		return;
	}
    
	if (PlayerStats->CurrentLevel < GearItem.PlayerLevelRequirement)
	{
		UE_LOG(LogTemp, Warning, TEXT("Failed to purchase Gear '%s'. Player level %d required, but current level is %d."), *GearItem.GearName.ToString(), GearItem.PlayerLevelRequirement, PlayerStats->CurrentLevel);
		return;
	}

	if (PlayerStats->CurrentGoldBank >= GearItem.PurchaseCost)
	{
		PlayerStats->CurrentGoldBank -= GearItem.PurchaseCost;
		GearItem.IsPurchased = true;
		GearItem.CurrentLevel = 1;

		UE_LOG(LogTemp, Warning, TEXT("Gear '%s' purchased successfully!"), *GearItem.GearName.ToString());
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Failed to purchase Gear '%s'. Not enough gold."), *GearItem.GearName.ToString());
	}
}

void UPlayerGear::UpgradeGear(const FName& GearID)
{
	int GearIndex;
    
	if (!FindGearIndex(GearID, GearIndex) || !PlayerStats)
	{
		return;
	}
    
	FGear& GearItem = Gear[GearIndex];
	
	if (!GearItem.IsPurchased)
	{
		UE_LOG(LogTemp, Warning, TEXT("Cannot upgrade '%s'. It has not been purchased yet."), *GearItem.GearName.ToString());
		return;
	}

	if (GearItem.CurrentLevel >= GearItem.UpgradeLevels.Num())
	{
		UE_LOG(LogTemp, Warning, TEXT("Item '%s' is already at max level."), *GearItem.GearName.ToString());
		return;
	}
	
	const FGearUpgradeLevels& NextLevelData = GearItem.UpgradeLevels[GearItem.CurrentLevel];
    
	if (PlayerStats->CurrentLevel < NextLevelData.PlayerLevelRequirement)
	{
		UE_LOG(LogTemp, Warning, TEXT("Failed to upgrade '%s'. Player level requirement not met."), *GearItem.GearName.ToString());
		return;
	}
    
	if (PlayerStats->CurrentGoldBank >= NextLevelData.UpgradeCost)
	{
		PlayerStats->CurrentGoldBank -= NextLevelData.UpgradeCost;
		GearItem.CurrentLevel++;

		UE_LOG(LogTemp, Warning, TEXT("Gear '%s' upgraded to level %d successfully!"), *GearItem.GearName.ToString(), GearItem.CurrentLevel);
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Failed to upgrade '%s'. Not enough gold."), *GearItem.GearName.ToString());
	}
}


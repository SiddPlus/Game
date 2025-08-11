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
	for (int i = 0; i < Gears.Num(); ++i)
	{
		if (Gears[i].GearName.ToString() == GearID.ToString())
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

	FGear& Gear = Gears[GearIndex];
	
	if (Gear.IsPurchased)
	{
		UE_LOG(LogTemp, Warning, TEXT("Gear '%s' is already purchased."), *Gear.GearName.ToString());
		return;
	}
    
	if (PlayerStats->CurrentLevel < Gear.PlayerLevelRequirement)
	{
		UE_LOG(LogTemp, Warning, TEXT("Failed to purchase Gear '%s'. Player level %d required, but current level is %d."), *Gear.GearName.ToString(), Gear.PlayerLevelRequirement, PlayerStats->CurrentLevel);
		return;
	}

	if (PlayerStats->CurrentGoldBank >= Gear.PurchaseCost)
	{
		PlayerStats->CurrentGoldBank -= Gear.PurchaseCost;
		Gear.IsPurchased = true;
		Gear.CurrentLevel = 1;

		UE_LOG(LogTemp, Warning, TEXT("Gear '%s' purchased successfully!"), *Gear.GearName.ToString());
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Failed to purchase Gear '%s'. Not enough gold."), *Gear.GearName.ToString());
	}
}

void UPlayerGear::UpgradeGear(const FName& GearID)
{
	int GearIndex;
    
	if (!FindGearIndex(GearID, GearIndex) || !PlayerStats)
	{
		return;
	}
    
	FGear& Gear = Gears[GearIndex];
	
	if (!Gear.IsPurchased)
	{
		UE_LOG(LogTemp, Warning, TEXT("Cannot upgrade '%s'. It has not been purchased yet."), *Gear.GearName.ToString());
		return;
	}

	if (Gear.CurrentLevel >= Gear.UpgradeLevels.Num())
	{
		UE_LOG(LogTemp, Warning, TEXT("Gear '%s' is already at max level."), *Gear.GearName.ToString());
		return;
	}
	
	const FGearUpgradeLevels& NextLevelData = Gear.UpgradeLevels[Gear.CurrentLevel];
    
	if (PlayerStats->CurrentLevel < NextLevelData.PlayerLevelRequirement)
	{
		UE_LOG(LogTemp, Warning, TEXT("Failed to upgrade '%s'. Player level requirement not met."), *Gear.GearName.ToString());
		return;
	}
    
	if (PlayerStats->CurrentGoldBank >= NextLevelData.UpgradeCost)
	{
		PlayerStats->CurrentGoldBank -= NextLevelData.UpgradeCost;
		Gear.CurrentLevel++;

		UE_LOG(LogTemp, Warning, TEXT("Gear '%s' upgraded to level %d successfully!"), *Gear.GearName.ToString(), Gear.CurrentLevel);
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Failed to upgrade '%s'. Not enough gold."), *Gear.GearName.ToString());
	}
}



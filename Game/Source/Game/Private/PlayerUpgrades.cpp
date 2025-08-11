#include "PlayerUpgrades.h"

UPlayerUpgrades::UPlayerUpgrades()
{
	PrimaryComponentTick.bCanEverTick = true;
}

void UPlayerUpgrades::BeginPlay()
{
	Super::BeginPlay();
}

void UPlayerUpgrades::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}

UPlayerStats* PlayerStats;

bool UPlayerUpgrades::FindUpgradeIndices(const FName& TreeID, const FName& UpgradeID, int& OutTreeIndex,int& OutUpgradeIndex)
{
	for (int i = 0; i < UpgradeTrees.Num(); ++i)
	{
		if (UpgradeTrees[i].TreeName.ToString() == TreeID.ToString())
		{
			for (int j = 0; j < UpgradeTrees[i].Upgrades.Num(); ++j)
			{
				if (UpgradeTrees[i].Upgrades[j].UpgradeID == UpgradeID)
				{
					OutTreeIndex = i;
					OutUpgradeIndex = j;
					return true;
				}
			}
		}
	}
	return false;
}

void UPlayerUpgrades::PurchaseUpgrade(const FName& TreeID, const FName& UpgradeID)
{
	int TreeIndex;
	int UpgradeIndex;

	if (!FindUpgradeIndices(TreeID, UpgradeID, TreeIndex, UpgradeIndex) || !PlayerStats)
	{
		return;
	}

    FUpgradeData& Upgrade = UpgradeTrees[TreeIndex].Upgrades[UpgradeIndex];
    
    if (Upgrade.IsPurchased || Upgrade.CurrentLevel > 0)
    {
       UE_LOG(LogTemp, Warning, TEXT("Upgrade '%s' is already purchased."), *Upgrade.UpgradeName.ToString());
       return;
    }

    if (Upgrade.PrerequisiteUpgradeID != NAME_None)
    {
       int PrerequisiteTreeIndex;
       int PrerequisiteUpgradeIndex;
       
       if (FindUpgradeIndices(TreeID, Upgrade.PrerequisiteUpgradeID, PrerequisiteTreeIndex, PrerequisiteUpgradeIndex))
       {
          if (PrerequisiteTreeIndex != TreeIndex)
          {
             UE_LOG(LogTemp, Error, TEXT("Failed to purchase upgrade '%s'. Prerequisite upgrade is not in the same tree."), *Upgrade.UpgradeName.ToString());
             return;
          }
          FUpgradeData& PrerequisiteUpgrade = UpgradeTrees[PrerequisiteTreeIndex].Upgrades[PrerequisiteUpgradeIndex];
          
          if (!PrerequisiteUpgrade.IsPurchased)
          {
             UE_LOG(LogTemp, Warning, TEXT("Failed to purchase upgrade '%s'. Prerequisite upgrade '%s' has not been purchased."), *Upgrade.UpgradeName.ToString(), *PrerequisiteUpgrade.UpgradeName.ToString());
             return;
          }
       }
       else
       {
          UE_LOG(LogTemp, Error, TEXT("Failed to purchase upgrade '%s'. Prerequisite upgrade with ID '%s' not found."), *Upgrade.UpgradeName.ToString(), *Upgrade.PrerequisiteUpgradeID.ToString());
          return;
       }
    }

    if (PlayerStats->CurrentLevel < Upgrade.PlayerLevelRequirement)
    {
       UE_LOG(LogTemp, Warning, TEXT("Failed to purchase upgrade '%s'. Player level %d required, but current level is %d."), *Upgrade.UpgradeName.ToString(), Upgrade.PlayerLevelRequirement, PlayerStats->CurrentLevel);
       return; 
    }
    
    if (PlayerStats->CurrentUpgradePoints >= Upgrade.PurchaseCost)
    {
       PlayerStats->CurrentUpgradePoints -= Upgrade.PurchaseCost;
       Upgrade.IsPurchased = true;
       Upgrade.CurrentLevel = 1;

       UE_LOG(LogTemp, Warning, TEXT("Upgrade '%s' purchased successfully!"), *Upgrade.UpgradeName.ToString());
    }
    else
    {
       UE_LOG(LogTemp, Warning, TEXT("Failed to purchase upgrade '%s'. Not enough upgrade points."), *Upgrade.UpgradeName.ToString());
    }
}

void UPlayerUpgrades::UpgradeUpgrade(const FName& TreeID, const FName& UpgradeID)
{
	int TreeIndex;
	int UpgradeIndex;

	if (!FindUpgradeIndices(TreeID, UpgradeID, TreeIndex, UpgradeIndex) || !PlayerStats)
	{
		return;
	}
    
	FUpgradeData& Upgrade = UpgradeTrees[TreeIndex].Upgrades[UpgradeIndex];
    
	if (Upgrade.CurrentLevel == 0)
	{
		UE_LOG(LogTemp, Warning, TEXT("Cannot upgrade '%s'. It has not been purchased yet."), *Upgrade.UpgradeName.ToString());
		return;
	}

	if (Upgrade.CurrentLevel >= Upgrade.UpgradeLevels.Num())
	{
		UE_LOG(LogTemp, Warning, TEXT("Upgrade '%s' is already at max level."), *Upgrade.UpgradeName.ToString());
		return;
	}
    
	const FUpgradeLevelData& NextLevelData = Upgrade.UpgradeLevels[Upgrade.CurrentLevel];

	if (PlayerStats->CurrentLevel < NextLevelData.PlayerLevelRequirement)
	{
		UE_LOG(LogTemp, Warning, TEXT("Failed to upgrade '%s'. Player level requirement not met."), *Upgrade.UpgradeName.ToString());
		return;
	}
    
	if (PlayerStats->CurrentUpgradePoints >= NextLevelData.UpgradeCost)
	{
		PlayerStats->CurrentUpgradePoints -= NextLevelData.UpgradeCost;
		Upgrade.CurrentLevel++;
		
		UE_LOG(LogTemp, Warning, TEXT("Upgrade '%s' upgraded to level %d successfully!"), *Upgrade.UpgradeName.ToString(), Upgrade.CurrentLevel);
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Failed to upgrade '%s'. Not enough upgrade points."), *Upgrade.UpgradeName.ToString());
	}
}



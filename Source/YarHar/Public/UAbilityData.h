// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameplayAbilityBase.h"
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"

#include "UAbilityData.generated.h"

/**
 * 
 */
UENUM(BlueprintType)
enum class AbilityType : uint8 {
	WORLD = 0 UMETA(DisplayName = "World"),
	PLAYER = 1  UMETA(DisplayName = "PLAYER"),
};

UCLASS(Blueprintable)
class YARHAR_API UUAbilityData : public UDataAsset
{
	GENERATED_BODY()
	


public:
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Ability")
	FString DisplayName;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Ability")
	FString Description;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Ability")
	UTexture2D* Icon;

	UPROPERTY(EditAnywhere, BlueprintReadOnly,Category = "Ability")
	AbilityType Abilitytype;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Ability")
	TSubclassOf<class UGameplayAbilityBase> AbilityClass;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Ability")
	bool bIsUnlocked;
};

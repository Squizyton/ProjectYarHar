// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UAbilityData.h"
#include "Engine/Blueprint.h"
#include "GameFramework/Character.h"
#include "AbilityManager.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class YARHAR_API UAbilityManager : public UBlueprint
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintCallable)
	void ApplyAbility(const UUAbilityData* AbilityDataAsset, ACharacter* TargetCharacter)
	{
		//If Pointer is Valid
		if(AbilityDataAsset)
		{
			UGameplayAbilityBase* AbilityInstance = NewObject<UGameplayAbilityBase>(AbilityDataAsset->AbilityClass);
		}
		
	}

	
	
};

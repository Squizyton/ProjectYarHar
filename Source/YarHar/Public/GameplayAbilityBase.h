// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameplayAbilityBase.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class YARHAR_API UGameplayAbilityBase : public UActorComponent
{
	
	
	GENERATED_BODY()
public:
	UGameplayAbilityBase();

	UFUNCTION(BlueprintNativeEvent,BlueprintCallable, Category="Ability")
	 void OnActivate();
	UFUNCTION(BlueprintNativeEvent,BlueprintCallable, Category="Ability")
	 void AbilityTick();
	UFUNCTION(BlueprintNativeEvent,BlueprintCallable, Category="Ability")
	 void OnLevelUp();
};

// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "AudioFunctionLibrary.generated.h"

/**
 * 
 */
UCLASS()
class BEATS_API UAudioFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Beats")
		float GetCurrentPlaybackTime(UAudioComponent *s);
};

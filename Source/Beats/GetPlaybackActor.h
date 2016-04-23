// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "GetPlaybackActor.generated.h"

UCLASS()
class BEATS_API AGetPlaybackActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGetPlaybackActor();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "wtf")
		float GetCurrentPlaybackTime(UAudioComponent *AudioComponent);
	
	
};

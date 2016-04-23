// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "BeatActor.generated.h"

UCLASS()
class BEATS_API ABeatActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABeatActor();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;
	UEngine *thisEngine;
	UAudioComponent *myAudioComp;
	FAudioDevice *ad;
	FActiveSound *ac;

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Stuff") 
		float getPlaybackTime();

	UFUNCTION(BlueprintCallable, Category = "Stuff")
		void defineSound(UAudioComponent *s);
};

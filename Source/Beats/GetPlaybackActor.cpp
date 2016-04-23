// Fill out your copyright notice in the Description page of Project Settings.

#include "Beats.h"
#include "GetPlaybackActor.h"
#include "AudioDevice.h"
#include "ActiveSound.h"


// Sets default values
AGetPlaybackActor::AGetPlaybackActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AGetPlaybackActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AGetPlaybackActor::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

float AGetPlaybackActor::GetCurrentPlaybackTime(UAudioComponent* AudioComponent)
{
	float CurrentPlaybackTime = -1.f;
	if (AudioComponent)
	{
		FAudioDevice* AudioDevice = AudioComponent->GetAudioDevice();
		if (AudioDevice)
		{
			FActiveSound* ActiveSound = AudioDevice->FindActiveSound(AudioComponent);
			if (ActiveSound)
			{
				CurrentPlaybackTime = ActiveSound->PlaybackTime;
			}
		}
	}
	return CurrentPlaybackTime;
}



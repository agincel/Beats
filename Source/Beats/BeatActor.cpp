// Fill out your copyright notice in the Description page of Project Settings.

#include "Beats.h"
#include "BeatActor.h"
#include "AudioDevice.h"
#include "ActiveSound.h"


// Sets default values
ABeatActor::ABeatActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABeatActor::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void ABeatActor::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );
}

float ABeatActor::getPlaybackTime()
{
	return ac->PlaybackTime;
}

void ABeatActor::defineSound(UAudioComponent * s)
{
	s->Play();
	ad = thisEngine->GetMainAudioDevice();
	/*	
	UE_LOG(LogTemp, Log, TEXT("Got mainAudioDevice"));
	ac = (*ad).FindActiveSound(s);
	UE_LOG(LogTemp, Log, TEXT("SetActiveSound"));*/
}




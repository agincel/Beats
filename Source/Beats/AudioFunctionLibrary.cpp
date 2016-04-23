// Fill out your copyright notice in the Description page of Project Settings.

#include "Beats.h"
#include "AudioFunctionLibrary.h"
#include "AudioDevice.h"
#include "ActiveSound.h"


// In the CPP file:
float UAudioFunctionLibrary::GetCurrentPlaybackTime(UAudioComponent* AudioComponent)
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



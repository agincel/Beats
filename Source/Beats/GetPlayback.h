// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

/**
 * 
 */
class BEATS_API GetPlayback
{
public:
	GetPlayback();
	~GetPlayback();

	UFUNCTION(BlueprintCallable, Catagory = "Why")
		float GetCurrentPlaybackTime(UAudioComponent *AudioComponent);
};

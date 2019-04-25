// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameEngine.h"

/**
 * 
 */
class AMMOSYSTEM_API Tools
{
public:
	Tools();
	~Tools();

	void DebugMessage(int int32, float displayTime, FString messageType, const FString &text);
};

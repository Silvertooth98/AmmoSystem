// Fill out your copyright notice in the Description page of Project Settings.

#include "Tools.h"

Tools::Tools()
{
}

Tools::~Tools()
{
}

void Tools::DebugMessage(int int32, float displayTime, FString messageType, const FString &text)
{
	if (GEngine)
	{
		// Next if statement is for a warning message, so is displayed in yellow
		if (messageType == "WARNING" || messageType == "warning")
		{
			GEngine->AddOnScreenDebugMessage(int32, displayTime, FColor::Yellow, FString(text));
		}
		// Next if statement is for displaying an error message, so is displayed in red
		else if (messageType == "ERROR" || messageType == "error")
		{
			GEngine->AddOnScreenDebugMessage(int32, displayTime, FColor::Red, FString(text));
		}
		// Next if statement is for a good display message, so is displayed in green
		else if (messageType == "COMPILE" || messageType == "compile")
		{
			GEngine->AddOnScreenDebugMessage(int32, displayTime, FColor::Green, FString(text));
		}
	}
}

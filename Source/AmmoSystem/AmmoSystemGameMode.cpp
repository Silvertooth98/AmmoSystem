// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "AmmoSystemGameMode.h"
#include "AmmoSystemHUD.h"
#include "AmmoSystemCharacter.h"
#include "UObject/ConstructorHelpers.h"

AAmmoSystemGameMode::AAmmoSystemGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AAmmoSystemHUD::StaticClass();
}

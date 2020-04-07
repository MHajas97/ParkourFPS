// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "ParkourFPSGameMode.h"
#include "ParkourFPSHUD.h"
#include "ParkourFPSCharacter.h"
#include "UObject/ConstructorHelpers.h"

AParkourFPSGameMode::AParkourFPSGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AParkourFPSHUD::StaticClass();
}

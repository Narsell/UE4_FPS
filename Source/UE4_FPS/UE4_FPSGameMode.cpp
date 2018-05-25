// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "UE4_FPSGameMode.h"
#include "UE4_FPSHUD.h"
#include "UE4_FPSCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUE4_FPSGameMode::AUE4_FPSGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AUE4_FPSHUD::StaticClass();
}

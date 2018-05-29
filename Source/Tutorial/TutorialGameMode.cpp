// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "TutorialGameMode.h"
#include "TutorialHUD.h"
#include "TutorialCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATutorialGameMode::ATutorialGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ATutorialHUD::StaticClass();
}

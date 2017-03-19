// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "S05_TestingGround.h"
#include "S05_TestingGroundGameMode.h"
#include "S05_TestingGroundHUD.h"
#include "S05_TestingGroundCharacter.h"

AS05_TestingGroundGameMode::AS05_TestingGroundGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AS05_TestingGroundHUD::StaticClass();
}

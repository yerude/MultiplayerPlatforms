// Copyright Epic Games, Inc. All Rights Reserved.

#include "MultiplayerPlatformsGameMode.h"
#include "MultiplayerPlatformsCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMultiplayerPlatformsGameMode::AMultiplayerPlatformsGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

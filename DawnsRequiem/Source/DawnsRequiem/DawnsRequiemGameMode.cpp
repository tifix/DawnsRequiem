// Copyright Epic Games, Inc. All Rights Reserved.

#include "DawnsRequiemGameMode.h"
#include "DawnsRequiemCharacter.h"
#include "UObject/ConstructorHelpers.h"

ADawnsRequiemGameMode::ADawnsRequiemGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/SideScrollerCPP/Blueprints/SideScrollerCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

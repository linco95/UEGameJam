// Copyright Epic Games, Inc. All Rights Reserved.

#include "BowlingPhyXGameMode.h"
#include "BowlingPhyXCharacter.h"
#include "UObject/ConstructorHelpers.h"

ABowlingPhyXGameMode::ABowlingPhyXGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

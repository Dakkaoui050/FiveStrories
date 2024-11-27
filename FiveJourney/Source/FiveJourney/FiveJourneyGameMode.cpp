// Copyright Epic Games, Inc. All Rights Reserved.

#include "FiveJourneyGameMode.h"
#include "FiveJourneyCharacter.h"
#include "UObject/ConstructorHelpers.h"

AFiveJourneyGameMode::AFiveJourneyGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

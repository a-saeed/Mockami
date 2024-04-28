// Copyright Epic Games, Inc. All Rights Reserved.

#include "MockamiGameMode.h"
#include "MockamiCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMockamiGameMode::AMockamiGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

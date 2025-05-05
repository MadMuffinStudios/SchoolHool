// Copyright Epic Games, Inc. All Rights Reserved.

#include "SchoolHoolGameMode.h"
#include "SchoolHoolCharacter.h"
#include "UObject/ConstructorHelpers.h"

ASchoolHoolGameMode::ASchoolHoolGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

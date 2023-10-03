// Copyright Epic Games, Inc. All Rights Reserved.

#include "learningUE5GameMode.h"
#include "learningUE5Character.h"
#include "UObject/ConstructorHelpers.h"

AlearningUE5GameMode::AlearningUE5GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

// Copyright Epic Games, Inc. All Rights Reserved.

#include "UE5_Week6GameMode.h"
#include "UE5_Week6Character.h"
#include "UObject/ConstructorHelpers.h"

AUE5_Week6GameMode::AUE5_Week6GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}

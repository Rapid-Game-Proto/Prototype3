// Copyright Epic Games, Inc. All Rights Reserved.

#include "Prototype3GameMode.h"
#include "Prototype3Character.h"
#include "UObject/ConstructorHelpers.h"

APrototype3GameMode::APrototype3GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}

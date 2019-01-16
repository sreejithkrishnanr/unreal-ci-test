// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "HelloFlyGameMode.h"
#include "HelloFlyPawn.h"

AHelloFlyGameMode::AHelloFlyGameMode()
{
	// set default pawn class to our flying pawn
	DefaultPawnClass = AHelloFlyPawn::StaticClass();
}

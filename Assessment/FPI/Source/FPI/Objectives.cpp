// Fill out your copyright notice in the Description page of Project Settings.

#include "Objectives.h"

void UObjectives::ChangeObjective(EObjectives objective)
{
	FString newObjective = "No Objective ID given";

	currentObjective = objective;

	switch (objective)
	{
		case EObjectives::OpenDoor1:

			newObjective = "PRESS THE BUTTON TO OPEN DOOR 1";

			break;

		case EObjectives::OpenDoor2:

			newObjective = "INSPECT THE KEYPAD TO OPEN DOOR 2";

			break;

		case EObjectives::FindCodeForDoor:

			newObjective = "FIND THE CODE FOR THE KEYPAD";

			break;

		case EObjectives::ReachDoor3:

			newObjective = "ATTEMPT TO OPEN DOOR 3";

			break;

		case EObjectives::FindAKeyForDoor:

			newObjective = "FIND A KEY TO UNLOCK DOOR 3";

			break;

		case EObjectives::OpenDoor3:

			newObjective = "GO BACK AND OPEN DOOR 3";

			break;


		case EObjectives::YouWin:

			newObjective = "CONGRATULATIONS! YOU WIN!";

			break;
	}

	objectivesTXT->SetText(FText::FromString("OBJECTIVE: " + newObjective));
	
}

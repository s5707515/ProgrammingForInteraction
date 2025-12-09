// Fill out your copyright notice in the Description page of Project Settings.

#include "Objectives.h"

void UObjectives::ChangeObjective(EObjectives objective)
{
	FString newObjective = "No Objective ID given";

	switch (objective)
	{
		case EObjectives::OpenDoor1:

			newObjective = "OPEN THE DOOR";

			break;

		case EObjectives::OpenDoor2:

			newObjective = "INSPECT THE KEYPAD TO OPEN DOOR 2";

			break;

		case EObjectives::FindCodeForDoor:

			newObjective = "CRACK THE CODE FOR THE KEYPAD";

			break;

		case EObjectives::OpenDoor3:

			newObjective = "TRY TO OPEN DOOR 3";

			break;

		case EObjectives::FindAKeyForDoor:

			newObjective = "FIND A KEY TO UNLOCK DOOR 3";

			break;

		case EObjectives::BringKey:

			newObjective = "GO BACK AND OPEN DOOR 3";

			break;


		case EObjectives::YouWin:

			newObjective = "CONGRATULATIONS! YOU WIN!";

			break;
	}

	objectivesTXT->SetText(FText::FromString("OBJECTIVE: " + newObjective));
}

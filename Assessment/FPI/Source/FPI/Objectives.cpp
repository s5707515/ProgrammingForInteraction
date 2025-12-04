// Fill out your copyright notice in the Description page of Project Settings.


#include "Objectives.h"

void UObjectives::ChangeObjective(int objectiveNum)
{
	FString objective = "No Objective ID given";

	switch (objectiveNum)
	{
		case 0:

			objective = "OPEN THE DOOR";

			break;

		case 1:

			objective = "CRACK THE CODE FOR THE KEYPAD";

			break;

		case 2:

			objective = "FIND A WAY TO UNLOCK THE DOOR";

			break;
	}

	objectivesTXT->SetText(FText::FromString("OBJECTIVE: " + objective));
}

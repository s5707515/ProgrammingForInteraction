// Fill out your copyright notice in the Description page of Project Settings.


#include "EndScreenWidget.h"

void UEndScreenWidget::SetTimeTakenUI(float timeTaken)
{
	time_TXT->SetText(FText::Format(FText::FromString("Time Taken: {0}"), FText::AsNumber(timeTaken)));

}

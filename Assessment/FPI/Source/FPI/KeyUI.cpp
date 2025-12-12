// Fill out your copyright notice in the Description page of Project Settings.


#include "KeyUI.h"

void UKeyUI::SetUIKeyCount(int numKeys)
{
	numKeys_TXT->SetText(FText::AsNumber(numKeys));
}

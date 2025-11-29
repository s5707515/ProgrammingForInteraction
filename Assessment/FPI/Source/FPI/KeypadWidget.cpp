// Fill out your copyright notice in the Description page of Project Settings.


#include "KeypadWidget.h"

void UKeypadWidget::AddToTextBox(const FString& text)
{
	if (!passcode_TXT) return;

	FString oldText = passcode_TXT->GetText().ToString();

	FString newText = oldText + text;

	if (newText.Len() > numDigits)
	{
		newText = text;
	}

	passcode_TXT->SetText(FText::FromString(newText));
}

void UKeypadWidget::TextBoxBack()
{
	if (!passcode_TXT) return;

	FString oldText = passcode_TXT->GetText().ToString();

	if (oldText.Len() != 0)
	{
		passcode_TXT->SetText(FText::FromString(oldText.LeftChop(1)));
	}
}

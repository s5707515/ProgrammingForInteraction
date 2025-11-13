// Fill out your copyright notice in the Description page of Project Settings.


#include "PFI_Lib.h"

bool UPFI_Lib::SaveArrayText(FString _saveDirectory, FString _filename, TArray<FString> _saveText, bool _allowOverWriting)
{
	FString fullpath = _saveDirectory + "\\" + _filename;

	if (!_allowOverWriting)
	{
		if (FPlatformFileManager::Get().GetPlatformFile().FileExists(*fullpath))
		{
			return false;
		}
	}

	FString FinalString = "";

	for (FString& s : _saveText)
	{
		FinalString += s;
		FinalString += LINE_TERMINATOR;
	}

	return FFileHelper::SaveStringToFile(FinalString, *fullpath);
}

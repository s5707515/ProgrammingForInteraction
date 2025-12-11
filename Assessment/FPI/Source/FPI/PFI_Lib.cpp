// Fill out your copyright notice in the Description page of Project Settings.


#include "PFI_Lib.h"

bool UPFI_Lib::SaveObjectiveTime(FString saveDirectory, FString filename, FString objective, FString currentTime, bool allowOverwrite)
{
	FString fullpath = saveDirectory + "\\" + filename;
	IPlatformFile& platformFile = FPlatformFileManager::Get().GetPlatformFile();

	if (allowOverwrite) //Write mode
	{
		FString finalString = objective + "," + currentTime + LINE_TERMINATOR;

		return FFileHelper::SaveStringToFile(finalString, *fullpath);
	}

	//Append Mode

	TUniquePtr<IFileHandle> fileHandle(platformFile.OpenWrite(*fullpath, true));

	if (!fileHandle) return false;

	FString finalString = objective + "," + currentTime + LINE_TERMINATOR;

	auto ansiString = StringCast<ANSICHAR>(*finalString);

	fileHandle->Write(reinterpret_cast<const uint8*>(ansiString.Get()), ansiString.Length());
	
	return true;
}

bool UPFI_Lib::AddNewLineToFile(FString saveDirectory, FString filename)
{
	FString fullpath = saveDirectory + "\\" + filename;
	IPlatformFile& platformFile = FPlatformFileManager::Get().GetPlatformFile();

	TUniquePtr<IFileHandle> fileHandle(platformFile.OpenWrite(*fullpath, true));

	if (!fileHandle) return false;

	FString finalString = LINE_TERMINATOR;

	auto ansiString = StringCast<ANSICHAR>(*finalString);

	fileHandle->Write(reinterpret_cast<const uint8*>(ansiString.Get()), ansiString.Length());

	return true;

}

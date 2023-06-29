// Fill out your copyright notice in the Description page of Project Settings.


#include "Tools.h"

UFUNCTION(BlueprintPure, Category = Whatever)
bool UTools::IsEditor()
{
#if WITH_EDITOR
	return true;
#else
	return false;
#endif
}
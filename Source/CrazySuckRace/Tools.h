// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Tools.generated.h"

/**
 * 
 */
UCLASS()
class CRAZYSUCKRACE_API UTools : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

		UFUNCTION(BlueprintPure, Category = "Tools")
		static bool IsEditor();
};

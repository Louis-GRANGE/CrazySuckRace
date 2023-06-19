// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Camera/CameraModifier.h"
#include "SwitchSideCameraModifier.generated.h"

/**
 * 
 */
UCLASS()
class CRAZYSUCKRACE_API USwitchSideCameraModifier : public UCameraModifier
{
	GENERATED_BODY()

protected:

	/** Allows modifying the camera in native code. */
	virtual void ModifyCamera(float DeltaTime, FVector ViewLocation, FRotator ViewRotation, float FOV, FVector& NewViewLocation, FRotator& NewViewRotation, float& NewFOV) override;

	/** Allows modifying the post process in native code. */
	virtual void ModifyPostProcess(float DeltaTime, float& PostProcessBlendWeight, FPostProcessSettings& PostProcessSettings) override;
};

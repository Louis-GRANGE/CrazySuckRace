// Fill out your copyright notice in the Description page of Project Settings.


<<<<<<< Updated upstream
#include "CameraModifiers/SwitchSideCameraModifier.h"

=======
#include "SwitchSideCameraModifier.h"


void USwitchSideCameraModifier::ModifyCamera(float DeltaTime, FVector ViewLocation, FRotator ViewRotation, float FOV, FVector& NewViewLocation, FRotator& NewViewRotation, float& NewFOV)
{
	Super::ModifyCamera(DeltaTime, ViewLocation, ViewRotation, FOV, NewViewLocation, NewViewRotation, NewFOV);
}

/** Allows modifying the post process in native code. */
void USwitchSideCameraModifier::ModifyPostProcess(float DeltaTime, float& PostProcessBlendWeight, FPostProcessSettings& PostProcessSettings)
{
	Super::ModifyPostProcess(DeltaTime, PostProcessBlendWeight, PostProcessSettings);
	
}
>>>>>>> Stashed changes

// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/StaticMeshComponent.h"
#include "TankTurret.generated.h"

/**
 * 
 */
UCLASS( meta = (BlueprintSpawnableComponent), hidecategories = ("Collision"))
class TANKWARS_API UTankTurret : public UStaticMeshComponent
{
	GENERATED_BODY()
	
private:
	UPROPERTY(EditAnywhere, Category = Setup)
	float maxDegreesPerSecond = 25;
	
public:
	void Rotate(float relativeSpeed);
	
};

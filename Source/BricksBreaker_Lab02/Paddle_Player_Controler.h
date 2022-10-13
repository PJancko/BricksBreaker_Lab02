// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "Paddle_Player_Controler.generated.h"

//class ABall

UCLASS()
class BRICKSBREAKER_LAB02_API APaddle_Player_Controler : public APlayerController
{
	GENERATED_BODY()
		
		APaddle_Player_Controler();

	UFUNCTION()
		virtual void SetupInputComponent() override;

protected:

	virtual void BeginPlay() override;

	void MoveHorizontal(float AxisValue);
};

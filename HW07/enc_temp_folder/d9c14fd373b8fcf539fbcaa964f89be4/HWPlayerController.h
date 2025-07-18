// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "InputAction.h"
#include "HWPlayerController.generated.h"

class UInputMappingContext;

/**
 *
 */
UCLASS()
class HW07_API AHWPlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	AHWPlayerController();

	UPROPERTY(EditAnywhere)
	TObjectPtr<UInputAction> MoveAction;

	UPROPERTY(EditAnywhere)
	TObjectPtr<UInputAction> LookAction;

protected:
	virtual void BeginPlay() override;

private:
	UPROPERTY(EditAnywhere)
	TObjectPtr<UInputMappingContext> InputMapping;


};



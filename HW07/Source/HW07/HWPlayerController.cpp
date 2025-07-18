// Fill out your copyright notice in the Description page of Project Settings.


#include "HWPlayerController.h"
#include "EnhancedInputSubsystems.h"

AHWPlayerController::AHWPlayerController()
{
	InputMapping = nullptr;
	MoveAction = nullptr;
	LookAction = nullptr;
}

void AHWPlayerController::BeginPlay()
{
	// LocalPlayer라는 변수 선언과 동시에 null 체크
	if (ULocalPlayer* LocalPlayer = GetLocalPlayer())
	{
		if (UEnhancedInputLocalPlayerSubsystem* InputSubsystem = LocalPlayer->GetSubsystem<UEnhancedInputLocalPlayerSubsystem>())
		{
			InputSubsystem->AddMappingContext(InputMapping, 0);
		}
	}
}

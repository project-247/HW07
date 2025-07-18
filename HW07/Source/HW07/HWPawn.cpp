// Fill out your copyright notice in the Description page of Project Settings.


#include "HWPawn.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "EnhancedInputComponent.h"
#include "HWPlayerController.h"

// Sets default values
AHWPawn::AHWPawn()
{
	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	CapsuleComp = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CapsuleComp"));
	CapsuleComp->SetSimulatePhysics(false);
	SetRootComponent(CapsuleComp);

	SkeletalMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMesh"));
	SkeletalMesh->SetupAttachment(CapsuleComp);

	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	SpringArm->SetupAttachment(CapsuleComp);

	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(SpringArm);

	MoveSpeed = 100.f;
}

// Called when the game starts or when spawned
void AHWPawn::BeginPlay()
{
	Super::BeginPlay();

}

void AHWPawn::Move(const FInputActionValue& Value)
{
	FVector2D MoveInput = Value.Get<FVector2D>();

	// 캐릭터 움직임 WASD -> Vector2d
	// WS -> x축 이동
	// AD -> Y축 이동

	// MoveInput(0.f, 0.f)가 아니라면
	if (!MoveInput.IsNearlyZero())
	{
		MoveInput.Normalize();

		UE_LOG(LogTemp, Warning, TEXT("MoveInput: X=%f, Y=%f"), MoveInput.X, MoveInput.Y);

		FVector Forward = GetActorForwardVector() * MoveInput.X * MoveSpeed;
		FVector Right = GetActorRightVector() * MoveInput.Y * MoveSpeed;

		AddActorWorldOffset((Forward + Right) * GetWorld()->GetDeltaSeconds());
	}
}

void AHWPawn::Look(const FInputActionValue& Value)
{
	FVector2D LookInput = Value.Get<FVector2D>();
}

// Called every frame
void AHWPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
// Unreal 엔진 5.1 -> EnhancedInput 시스템 도입
void AHWPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	if (UEnhancedInputComponent* EnhancedInput = Cast<UEnhancedInputComponent>(PlayerInputComponent))
	{
		if (AHWPlayerController* MyController = Cast<AHWPlayerController>(GetController()))
		{
			EnhancedInput->BindAction(
				MyController->MoveAction,
				ETriggerEvent::Triggered,
				this,
				&ThisClass::Move
			);

			EnhancedInput->BindAction(
				MyController->LookAction,
				ETriggerEvent::Triggered,
				this,
				&ThisClass::Look
			);
		}
	}
}


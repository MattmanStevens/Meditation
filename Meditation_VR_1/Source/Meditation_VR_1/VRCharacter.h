// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "VRCharacter.generated.h"

UCLASS()
class MEDITATION_VR_1_API AVRCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AVRCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

private:
	void MoveForward(float throttle);
	void MoveRight(float throttle);


private: // Configuration Variables

	// Set up HMD Camera Component
	UPROPERTY()
	class UCameraComponent* Camera;

	UPROPERTY()
	// Set up VR Root Component
	class USceneComponent* VRRoot;

	UPROPERTY()
	// Set up Left Motion Controller
	class AHandController* LeftController;

	UPROPERTY()
	// Set up Right Motion Controller
	class AHandController* RightController;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<AHandController> HandControllerClass;

	
};

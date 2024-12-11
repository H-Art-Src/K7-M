// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "c_smile.generated.h"

UCLASS()
class K7_STYLE_MULTIPLAYER_API Ac_smile : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	Ac_smile();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};

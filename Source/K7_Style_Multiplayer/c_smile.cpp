// Fill out your copyright notice in the Description page of Project Settings.


#include "c_smile.h"

// Sets default values
Ac_smile::Ac_smile()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void Ac_smile::BeginPlay()
{
	Super::BeginPlay();
	if(GEngine)
     GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("Some debug message!"));	
}

// Called every frame
void Ac_smile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


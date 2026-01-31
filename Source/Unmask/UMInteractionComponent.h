// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "UMInteractionComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class UNMASK_API UUMInteractionComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	void PrimaryInteract();
	// Sets default values for this component's properties
	UUMInteractionComponent();

};

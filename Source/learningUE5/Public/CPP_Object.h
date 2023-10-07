// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CPP_Object.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class LEARNINGUE5_API UCPP_Object : public UObject
{
	GENERATED_BODY()

private:
	int PrivateInt;
	int helpMe;

public:
	UPROPERTY(BlueprintReadWrite)
		int PublicInt;
	UFUNCTION(BlueprintPure)
		int GetPrivateInt();
	UFUNCTION(BlueprintCallable)
		void SetPrivateInt(int privateInt);
	
};

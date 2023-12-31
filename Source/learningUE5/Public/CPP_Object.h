// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/KismetSystemLibrary.h"
#include "CPP_Object.generated.h"

UENUM(BlueprintType)
enum FruitList
{
	Apple UMETA(DisplayName="iApple"),
	Mango,
	Banana,
};

USTRUCT(BlueprintType)
struct FBook
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(BlueprintReadOnly, EditAnywhere)
		FString Name;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		int NbrOfPages;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float Rating;
};

UCLASS(Blueprintable)
class LEARNINGUE5_API UCPP_Object : public UObject
{
	GENERATED_BODY()

private:
	int PrivateInt;

public:
	UPROPERTY(BlueprintReadWrite)
		int PublicInt;
	UFUNCTION(BlueprintPure)
		int GetPrivateInt();
	UFUNCTION(BlueprintCallable)
		void SetPrivateInt(int privateInt);
	UFUNCTION(BlueprintCallable)
		static void Test(UPARAM(ref)FBook& Target, UObject* Context);
	
};

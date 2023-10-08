// Fill out your copyright notice in the Description page of Project Settings.


#include "CPP_Object.h"

int UCPP_Object::GetPrivateInt()
{
	return PrivateInt;
}

void UCPP_Object::SetPrivateInt(int privateInt)
{
	PrivateInt = privateInt;
}

void UCPP_Object::Test(UPARAM(ref)FBook& Target, UObject* Context)
{
	UKismetSystemLibrary::PrintString(Context, "TestFunctionCalled");
}
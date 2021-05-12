// Fill out your copyright notice in the Description page of Project Settings.
#include "BullCowCartridge.h"

void UBullCowCartridge::BeginPlay() // When the game starts
{
    Super::BeginPlay();
    PrintLine(TEXT("Hello there. Welcome to the Bull Cows Game"));
    PrintLine(TEXT("Please guess the 4 letter word."));
    PrintLine(TEXT(""));
}

void UBullCowCartridge::OnInput(const FString& Input) // When the player hits enter
{
    ClearScreen();
    FString HiddenWord = TEXT("bread");

    if (Input == HiddenWord)
    {
        PrintLine(TEXT("Hey, great job!"));
    }
    else
    {
        PrintLine(TEXT("Incorrect! Try again."));
    }
}
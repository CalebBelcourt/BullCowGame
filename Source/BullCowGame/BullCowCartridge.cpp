// Fill out your copyright notice in the Description page of Project Settings.
#include "BullCowCartridge.h"

void UBullCowCartridge::BeginPlay() // When the game starts
{
    Super::BeginPlay();

    // Welcome Player
    PrintLine(TEXT("Hello there. Welcome to the Bull Cows Game"));
    PrintLine(TEXT("Guess the 4 letter word."));
    PrintLine(TEXT("Press ENTER to continue."));

    // Setting Up Game
    HiddenWord = TEXT("bread");

    // Set Lives

    // Prompt Player For Guess

}

void UBullCowCartridge::OnInput(const FString& Input) // When the player hits enter
{
    ClearScreen();

    // Check Player Guess
    if (Input == HiddenWord)
    {
        PrintLine(TEXT("Hey, great job!"));
    }
    else
    {
        PrintLine(TEXT("Incorrect! Try again."));
    }

    

    // Check if isogram
    // Check Right Number of Characters
    // Prompt to Guess Again

    // Remove Life

    // Check If Lives > 0
    // If Yes -> Guess Again
    // Show Lives Left
    // If No -> Show Game Over and HiddenWord
    // Prompt to Play Again
    // Check User Input
    // Play Again Or Quit
}
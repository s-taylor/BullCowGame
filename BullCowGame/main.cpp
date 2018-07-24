//
//  main.cpp
//  BullCowGame
//
//  Created by Simon Taylor on 4/7/18.
//  Copyright © 2018 Simon Taylor. All rights reserved.
//

#include <iostream>
#include <string> // required for string type

// defines a prototype of the functions
// so they can be used from down below
void PrintIntro();
void PlayGame();
std::string GetGuess();
bool AskToPlayAgain();

// the entry point for our application
int main()
{
    bool bPlayAgain = false;
    do {
        PrintIntro();
        PlayGame();
        bPlayAgain = AskToPlayAgain();
    } while(bPlayAgain);

    return 0;
}

// introduces the game
void PrintIntro()
{
    constexpr int WORD_LENGTH = 5; // evaluated at compile time
    
    std::cout << "Welcome to Bulls and Cows, a fun word game.\n";
    std::cout << "Can you guess the " << WORD_LENGTH;
    std::cout << " letter isogram I'm thinking of?\n";
    std::cout << std::endl;
    
    return;
}

// loop for the number of turns, asking for guesses
void PlayGame()
{
    int NUMBER_OF_TURNS = 5;
    for(int i = 1; i <= NUMBER_OF_TURNS; i++)
    {
        std::string Guess = GetGuess();
        std::cout << "Your guess was: " << Guess << std::endl;
        std::cout << std::endl;
    }
}

// get a guess from the player
std::string GetGuess()
{
    std::cout << "Enter your guess: \n";
    
    std::string Guess = "";
    getline(std::cin, Guess);
    return Guess;
}

// ask the player if they want to play again
bool AskToPlayAgain()
{
    std::cout << "Do you want to play again (y/n)? ";
    std::string Response = "";
    getline(std::cin, Response);
    std::cout << std::endl;

    return tolower(Response[0]) == 'y';
}

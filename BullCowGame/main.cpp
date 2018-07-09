//
//  main.cpp
//  BullCowGame
//
//  Created by Simon Taylor on 4/7/18.
//  Copyright © 2018 Simon Taylor. All rights reserved.
//

#include <iostream>
#include <string> // required for string type

using namespace std; // allows using std namespace without std:: prefix

// defines a prototype of the functions
// so they can be used from down below
void PrintIntro();
void PlayGame();
string GetGuess();
bool AskToPlayAgain();

// the entry point for our application
int main()
{
    PrintIntro();
    PlayGame();
    AskToPlayAgain(); // this doesn't do anything yet
    return 0;
}

// introduces the game
void PrintIntro()
{
    constexpr int WORD_LENGTH = 5; // evaluated at compile time
    
    cout << "Welcome to Bulls and Cows, a fun word game.\n";
    cout << "Can you guess the " << WORD_LENGTH;
    cout << " letter isogram I'm thinking of?\n";
    cout << endl;
    
    return;
}

// loop for the number of turns, asking for guesses
void PlayGame()
{
    int NUMBER_OF_TURNS = 5;
    for(int i = 1; i <= NUMBER_OF_TURNS; i++)
    {
        string Guess = GetGuess();
        cout << "Your guess was: " << Guess << endl;
        cout << endl;
    }
}

// get a guess from the player
string GetGuess()
{
    cout << "Enter your guess: \n";
    
    string Guess = "";
    getline(cin, Guess);
    return Guess;
}

// ask the player if they want to play again
bool AskToPlayAgain()
{
    cout << "Do you want to play again?";
    string Response = "";
    getline(cin, Response);
    cout << endl;

    return tolower(Response[0]) == 'y';
}

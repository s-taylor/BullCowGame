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
string GetGuessAndPrintBack();

// the entry point for our application
int main()
{
    PrintIntro();
    
    // loop for the number of turns, asking for guesses
    int NUMBER_OF_TURNS = 5;
    for(int i = 1; i <= NUMBER_OF_TURNS; i++)
    {
        GetGuessAndPrintBack();
        cout << endl;
    }

    cout << endl;
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

// get a guess from the player
string GetGuessAndPrintBack()
{
    string Guess = "";
    
    cout << "Enter your guess: \n";
    getline(cin, Guess);
    cout << "Your guess was " << Guess << endl;

    return Guess;
}

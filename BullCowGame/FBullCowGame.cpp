//
//  FBullCowGame.cpp
//  BullCowGame
//
//  Created by Simon Taylor on 16/7/18.
//  Copyright © 2018 Simon Taylor. All rights reserved.
//

#include "FBullCowGame.hpp"

int FBullCowGame::GetCurrentTry() { return MyCurrentTry; }
int FBullCowGame::GetMaxTries() { return MyMaxTries; }

bool FBullCowGame::checkGuessValidity(std::string) { 
    return "";
}

bool FBullCowGame::isGameWon() { 
    return false;
}

void FBullCowGame::Reset() { 
    return;
}

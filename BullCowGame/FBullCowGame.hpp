//
//  FBullCowGame.hpp
//  BullCowGame
//
//  Created by Simon Taylor on 16/7/18.
//  Copyright © 2018 Simon Taylor. All rights reserved.
//

#pragma once
#include <string>

class FBullCowGame {
public:
    void Reset();
    int GetMaxTries();
    int GetCurrentTry();
    bool isGameWon();
    bool checkGuessValidity(std::string);
private:
    int MyCurrentTry;
    int MyMaxTries;
};


#ifndef FBullCowGame_hpp
#define FBullCowGame_hpp

#include <stdio.h>

#endif /* FBullCowGame_hpp */

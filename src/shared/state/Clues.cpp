//
// Created by tristan
//


#include "Clues.h"
namespace state{


    Clues::Clues()  :
    isRevealed(false),
    cluesType("")
    {

    }


    Clues::~Clues()
    {

    }



    bool Clues::getIsRevealed() {
        return isRevealed;
    }

    std::string Clues::getCluesType() {
        return cluesType;
    }
}
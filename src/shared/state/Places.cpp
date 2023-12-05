#include "Places.h"

namespace state{

    Places::Places():
            idPlace(""),
            isSafe(false),
            isTrapped(true),
            listClues({}),
            presentPlayers({}),
            Trap("")





    {}

    Places::~Places(){}



    std::string Places::getIdPlace() {
        return idPlace;
    }

    bool Places::getIsSafe() {
        return isSafe;
    }


    bool Places::getIsTrapped() {
        return isTrapped;
    }

    std::vector<Clues> Places::getListClues() {
        return listClues;
    }

    std::vector<Players> Places::getPresentPlayers() {
        return presentPlayers;
    }

    std::string Places::getTrap() {
        return Trap;
    }
}
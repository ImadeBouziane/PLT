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

    void Places::setIdPlace(std::string ID) {
        idPlace = ID;
    }

    void Places::setIsSafe(bool Safe) {
        isSafe = Safe;
    }

    void Places::setIsTrapped(bool Trapped) {
        isTrapped = Trapped;
    }

    void Places::setListClues(std::vector<Clues> WhichClues) {
        listClues = WhichClues;
    }

    void Places::setPresentPlayers(std::vector<Players> WhichPlayers) {
        presentPlayers = WhichPlayers;
    }

    void Places::setTrap(std::string WhichTrap) {
        Trap = WhichTrap;
    }
}
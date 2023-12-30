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

    void Places::setIsSafe(bool IsSafe) {
        isSafe = IsSafe;
    }

    void Places::setIsTrapped(bool IsTrapped) {
        isTrapped = IsTrapped;
    }

    void Places::setListClues(std::vector<Clues> ListClues) {
        listClues = ListClues;
    }

    void Places::setPresentPlayers(std::vector<Players> PresentPlayers) {
        presentPlayers = PresentPlayers;
    }

    void Places::setTrap(std::string WhichTrap) {
        Trap = WhichTrap;
    }
}
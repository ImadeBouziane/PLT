#include "Conspiracy.h"

namespace state{

    Conspiracy::Conspiracy():
            idPlace(""),
            idWeapon(""),
            idPlayer("")





    {}

    Conspiracy::~Conspiracy(){}

    std::string Conspiracy::getIdPlace() {
        return idPlace;
    }

    std::string Conspiracy::getIdWeapon() {
        return idWeapon;
    }

    std::string Conspiracy::getIdPlayer() {
        return idPlayer;
    }

}
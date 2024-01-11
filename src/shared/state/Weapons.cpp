#include "Weapons.h"

namespace state{
    Weapons::Weapons():
    idWeapon("")
    {}

    Weapons::~Weapons(){}

    std::string Weapons::getIdWeapon() {
        return idWeapon;
    }

    void Weapons::setIdWeapon(std::string ID){
        idWeapon = ID;
    }

}
#include "Weapons.h"

namespace state{
    Weapons::Weapons():
    idWeapon("")
    {}

    Weapons::~Weapons(){}

    std::string Weapons::getIdWeapon() {
        return idWeapon;
    }

}
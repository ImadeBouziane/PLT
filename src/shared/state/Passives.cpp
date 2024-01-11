//
// Created by tristan
//


#include "Passives.h"
namespace state{


    Passives::Passives()  :
    lifePoint(3),
    tempestPoint(3),
    isAlive(true)
    {

    }


    Passives::~Passives()
    {

    }


    int Passives::getLifePoint() {
        return lifePoint;
    }

    int Passives::getTempestPoint() {
        return tempestPoint;
    }

    bool Passives::getIsAlive() {
        return isAlive;
    }

    void Passives::setLifePoint(int HP) {
        lifePoint = HP;
    }

    void Passives::setTempestPoint(int TP) {
        tempestPoint = TP;
    }

    void Passives::setIsAlive(bool Alive) {
        isAlive = Alive;
    }

    Passives passives = Passives();

}
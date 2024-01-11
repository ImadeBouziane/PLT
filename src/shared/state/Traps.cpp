//
// Created by tristan
//


#include "Traps.h"
namespace state{


    Traps::Traps()  :
    trapValue(0),
    isDefused(false),
    isTriangle(false),
    isCircle(false)
    {

    }


    Traps::~Traps()
    {

    }


    int Traps::getTrapValue() {
        return trapValue;
    }

    bool Traps::getIsDefused() {
        return isDefused;
    }

    bool Traps::getIsTriangle() {
        return isTriangle;
    }

    bool Traps::getIsCircle() {
        return isCircle;
    }

    void Traps::setTrapValue(int value){
        trapValue = value;
    }

    void Traps::setIsDefused(bool defused){
        isDefused = defused;
    }

    void Traps::setIsTriangle(bool istriangle){
        isTriangle = istriangle;
    }
    
    void Traps::setIsCircle(bool iscircle){
        isCircle = iscircle;
    }

}
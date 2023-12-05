//
// Created by tristan
//


#include "Equipments.h"
namespace state{


    Equipments::Equipments()  :
    equipmentValue(0),
    isTriangle(false),
    isCircle(false)
    {

    }


    Equipments::~Equipments()
    {

    }

    int Equipments::getEquipementValue() {
        return equipmentValue;
    }

    bool Equipments::getIsTriangle() {
        return isTriangle;
    }


    bool Equipments::getIsCircle() {
        return isCircle;
    }

}
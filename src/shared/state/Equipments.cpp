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

    int Equipments::getEquipmentValue() {
        return equipmentValue;
    }

    bool Equipments::getIsTriangle() {
        return isTriangle;
    }


    bool Equipments::getIsCircle() {
        return isCircle;
    }

    void Equipments::setEquipmentValue(int value) {
    equipmentValue = value;
    }

    void Equipments::setIsTriangle(bool triangle) {
        isTriangle = triangle;
    }

    void Equipments::setIsCircle(bool circle) {
        isCircle = circle;
    }
}
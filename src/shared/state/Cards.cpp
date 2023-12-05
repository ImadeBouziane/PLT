//
// Created by tristan
//


#include "Cards.h"
namespace state{


    Cards::Cards():
    idCard(""),
    cardsType("")
    {

    }


    std::string Cards::getIdCard() {
        return idCard;
    }

    std::string Cards::getCardsType() {
        return cardsType;
    }


    Cards::~Cards()
    {

    }

}
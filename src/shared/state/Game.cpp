//
// Created by imade
//


#include "Game.h"
using namespace state;


Game::Game()  :
nbPlayers(0) ,
listPlayers({}) ,
turnPlayer(Player1),
isEndGame(false),
listWeapons({}) ,
listPlaces({}) ,
listEquipments({}) ,
GoodGuys({}) ,
BadGuys({})
{

}


Game::~Game()
{

}

int Game::getnbPlayers() {
    return nbPlayers;
}

std::vector<Players> Game::getListPlayer() {
    return listPlayers;
}

PlayerID Game::getTurnPlayers() {
    return turnPlayer;
}

std::vector<Weapons> Game::getListWeapons() {
    return listWeapons;
}

std::vector<Places> Game::getListPlaces() {
    return listPlaces;
}

std::vector<Equipments> Game::getListEquipments() {
    return listEquipments;
}

std::vector<Players> Game::getGoodGuys() {
    return GoodGuys;
}

std::vector<Players> Game::getBadGuys() {
    return BadGuys;
}

bool Game::getIsEndGame() {
    return isEndGame;
}








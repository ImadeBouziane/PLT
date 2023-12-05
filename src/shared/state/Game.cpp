//
// Created by imade
//


#include "Game.h"
using namespace state;


Game::Game()  :
nbPlayers(0) ,
listPlayers({}) ,
turnPlayer(0) ,
isEndGame(false),
listWeapons({}) ,
listPlaces({}) ,
listCards({}) ,
publicRole({}) ,
secretRole({})
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

int* Game::getTurnPlayers() {
    return turnPlayer;
}

std::vector<Weapons> Game::getListWeapons() {
    return listWeapons;
}

std::vector<Places> Game::getListPlaces() {
    return listPlaces;
}


std::vector<Cards> Game::getListCards() {
    return listCards;
}


std::vector<Players> Game::getPublicRole() {
    return publicRole;
}


std::vector<Players> Game::getSecretRole() {
    return secretRole;
}

bool Game::getIsEndGame() {
    return isEndGame;
}




void Game::endGame()
{
    return;
}


void Game::chooseCharacters()
{
    return;
}


void Game::changeScout()
{
    return; 
}

void Game::movePlayers()
{
    return; 
}

void Game::defuse()
{
    return;
}




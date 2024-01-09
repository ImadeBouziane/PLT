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
listTraps({}),
listClues({}),
GoodGuys({}) ,
BadGuys({}),
crimeWeapon(),
crimePlace(),
safePlace()
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

std::vector<Traps> Game::getListTraps(){
    return listTraps;
}
std::vector<Clues> Game::getListClues (){
    return listClues;
}

bool Game::getIsEndGame() {
    return isEndGame;
}

Weapons Game::getCrimeWeapon(){
    return crimeWeapon;
}

Places Game::getCrimePlace(){
    return crimePlace;
}

Places Game::getSafePlace(){
    return safePlace;
}

void Game::setnbPlayers(int nb){
    nbPlayers = nb;
}

void Game::setListPlayer(std::vector<Players> List){
    listPlayers = List;
}

void Game::setTurnPlayers(PlayerID turn){
    turnPlayer = turn;
}

void Game::setListWeapons(std::vector<Weapons> List){
    listWeapons = List;
}

void Game::setListPlaces(std::vector<Places> List){
    listPlaces = List;
}

void Game::setListEquipments(std::vector<Equipments> List){
    listEquipments = List;
}

void Game::setGoodGuys(std::vector<Players> List){
    GoodGuys = List;
}

void Game::setBadGuys(std::vector<Players> List){
    BadGuys = List;
}

void Game::setIsEndGame(bool end){
    isEndGame = end;
}

void Game::setListTraps (std::vector<Traps> List){
    listTraps = List;
}

void Game::setListClues (std::vector<Clues> List){
    listClues = List;
}

void Game::setCrimeWeapon (Weapons which){
    crimeWeapon = which;
}

void Game::setCrimePlace (Places which){
    crimePlace = which;
}

void Game::setSafePlace (Places which){
    safePlace = which;
}




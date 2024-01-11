//
// Created by imade on 11/6/23.
//

#include "Players.h"
#include "RoleType.h"

namespace state{

    Players::Players():
    idPlayer(Player1),
    role(SIMPLE),
    playerSecretRole(""),
    equipments({}),
    realClues({}),
    announcedClues({}),
    haveVoted(false),
    vote(false)
    {}

    Players::~Players(){}

    PlayerID Players::getIdPlayer() {
        return idPlayer;
    }

    std::string Players::getplayerSecretRole() {
        return playerSecretRole;
    }
    std::vector<state::Equipments> Players::getEquipments() {
        return equipments;
    }
    std::vector<state::Clues> Players::getrealClues() {
        return realClues;
    }
    std::vector<state::Clues> Players::getannouncedClues() {
        return announcedClues;
    }

    bool Players::gethaveVoted() {
        return haveVoted;
    }

    bool Players::getvote() {
        return vote;
    }

    RoleType Players::getrole() {
        return role;
    }

    void Players::setIdPlayer (PlayerID ID){
        idPlayer = ID;
    }

    void Players::setrole (RoleType roletype){
        role = roletype;
    }

    void Players::setplayerSecretRole (std::string secretrole){
        playerSecretRole = secretrole;
    }

    void Players::setEquipments(std::vector<Equipments> equip) {
        equipments = equip;
    }

    void Players::setRealClues(std::vector<Clues> clues){
        realClues = clues;
    }

    void Players::setannouncedClues(std::vector<Clues> clues){
        announcedClues = clues;
    }

    void Players::sethaveVoted(bool voted){
        haveVoted = voted;
    }

    void Players::setvote(bool whichvote){
        vote = whichvote;
    }


}
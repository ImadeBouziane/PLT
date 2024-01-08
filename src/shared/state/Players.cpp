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

    void Players::voteFinal() { return;}



    void Players::giveEquipments() { return;}

    PlayerID Players::getIdPlayer() {
        return idPlayer;
    }


    std::string Players::getplayerSecretRole() {
        return playerSecretRole;
    }
    std::vector<state::Equipments> Players::getEquipments() {
        return equipments;
    }
    std::vector<state::Cards> Players::getrealClues() {
        return realClues;
    }
    std::vector<state::Cards> Players::getannouncedClues() {
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





}
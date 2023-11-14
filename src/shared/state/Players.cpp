//
// Created by imade on 11/6/23.
//

#include "Players.h"
#include "RoleType.h"

namespace state{

    Players::Players():
    idPlayer(""),
    role(SIMPLE),
    playerSecretRole(""),
    Equipments({}),
    realClues({}),
    announcedClues({}),
    haveVoted(false),
    vote(false)
    {}

    Players::~Players(){}

    void Players::voteFinal() {}



    void Players::giveEquipments() {}

    std::string Players::getIdPlayer() {
        return idPlayer;
    }


    std::string Players::getplayerSecretRole() {
        return playerSecretRole;
    }
    std::vector<state::Cards> Players::getEquipments() {
        return Equipments;
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
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

}
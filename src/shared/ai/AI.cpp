#include "AI.h"
#include "state.h"
#include <stdlib.h>
#include <unistd.h>

namespace ai{

AI::AI():
state(),
player()
{}

AI::~AI()
{}

state::Game AI::getstate(){
    return state;
}

void AI::setstate (state::Game etat){
    state = etat;
}

state::PlayerID AI::getPlayerID(){
    return player;
}

void AI::setPlayerID (state::PlayerID ID){
    player = ID;
}

}
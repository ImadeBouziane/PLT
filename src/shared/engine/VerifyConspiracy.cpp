#include "state.h"
#include "engine.h"
#include <iostream>
#include <vector>
#include <algorithm>

using namespace engine;

void VerifyConspiracy::execute(Engine engine, state::Places currentplace) {
    if(engine.getState().getPassif().getLifePoint()!=3){
        if(currentplace.getIdPlace() == engine.getState().getCrimePlace().getIdCard()){
            std::vector<state::Players> list = currentplace.getPresentPlayers();
            for (auto& player : list) {
                if (player.getrole() == 3) {
                    if (player.getplayerSecretRole() == "Chief Conspirator"){
                        engine.getState().setIsEndGame(true);
                    }
                }
            }
        }
    }
}
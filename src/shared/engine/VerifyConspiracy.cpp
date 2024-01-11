#include "state.h"
#include "engine.h"
#include <iostream>
#include <vector>
#include <algorithm>

using namespace engine;

void VerifyConspiracy::execute(Engine engine, state::Places currentplace) {
    if(engine.getState().getnbPlaces() == 9){
        engine.getState().setIsEndGame(true);
        std::cout << "Tous les pièges ont été désactivés. Les amis ont gagnés !" << std::endl;
    }
    if(engine.getState().getPassif().getLifePoint()!=3){
        if(currentplace.getIdPlace() == engine.getState().getCrimePlace().getIdCard()){
            std::vector<state::Players> list = currentplace.getPresentPlayers();
            for (auto& player : list) {
                if (player.getrole() == 3) {
                    if (player.getplayerSecretRole() == "Chief Conspirator"){
                        engine.getState().setIsEndGame(true);
                        std::cout << "Le complot s'est activé. Les conspirateurs ont gagnés !" << std::endl;
                    }
                }
            }
        }
    }
}
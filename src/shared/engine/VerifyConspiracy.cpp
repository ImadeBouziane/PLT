#include "state.h"
#include "engine.h"
#include <iostream>
#include <vector>
#include <algorithm>

using namespace engine;

Engine VerifyConspiracy::execute(Engine engine) {
    
    state::Game myGame = engine.getState();

    if(myGame.getnbPlaces() == 9){
        myGame.setIsEndGame(true);
        std::cout << "Tous les pièges ont été désactivés. Les amis ont gagnés !" << std::endl;
    }
    if(myGame.getPassif().getLifePoint()!=3){
        if(myGame.getCurrentPlace().getIdPlace() == myGame.getCrimePlace().getIdCard()){
            std::vector<state::Players> list = myGame.getCurrentPlace().getPresentPlayers();
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
    engine.setCurrentState(myGame);
    return engine;
}
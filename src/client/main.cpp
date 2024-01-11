#include <iostream>
#include <SFML/Graphics.hpp>
#include "render.h"
#include "engine.h"
#include <iostream>
#include <vector>
#include <algorithm>  
#include <random>

using namespace render;

int main(int argc, char* argv[]) {

    if (argc > 1 && std::string(argv[1]) == "engine") {
        // Code spécifique pour tester le moteur de jeu

        engine::Engine engine;
        int i = 0;     
        engine.init();

        //!engine.CurrentState.getIsEndGame()

        // Main game loop
       while (i != 4) {
        
            state::PlayerID currentPlayer = engine.CurrentState.getTurnPlayers();

        
            std::cout << "Joueur qui joue: " << currentPlayer << std::endl;
            //std::cout << "Game State: on va reussir" << std::endl;
       
            engine = engine::VoteCommand::execute(currentPlayer, engine);
            state::Places currentPlace = engine.CurrentState.getCurrentPlace();
            
            engine::TrapCommand::execute(currentPlayer, engine , currentPlace);
            engine::GiveEquipment::execute(currentPlayer, engine );

        i = i +1; 
        
    }}
    else{

        std::cout << "Engine testing complete." << std::endl;
   sf::RenderWindow window(sf::VideoMode(1600, 900), "CLUEDO CONSPIRACY");

    GameBoard gameBoard(window);
    CardsDisplay cardDisplay;
    GameStats gameStats; 
    PlayerScreen playerScreen;
    //Player player;
    //player.setPlayerName("Nom du Joueur");

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
            }
        }

        window.clear(sf::Color::Black);

        // on dessine les composants du plateau de jeu 
        gameBoard.draw(window);
        cardDisplay.draw(window);
        //player.draw(window);
        gameBoard.drawTrap(window);
        gameStats.drawStats(window);

        playerScreen.drawPlayer(window);

        window.display();
    }
    }
    return 0;
}

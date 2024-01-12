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
        state::PlayerID currentPlayer = engine.CurrentState.getTurnPlayers();
        state::Players currentPlayersss;
        for (auto& player : engine.CurrentState.getListPlayer()) {
                if (player.getIdPlayer() == currentPlayer){
                    currentPlayersss = player ;
                    break;
                    }
        }
        
        

        //!engine.CurrentState.getIsEndGame()
        
        sf::RenderWindow window(sf::VideoMode(1600, 900), "CLUEDO CONSPIRACY");
        GameBoard gameBoard(window);
        CardsDisplay cardDisplay(currentPlayersss);
        for (auto& player : engine.CurrentState.getListPlayer()) {
                if (player.getIdPlayer() == currentPlayer){
                    currentPlayersss = player ;
                    break;
                    }
        }
        
        state::Passives passif = engine.CurrentState.getPassif();
        GameStats gameStats(passif); 
        PlayerScreen playerScreen;
        
        // Main game loop
        while (window.isOpen()) {
            sf::Event event;
            while (i != 4) {
                window.clear(sf::Color::Black);
                state::PlayerID currentPlayer = engine.CurrentState.getTurnPlayers();
                gameBoard.draw(window);
                cardDisplay.draw(window);
                gameBoard.drawTrap(window);
                gameStats.drawStats(window);
                playerScreen.drawPlayer(window);
                window.display();
        


                std::cout << "Joueur qui joue: " << currentPlayer << std::endl;
                //std::cout << "Game State: on va reussir" << std::endl;
       
                engine = engine::VoteCommand::execute(currentPlayer, engine);

                gameBoard.draw(window);
                cardDisplay.draw(window);
                //player.draw(window);
                gameBoard.drawTrap(window);
                gameStats.drawStats(window);

                playerScreen.drawPlayer(window);
                window.display();
                
                
                state::Places currentPlace = engine.CurrentState.getCurrentPlace();

                gameBoard.draw(window);
                cardDisplay.draw(window);
                //player.draw(window);
                gameBoard.drawTrap(window);
                gameStats.drawStats(window);

                playerScreen.drawPlayer(window);
                window.display();
                
                engine::TrapCommand::execute(currentPlayer, engine , currentPlace);
                //engine::GiveEquipment::execute(currentPlayer, engine );

                        state::Players currentPlayersss;
            for (auto& player : engine.CurrentState.getListPlayer()) {
                    if (player.getIdPlayer() == currentPlayer){
                        currentPlayersss = player ;
                        break;
                        }
            

            while (window.pollEvent(event)) {
                if (event.type == sf::Event::Closed) {
                    window.close();
                }
            }

            

            // on dessine les composants du plateau de jeu 
            
        }

            currentPlayer = static_cast<state::PlayerID>(static_cast<int>(currentPlayer) + 1); 




        
    }}}
    else{

        engine::Engine engine;    
        engine.init();
        state::PlayerID currentPlayer = engine.CurrentState.getTurnPlayers();
        state::Players currentPlayersss;
        for (auto& player : engine.CurrentState.getListPlayer()) {
                if (player.getIdPlayer() == currentPlayer){
                    currentPlayersss = player ;
                    break;
                    }
        }

        std::cout << "Engine testing complete." << std::endl;
        sf::RenderWindow window(sf::VideoMode(1600, 900), "CLUEDO CONSPIRACY");

        GameBoard gameBoard(window);
        CardsDisplay cardDisplay(currentPlayersss);
        state::Passives passif = engine.CurrentState.getPassif();
        
        
        GameStats gameStats(passif); 
        PlayerScreen playerScreen;
        
        

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


#include <iostream>
#include <SFML/Graphics.hpp>
#include "render.h"

using namespace render;

int main() {
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
    
    return 0;
}

  

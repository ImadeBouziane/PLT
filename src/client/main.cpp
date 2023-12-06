#include <iostream>


#include <SFML/Graphics.hpp>



// Fin test SFML
#include <render.h>
#include <state.h>
#include <cstring>

using namespace std;
//using namespace client;
using namespace render; 
int main() {
    // Créer une instance de GameBoard
    GameBoard gameBoard;

    // Créer une fenêtre SFML
    sf::RenderWindow window(sf::VideoMode(GameBoard::WINDOW_WIDTH, GameBoard::WINDOW_HEIGHT), "Gamy");


  
    window.setVerticalSyncEnabled(false);

    // Boucle principale
    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
            }
        }

        // Effacer l'écran
        window.clear();

        // Dessiner le fond
        window.draw(gameBoard.GetBackground());

        // Dessiner les emplacements des cartes
        for (const auto& cardSlot : gameBoard.getCardSlots()) {
            window.draw(cardSlot);
        }

        // Dessiner le titre
        window.draw(gameBoard.getTitle());

        // Mettre à jour la fenêtre
        window.display();
    }

    return 0;
}
  

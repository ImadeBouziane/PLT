#include "GameBoard.h"
#include <SFML/Graphics.hpp>

namespace render {

GameBoard::GameBoard() {
    // Charger la texture
    if (!BackgroundTexture.loadFromFile("role_secret.jpg")) {
        // Gestion des erreurs
    }

    // Configurer le sprite
    Background.setTexture(BackgroundTexture);
}

sf::Sprite GameBoard::GetBackground() {
    return Background;
}



}

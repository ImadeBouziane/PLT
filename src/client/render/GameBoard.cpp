#include "GameBoard.h"

namespace render {

GameBoard::GameBoard() {
    // Charger la texture
    if (!BackgroundTexture.loadFromFile("téléchargement.jpg")) {
        // Gestion des erreurs
    }

    // Configurer le sprite
    Background.setTexture(BackgroundTexture);
}

sf::Sprite GameBoard::GetBackground() {
    return Background;
}



}

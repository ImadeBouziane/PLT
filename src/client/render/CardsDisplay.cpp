#include "CardsDisplay.h"

namespace render {


    CardsDisplay::CardsDisplay() {
        // Chargez les images JPEG pour les emplacements de cartes
        CardsTexturesEquipment.loadFromFile("../graphic ressources/Equipments/equipement.jpg");
        CardsSpritesEquipment.setTexture(&CardsTexturesEquipment , true);
        CardsSpritesEquipment.setSize(sf::Vector2f(100, 150));
        CardsSpritesEquipment.setPosition(1200, 740);

        CardsTexturesEquipment2.loadFromFile("../graphic ressources/Equipments/equipement.jpg");
        CardsSpritesEquipment2.setTexture(&CardsTexturesEquipment2 , true);
        CardsSpritesEquipment2.setSize(sf::Vector2f(100, 150));
        CardsSpritesEquipment2.setPosition(1325, 740);

        CardsTexturesEquipment3.loadFromFile("../graphic ressources/Equipments/equipement.jpg");
        CardsSpritesEquipment3.setTexture(&CardsTexturesEquipment3 , true);
        CardsSpritesEquipment3.setSize(sf::Vector2f(100, 150));
        CardsSpritesEquipment3.setPosition(1450, 740);
    }

    void CardsDisplay::draw(sf::RenderWindow& window) {
        // Dessinez les emplacements de cartes
        window.draw(CardsSpritesEquipment);
        window.draw(CardsSpritesEquipment2);
        window.draw(CardsSpritesEquipment3);
    }

    CardsDisplay::~CardsDisplay() {
        // Libérer les ressources
    }
}


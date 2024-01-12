#include "CardsDisplay.h"
#include "engine.h"
#include "state.h"
#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

namespace render {

    CardsDisplay::CardsDisplay(state::Players player) {
        // Chargez les images JPEG pour les emplacements de cartes

        std::vector<sf::RectangleShape> equipmentSprites = {CardsSpritesEquipment ,CardsSpritesEquipment2 ,CardsSpritesEquipment3};
        std::vector<sf::Texture> equipmentTexture = {CardsTexturesEquipment ,CardsTexturesEquipment2 ,CardsTexturesEquipment3};

       

        // Si le joueur a des équipements, utilisez-les

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

        if (player.getEquipments().size() > 0) {

            CardsTexturesEquipment.loadFromFile("../graphic ressources/Equipments/"  + player.getEquipments()[0].getIdCard() + ".jpg");
            CardsSpritesEquipment.setTexture(&CardsTexturesEquipment , true);
            CardsSpritesEquipment.setSize(sf::Vector2f(100, 150));
            CardsSpritesEquipment.setPosition(1200, 740);
                
                
            
            if (player.getEquipments().size() > 1) {

                
                CardsTexturesEquipment2.loadFromFile("../graphic ressources/Equipments/"  + player.getEquipments()[1].getIdCard() + ".jpg");
                CardsSpritesEquipment2.setTexture(&CardsTexturesEquipment , true);
                CardsSpritesEquipment2.setSize(sf::Vector2f(100, 150));
                CardsSpritesEquipment2.setPosition(1325, 740);

        


            if (player.getEquipments().size() > 2) {

                
               
                
                    CardsTexturesEquipment3.loadFromFile("../graphic ressources/Equipments/"  + player.getEquipments()[2].getIdCard() + ".jpg");
                    CardsSpritesEquipment3.setTexture(&CardsTexturesEquipment3 , true);
                    CardsSpritesEquipment3.setSize(sf::Vector2f(100, 150));
                    CardsSpritesEquipment3.setPosition(1450, 740);
               
            }
        }
            
           
        }else{
        
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
        
    }


    /*
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
    */



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


#include "PlayerScreen.h"

namespace render {

    PlayerScreen::PlayerScreen() {
        // Appelons les méthodes pour initialiser les attributs
        loadPlayerTexture();
        setPlayerNames();
        setPlayersEquipments();
    }

    void PlayerScreen::loadPlayerTexture() {
         for (int i = 1; i <= 4; ++i) {
            sf::Texture texture;
            std::string filePath = "../graphic ressources/Identités/" + std::to_string(i) + ".jpg";
            
            if (texture.loadFromFile(filePath)) {
                playerTextures.push_back(texture);
            } else {
            printf("Erreur chargement texture autres joueurs");
            }
        }
    }
    

    void PlayerScreen::setPlayerNames() {
        playerNames = {"Joueur 1", "Joueur 2", "Joueur 3", "Joueur 4"};
    }

    void PlayerScreen::setPlayersEquipments() {
        playerEquipments = {3, 3, 3, 3};
    }

    void PlayerScreen::drawPlayer(sf::RenderWindow& window) {
        sf::Font font;
        font.loadFromFile("../police_ecriture/flats/FLATS.ttf"); 

        sf::Text text;
        text.setFont(font);
        text.setCharacterSize(15);
         

        
        // Affiche l'image du joueur
        sf::Sprite playerSprite(playerTextures[0]);
        playerSprite.setPosition(50,300);
        playerSprite.setScale(0.6 ,0.6);
        window.draw(playerSprite);

        // Affiche le nombre d'équipements et le nom du joueur en dessous de l'image
        text.setString("Equipements : " + std::to_string(playerEquipments[0]) + "\n" + "    " + playerNames[0]);            
        text.setPosition(50, 250);
        window.draw(text);

        sf::Sprite playerSprite1(playerTextures[1]);
        playerSprite1.setPosition(200,300);
        playerSprite1.setScale(0.6 ,0.6);
        window.draw(playerSprite1);

        // Affiche le nombre d'équipements et le nom du joueur en dessous de l'image
        text.setString("Equipements : " + std::to_string(playerEquipments[1]) + "\n" + "    " +playerNames[1]);            
        text.setPosition(200, 250);
        window.draw(text);

        sf::Sprite playerSprite2(playerTextures[2]);
        playerSprite2.setPosition(50,550);
        playerSprite2.setScale(0.6 ,0.6);
        window.draw(playerSprite2);

        // Affiche le nombre d'équipements et le nom du joueur en dessous de l'image
        text.setString("Equipements : " + std::to_string(playerEquipments[2]) + "\n" + "    " +playerNames[2]);            
        text.setPosition(50, 500);
        window.draw(text);


       sf::Sprite playerSprite3(playerTextures[3]);
        playerSprite3.setPosition(200,550);
        playerSprite3.setScale(0.6 ,0.6);
        window.draw(playerSprite3);

        // Affiche le nombre d'équipements et le nom du joueur en dessous de l'image
        text.setString("Equipements : " + std::to_string(playerEquipments[3]) + "\n" + "    " +playerNames[3]);            
        text.setPosition(200, 500);
        window.draw(text);
        
    }
    
    PlayerScreen::~PlayerScreen() {
        // Libérer les ressources
    }
} // namespace render

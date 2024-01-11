// GameStats.cpp
#include "GameStats.h"



namespace render {


    GameStats::GameStats(){
    
        if (!font.loadFromFile("../police_ecriture/04b_20/04B_20__.TTF")) {
            printf("error");
        }

        monsieurCorailLives = 3;  
        stormLives = 3;          

    
        textCorail.setFont(font);
        textCorail.setCharacterSize(10);
        textCorail.setFillColor(sf::Color::Red);

        textStorm.setFont(font);
        textStorm.setCharacterSize(10);
        textStorm.setFillColor(sf::Color::White);

      
        heartTexture.loadFromFile("../graphic ressources/coeur.jpg");
        cloudTexture.loadFromFile("../graphic ressources/nuage.png");

    
        heartSprite.setTexture(heartTexture);
        cloudSprite.setTexture(cloudTexture);
}

    void GameStats::setMonsieurCorailLives(int lives) {
        monsieurCorailLives = lives;
}

    void GameStats::setStormLives(int lives) {
        stormLives = lives;
}

    void GameStats::drawStats(sf::RenderWindow& window) {
        
        textCorail.setString("Monsieur Corail Lives: " + std::to_string(monsieurCorailLives));
        textCorail.setPosition(1275, 40);
        window.draw(textCorail);

        textStorm.setString("Storm Lives: " + std::to_string(stormLives));
        textStorm.setPosition(110, 40);
        window.draw(textStorm);

    // Dessin des nuages 
        const int cloudSpacing = 70;  // Espacement entre les nuages

        for (int i = 0; i < stormLives; ++i) {
            cloudSprite.setPosition(100 + i * cloudSpacing, 70);
            cloudSprite.setScale(0.2 , 0.2) ;
            window.draw(cloudSprite);
    }

    // Dessin des coeurs 

        const int heartSpacing = 70;  // Espacement entre les coeurs

        for (int i = 0; i < monsieurCorailLives; ++i) {
            heartSprite.setPosition(1325 + i * heartSpacing, 70);
            heartSprite.setScale(0.25 , 0.25)  ;
            window.draw(heartSprite);
    }
}
}

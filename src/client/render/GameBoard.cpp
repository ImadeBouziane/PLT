#include <string>
#include "render.h"
#include "GameBoard.h"



namespace render {
    GameBoard::GameBoard(sf::RenderWindow& window) : window(window) {
       
        
        // Initialisations specifiques du plateau de jeu
        loadBoardImage("../graphic ressources/plateau.jpg");


        Background.setPosition(400,    100);
        Background.setScale(0.45, 0.45);

        loadBoardTrap(); 
    }

    void GameBoard::loadBoardImage(const std::string& filename) {
        BackgroundTexture.loadFromFile(filename);
        Background.setTexture(BackgroundTexture);
    }
    int x0 = 545; 
    int y0 = 242;
    int x1 = 675;
    int x2 = 675; 
    int y1 = 120;
    int y2 = 750;
    void GameBoard::loadBoardTrap(){
        for(int i = 0; i < 3 ; i++){
            
            
            std::string imagePath = "../graphic ressources/Traps/4-7/piege" + std::to_string(i) + ".jpg";
            BackgroundTrapTexture[i].loadFromFile(imagePath) ;
            BackgroundTrap[i].setTexture(BackgroundTrapTexture[i]);
             
            BackgroundTrap[i].setRotation(90);
            BackgroundTrap[i].setPosition(x0, y0);
            BackgroundTrap[i].setScale(1, 1); 
            y0 = y0 + 180; 
        }
        
         for(int i = 3; i < 6 ; i++){
            
            
            std::string imagePath = "../graphic ressources/Traps/4-7/piege" + std::to_string(i) + ".jpg";
            BackgroundTrapTexture[i].loadFromFile(imagePath) ;
            BackgroundTrap[i].setTexture(BackgroundTrapTexture[i]);
            
            BackgroundTrap[i].setPosition(x1, y1);
            BackgroundTrap[i].setScale(1, 1); 
            x1 = x1 + 180; 
        }

         for(int i = 6; i < 9 ; i++){
            
            
            std::string imagePath = "../graphic ressources/Traps/4-7/piege" + std::to_string(i) + ".jpg";
            BackgroundTrapTexture[i].loadFromFile(imagePath) ;
            BackgroundTrap[i].setTexture(BackgroundTrapTexture[i]);
            
            BackgroundTrap[i].setPosition(x2, y2);
            BackgroundTrap[i].setScale(1, 1); 
            x2 = x2 + 178; 
        }

       
        
    }



    void GameBoard::draw(sf::RenderWindow& window) {
        window.draw(Background);
    }
    void GameBoard::drawTrap(sf::RenderWindow& window){
        for (int i = 0; i < 9; ++i) {
            window.draw(BackgroundTrap[i]);
        }
    }

    GameBoard::~GameBoard() {
        
        }
} // namespace render


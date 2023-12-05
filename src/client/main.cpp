#include <iostream>


#include <SFML/Graphics.hpp>



// Fin test SFML
#include <render.h>
#include <state.h>
#include <cstring>

using namespace std;
//using namespace client;

int main(int argc,char* argv[])
{
    //Exemple exemple;
    //exemple.setX(53);

/*
    if (argc > 1) {

        if (strcmp(argv[1], "hello") == 0) {

            cout << "Bonjour le monde !" << endl;
        } else {
            cout << "It works !" << endl;
        }
    }
    else {cout << "It works !" << endl;}*/

// Créer une fenêtre
    sf::RenderWindow window(sf::VideoMode(800, 600), "Mon jeu video test");

    // Charger une image
    sf::Texture texture;
    if (!texture.loadFromFile("../graphic ressources/plateau.jpg")) {
        // Gérer l'erreur
    }

    // Créer un sprite
    sf::Sprite sprite;
    sprite.setTexture(texture);

    // Boucle de jeu
    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        // Effacer l'écran
        window.clear();

        // Dessiner le sprite
        window.draw(sprite);

        // Mettre à jour la fenêtre
        window.display();
    }

    return 0;
}

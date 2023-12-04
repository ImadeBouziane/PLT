#include <iostream>

// Les lignes suivantes ne servent qu'à vérifier que la compilation avec SFML fonctionne
#include <SFML/Graphics.hpp>

void testSFML() {
    sf::Texture texture;
}

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

// Créer la fenêtre SFML
    sf::RenderWindow window(sf::VideoMode(800, 600), "Mon Jeu");

    // Créer une instance de GameBoard
    render::GameBoard gameBoard;

    // Boucle de jeu
    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(gameBoard.GetBackground());
        // Dessiner d'autres éléments ici si nécessaire
        window.display();
    }

    return 0;
}

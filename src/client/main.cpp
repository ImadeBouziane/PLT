#include <iostream>

// Les lignes suivantes ne servent qu'à vérifier que la compilation avec SFML fonctionne
#include <SFML/Graphics.hpp>

void testSFML() {
    sf::Texture texture;
}

// Fin test SFML

#include <Exemple.h>
#include <cstring>

using namespace std;
using namespace Exemple;

int main(int argc,char* argv[])
{
    Exemple exemple;
    exemple.setX(53);


    if (argc > 1) {

        if (strcmp(argv[1], "hello") == 0) {

            cout << "Bonjour le monde !" << endl;
        } else {
            cout << "It works !" << endl;
        }
    }
    else {cout << "It works !" << endl;}

    return 0;
}

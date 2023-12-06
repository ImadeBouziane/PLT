#include <SFML/Graphics.hpp>
#include "GameBoard.h"

namespace render {

  

    // Constructeur
    GameBoard::GameBoard() {
        // Initialisation des attributs
        Background.setSize(sf::Vector2f(WINDOW_WIDTH, WINDOW_HEIGHT));
        Background.setFillColor(sf::Color::Black);

        // Initialiser les emplacements des cartes
        initializeCardSlots();

        Title.setString("Game Title");
        Title.setCharacterSize(30);
        Title.setFillColor(sf::Color::White);

        // Positionner le titre au centre de l'écran
        sf::FloatRect titleBounds = Title.getLocalBounds();
        Title.setPosition((WINDOW_WIDTH - titleBounds.width) / 2.0f, 20.0f);
    }

    // Destructeur
    GameBoard::~GameBoard() {
        // Libérer les ressources si nécessaire
    }

    // Getter pour les cartes affichées
    std::vector<sf::RectangleShape> GameBoard::getDisplayedCards() {
        return DisplayedCard;
    }

    // Getter pour le titre
    sf::Text GameBoard::getTitle() {
        return Title;
    }

    void GameBoard::initializeCardSlots() {
        float initialX = WINDOW_WIDTH - CARD_WIDTH - 10.0;
        float initialY = WINDOW_HEIGHT - CARD_HEIGHT - 10.0;

        for (int i = 0; i < NUM_CARDS; ++i) {
            sf::RectangleShape cardSlot;
            cardSlot.setSize(sf::Vector2f(CARD_WIDTH, CARD_HEIGHT));
            cardSlot.setPosition(initialX - i * (CARD_WIDTH + CARD_SPACING), initialY);
            cardSlot.setFillColor(sf::Color::White);
            cardSlot.setOutlineThickness(2.0f);
            cardSlot.setOutlineColor(sf::Color::White);
            DisplayedCard.push_back(cardSlot);
        }
    }

    std::vector<sf::RectangleShape> GameBoard::getCardSlots() {
        return CardSlots;
    }

    sf::RectangleShape GameBoard::GetBackground() {
        return Background;
    }

} // namespace render

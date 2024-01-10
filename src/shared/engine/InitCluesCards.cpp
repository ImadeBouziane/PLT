#include "engine/InitCluesCards.h"
#include "state/Clues.h"
#include <random>
#include <ctime>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

namespace engine {

std::vector<state::Clues> InitCluesCards::InitClues() {
    std::vector<state::Clues> cluesDeck;

    
    state::Clues clue;
    clue.setIdcard("Spa Botanique");
    clue.setCardsTypes("Clues");
    clue.setCluesTypes("Place");
    clue.setIsRevealed(false);
    cluesDeck.push_back(clue);

     state::Clues clue1;
    clue1.setIdcard("Piscine à débordement");
    clue1.setCardsTypes("Clues");
    clue1.setCluesTypes("Place");
    clue1.setIsRevealed(false);
    cluesDeck.push_back(clue1);

     state::Clues clue2;
    clue2.setIdcard("Villa Royale");
    clue2.setCardsTypes("Clues");
    clue2.setCluesTypes("Place");
    clue2.setIsRevealed(false);
    cluesDeck.push_back(clue2);

     state::Clues clue3;
    clue3.setIdcard("Reception");
    clue3.setCardsTypes("Clues");
    clue3.setCluesTypes("Place");
    clue3.setIsRevealed(false);
    cluesDeck.push_back(clue3);

    state::Clues clue4;
    clue4.setIdcard("Crique Secrete");
    clue4.setCardsTypes("Clues");
    clue4.setCluesTypes("Place");
    clue4.setIsRevealed(false);
    cluesDeck.push_back(clue4);

    state::Clues clue5;
    clue5.setIdcard("Salon Tropical");
    clue5.setCardsTypes("Clues");
    clue5.setCluesTypes("Place");
    clue5.setIsRevealed(false);
    cluesDeck.push_back(clue5);

    state::Clues clue6;
    clue6.setIdcard("Terasse d'observation");
    clue6.setCardsTypes("Clues");
    clue6.setCluesTypes("Place");
    clue6.setIsRevealed(false);
    cluesDeck.push_back(clue6);

    state::Clues clue7;
    clue7.setIdcard("Poste de secours");
    clue7.setCardsTypes("Clues");
    clue7.setCluesTypes("Place");
    clue7.setIsRevealed(false);
    cluesDeck.push_back(clue7);

    state::Clues clue8;
    clue8.setIdcard("Salle de service");
    clue8.setCardsTypes("Clues");
    clue8.setCluesTypes("Place");
    clue8.setIsRevealed(false);
    cluesDeck.push_back(clue8);

    state::Clues clue9;
    clue9.setIdcard("Poison");
    clue9.setCardsTypes("Clues");
    clue9.setCluesTypes("Weapon");
    clue9.setIsRevealed(false);
    cluesDeck.push_back(clue9);

    state::Clues clue10;
    clue10.setIdcard("Marteau");
    clue10.setCardsTypes("Clues");
    clue10.setCluesTypes("Weapon");
    clue10.setIsRevealed(false);
    cluesDeck.push_back(clue10);

    state::Clues clue11;
    clue11.setIdcard("Fil de pêche");
    clue11.setCardsTypes("Clues");
    clue11.setCluesTypes("Weapon");
    clue11.setIsRevealed(false);
    cluesDeck.push_back(clue11);

    state::Clues clue12;
    clue12.setIdcard("Couteau");
    clue12.setCardsTypes("Clues");
    clue12.setCluesTypes("Weapon");
    clue12.setIsRevealed(false);
    cluesDeck.push_back(clue12);

    state::Clues clue13;
    clue13.setIdcard("Hachette");
    clue13.setCardsTypes("Clues");
    clue13.setCluesTypes("Weapon");
    clue13.setIsRevealed(false);
    cluesDeck.push_back(clue13);

    state::Clues clue14;
    clue14.setIdcard("Pistolet de detresse");
    clue14.setCardsTypes("Clues");
    clue14.setCluesTypes("Weapon");
    clue14.setIsRevealed(false);
    cluesDeck.push_back(clue14);

    for (int i = 0; i < 6; ++i) {
        state::Clues clue15;
        clue15.setIdcard("Aucun Indice Trouvé");
        clue15.setCardsTypes("Clues");
        clue15.setCluesTypes("Weapon");
        clue15.setIsRevealed(false);
        cluesDeck.push_back(clue15);
        }
       
    
    
    return cluesDeck;
}

    std::pair<state::Clues, std::vector<state::Clues>> InitCrimeWeapon(std::vector<state::Clues>& cluesList){
        
        std::vector<state::Clues> shuffledClues = cluesList;

        // Mélanger le vecteur shuffledClues
        std::random_device rd;
        std::mt19937 g(rd());
        std::shuffle(shuffledClues.begin(), shuffledClues.end(), g);

        // Recherchez la première Clue dans le vecteur mélangé
       auto it = std::find_if(shuffledClues.begin(), shuffledClues.end(), [](state::Clues& clue) {
            return clue.getCluesType() == "Weapon";
        });

       // Si une Clue est trouvée, retirez-la du vecteur
       if (it != shuffledClues.end()) {
            state::Clues selectedClue = *it;
            shuffledClues.erase(it);
            return std::make_pair(selectedClue, shuffledClues);
        }

        // Si aucune Clue n'est trouvée, retournez une paire par défaut
        return std::make_pair(state::Clues(), shuffledClues);
    }
        std::pair<state::Clues, std::vector<state::Clues>> InitCrimePlace(std::vector<state::Clues>& cluesList){
        
        std::vector<state::Clues> shuffledClues = cluesList;

        // Mélanger le vecteur shuffledClues
        std::random_device rd;
        std::mt19937 g(rd());
        std::shuffle(shuffledClues.begin(), shuffledClues.end(), g);

        // Recherchez la première Clue dans le vecteur mélangé
       auto it = std::find_if(shuffledClues.begin(), shuffledClues.end(), [](state::Clues& clue) {
            return clue.getCluesType() == "Place";
        });

       // Si une Clue est trouvée, retirez-la du vecteur
       if (it != shuffledClues.end()) {
            state::Clues selectedClue = *it;
            shuffledClues.erase(it);
            return std::make_pair(selectedClue, shuffledClues);
    }

        // Si aucune Clue n'est trouvée, retournez une paire par défaut
        return std::make_pair(state::Clues(), shuffledClues);
}
    std::pair<state::Clues, std::vector<state::Clues>> InitSafePlace(std::vector<state::Clues>& cluesList){
        
        std::vector<state::Clues> shuffledClues = cluesList;

        // Mélanger le vecteur shuffledClues
        std::random_device rd;
        std::mt19937 g(rd());
        std::shuffle(shuffledClues.begin(), shuffledClues.end(), g);

        // Recherchez la première Clue dans le vecteur mélangé
       auto it = std::find_if(shuffledClues.begin(), shuffledClues.end(), [](state::Clues& clue) {
            return clue.getCluesType() == "Place";
        });

       // Si une Clue est trouvée, retirez-la du vecteur
       if (it != shuffledClues.end()) {
            state::Clues selectedClue = *it;
            shuffledClues.erase(it);
            return std::make_pair(selectedClue, shuffledClues);
    }

        // Si aucune Clue n'est trouvée, retournez une paire par défaut
        return std::make_pair(state::Clues(), shuffledClues);
}

}
// namespace engine

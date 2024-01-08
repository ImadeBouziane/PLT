// Dans le fichier InitClues.cpp

#include "engine/InitCluesCards.h"
#include "state/Clues.h"

namespace engine {

std::vector<state::Clues> InitClues::Init() {
    std::vector<state::Clues> cluesDeck;

    // Ajouter les cartes d'indices à la pioche
    for (int i = 0; i < 3; ++i) {
        state::Clues clue;
        clue.setIdCard("");
        clue.setCardsType("");

        // Utilisez les setters pour attribuer les valeurs spécifiques des indices
        clue.setClueType("Type de l'indice " + std::to_string(i + 1));
        clue.setClueDescription("Description de l'indice " + std::to_string(i + 1));

        cluesDeck.push_back(clue);

        // Ajouter deux copies supplémentaires de la même carte
        cluesDeck.push_back(clue);
        cluesDeck.push_back(clue);
    }

   

    return cluesDeck;
}

} // namespace engine

#include "MoveCommand.h"
#include "state/Places.h"
#include "state/Players.h"

namespace engine {

    MoveCommand::MoveCommand(state::PlayerID player) {
        // Constructeur
    }

    MoveCommand::~MoveCommand() {
        // Destructeur
    }

    void MoveCommand::serialize() {
        // Méthode pour la sérialisation (si nécessaire)
    }

    bool MoveCommand::execute(state::Places place, std::vector<state::Players> players) {
        // Mettre à jour la liste des joueurs présents dans 'place'
        place.setPresentPlayers(players);

        // Vous pouvez ajouter d'autres logiques ici si nécessaire

        return true; // Retourner 'true' si l'exécution est réussie
    }

    // ... autres méthodes de la classe MoveCommand ...

}

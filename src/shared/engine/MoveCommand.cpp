#include "MoveCommand.h"
#include "state/Places.h"
#include "state/Players.h"
#include "InitPlaces.h"


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

       
        return true; // Retourner 'true' si l'exécution est réussie
    }

    

}

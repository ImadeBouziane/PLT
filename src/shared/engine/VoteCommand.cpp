#include "VoteCommand.h"
#include "state/Game.h"
#include <iostream>

namespace engine {
         VoteCommand::~VoteCommand() {}


         bool VoteCommand::Vote(state::PlayerID player){
            
         std::cout << "Joueur " << static_cast<int>(player) << ", votez-vous oui (1) ou non (0) ? ";
         int vote;
         std::cin >> vote;

         return vote == 1; // Retourne true si le joueur vote oui (1), false autrement
       }

        
   void VoteCommand::PropositionVote (state::Game& game) {
  
    int yesVotes = 0;
    int noVotes = 0;

    for (auto& Players : game.listPlayers) {
        // Supposons que PlayerID est accessible pour chaque objet player
        state::PlayerID playerID = Players.getIdPlayer(); // Méthode fictive pour obtenir PlayerID
        if (Vote(playerID)) {
            yesVotes++;
        } else {
            noVotes++;
        }
    }

    if (yesVotes > noVotes) {
        
    } else {
        // La majorité a voté non ou égalité
        // Gérez ce cas si nécessaire
    }
}
         }


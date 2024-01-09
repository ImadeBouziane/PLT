#include "VoteCommand.h"
#include "state/Game.h"
#include <iostream>
#include <vector>
#include "InitPlaces.cpp"
#include "state/Places.h"
#include "Engine.cpp"

#include <limits> // Pour std::numeric_limits



namespace engine {






         VoteCommand::~VoteCommand() {}


         bool VoteCommand::Vote(state::PlayerID player){
            
         std::cout << "Joueur " << static_cast<int>(player) << ", votez-vous oui (1) ou non (0) ? ";
         int vote;
         std::cin >> vote;

         return vote == 1; // Retourne true si le joueur vote oui (1), false autrement
       }

        
   void VoteCommand::PropositionVote (state::PlayerID &scout) {

    
    std::string placeName;

    std::vector<state::PlayerID> playerIds;
    int playerId;
    int yesVotes = 0;
    int noVotes = 0;

    // Demander au bodyguard de saisir un lieu
  std::cout << "Veuillez saisir le nom du lieu : ";
    std::getline(std::cin, placeName);
    
state::Places chosenPlace;


for  (auto& place : places) { // Remplacez listPlaces par votre liste de lieux
    if (place.getIdPlace() == placeName) { // Remplacez getId() par la méthode appropriée
        chosenPlace = place;
        
        break;
    }
}

    // Demander au bodyguard de saisir les ID de joueurs
    std::cout << "Saisissez les ID de joueurs (saisissez -1 pour terminer) : ";
    while (std::cin >> playerId && playerId != -1) {
        playerIds.push_back(static_cast<state::PlayerID>(playerId));

    }

    // Nettoyer le buffer d'entrée
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');


    for (auto& Players : myEngine.CurrentState.listPlayers) {
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
        
     }
    }
}


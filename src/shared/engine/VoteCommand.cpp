#include "VoteCommand.h"
#include "state/Game.h"
#include <iostream>
#include <vector>
//#include "Engine.h"
#include "state/Places.h"
#include "MoveCommand.h"
#include "state/Passives.cpp"
#include "InitPlaces.h"


#include <limits> // Pour std::numeric_limits



namespace engine {

         



         const std::vector<state::Places>  places = InitPlaces::Init();


         VoteCommand::~VoteCommand() {}


         bool VoteCommand::Vote(state::PlayerID player){
            
         std::cout << "Joueur " << static_cast<int>(player) << ", votez-vous oui (1) ou non (0) ? ";
         int vote;
         std::cin >> vote;

         return vote == 1; // Retourne true si le joueur vote oui (1), false autrement
       }

        
   void VoteCommand::execute(state::PlayerID &scout, Engine engine) {

    
    std::string placeName;

    std::vector<state::PlayerID> playerIds;
    int playerId;
    int yesVotes = 0;
    int noVotes = 0;
  
    int bodyguardIdInput;
    std::cout << "Veuillez saisir l'id d'un bodyguard : ";
    std::cin >> bodyguardIdInput;

    // Assurez-vous de nettoyer le buffer après la saisie
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    state::PlayerID bodyguardId = static_cast<state::PlayerID>(bodyguardIdInput);

  
    
state::Places chosenPlace;

 std::cout << "Veuillez saisir l'id d'un bodyguard : ";
    std::getline(std::cin, placeName);


for  (auto& place : places) { // Remplacez listPlaces par votre liste de lieux
    if (const_cast<state::Places&>(place).getIdPlace() == placeName) { // Remplacez getId() par la méthode appropriée
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


    for (auto& Players : engine.CurrentState.listPlayers) {
        // Supposons que PlayerID est accessible pour chaque objet player
        state::PlayerID playerID = Players.getIdPlayer(); // Méthode fictive pour obtenir PlayerID
        if (Vote(playerID)) {
            yesVotes++;
        } else {
            noVotes++;
        }
    }

    if (yesVotes > noVotes) {

        state::Players bodyguardPlayer;
    
    for (auto& player : engine.CurrentState.listPlayers) {
    if (player.getIdPlayer() == bodyguardId) {
        bodyguardPlayer = player;
        player.setrole(state::BODYGUARD);
        
       
        break;
    }
    
}

        

       std::vector<state::PlayerID> playerIds; // Votre liste d'ID
std::vector<state::Players> selectedPlayers; // Nouvelle liste pour les objets Players correspondants

// Supposons que listPlayers est votre liste de tous les joueurs
    for (auto& playerId : playerIds) { 
        for (auto& player :  engine.CurrentState.listPlayers) {
            if (player.getIdPlayer() == playerId) {
             selectedPlayers.push_back(player);
                break; // Arrêtez la boucle interne une fois que vous avez trouvé le joueur correspondant
        }
    }
}

        MoveCommand::execute(chosenPlace,selectedPlayers);
        
    } else {
        int currentTempestPoints = state::passives.getTempestPoint();
        
    // Diminution des points de Tempest de 1
    state::passives.setTempestPoint(currentTempestPoints - 1);
    if (state::passives.getTempestPoint() <= 0) {
        int currentlifePoint = state::passives.getLifePoint();
        state::passives.setLifePoint(currentlifePoint - 1);
        state::passives.setTempestPoint(3);



    }

    }
        
        
     }
    }



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

        
   Engine VoteCommand::execute(state::PlayerID &scout, Engine engine) {

    
    std::string placeName;

    std::vector<state::PlayerID> playerIds;
    int playerId;
    int yesVotes = 0;
    int noVotes = 0;
  
    int bodyguardIdInput;
    std::cout << "Veuillez saisir l'id d'un bodyguard : ";
    std::cin >> bodyguardIdInput;

    // Assurez-vous de nettoyer le buffer après la saisie

    
    state::PlayerID bodyguardId = static_cast<state::PlayerID>(bodyguardIdInput);


    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    state::Players bodyguardPlayer;

    for (auto& player : engine.CurrentState.listPlayers) {
        if (player.getIdPlayer() == bodyguardId) {
        
        player.setrole(state::SIMPLE);

        bodyguardPlayer = player;

        //std::cout << " - Joueur " << bodyguardPlayer.getIdPlayer() << " (" << bodyguardPlayer.getrole() << ")" << std::endl;
        break;
        }
    }
    


  
    
    state::Places chosenPlace;

    std::cout << "Veuillez choisir un lieu :";
    std::getline(std::cin, placeName);

    std::vector<state::Places> places = engine.CurrentState.getListPlaces(); 
     
    for  (auto& place :places ) { // Remplacez listPlaces par la liste de lieux
        if (const_cast<state::Places&>(place).getIdPlace() == placeName) { 
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
        std::cout<<chosenPlace.getIdPlace()<<"1"<<std::endl;
        
        //MoveCommand::execute(chosenPlace,selectedPlayers);
        chosenPlace.setPresentPlayers(selectedPlayers);

        std::cout<<chosenPlace.getIdPlace()<<std::endl;
        engine.CurrentState.setCurrentPlaces(chosenPlace);

        std::cout << "Piège activé : " << engine.CurrentState.getCurrentPlace().getTrap() << std::endl;

        

        


        std::cout<<"Les Joueurs présents à la Place:"<<chosenPlace.getIdPlace()<<"sont "<<std::endl ;
        for (auto& Players : chosenPlace.getPresentPlayers()) {
            
            std::cout<<Players.getIdPlayer()<<std::endl;
            } 
        

        
        
    } else {
        int currentTempestPoints = engine.CurrentState.getPassif().getTempestPoint();
        std::cout<<currentTempestPoints<<std::endl ;
        
        

        
    // Diminution des points de Tempest de 1
            currentTempestPoints = currentTempestPoints - 1; 
            std::cout<<currentTempestPoints<<std::endl ;
            state::Passives passif = engine.CurrentState.getPassif();
            passif.setTempestPoint(currentTempestPoints);
            engine.CurrentState.setPassif(passif);
            
            std::cout<<"La tempête se rapproche : elle est à "<<engine.CurrentState.getPassif().getTempestPoint()<<std::endl ;
            
        
            if (engine.CurrentState.getPassif().getTempestPoint() <= 0) {
                int currentlifePoint = engine.CurrentState.getPassif().getLifePoint();
                std::cout<<"La tempête a frappé . Mr Corail perd un point de Vie"<<std::endl ;
                state::Passives passif1 = engine.CurrentState.getPassif();
                passif1.setLifePoint(currentlifePoint - 1);
                passif1.setTempestPoint(3);

                engine.CurrentState.setPassif(passif1);


            



    }

    }
     return engine;
    }
};



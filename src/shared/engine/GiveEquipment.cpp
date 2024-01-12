#include <iostream>
#include <string>
#include <vector>
#include "Engine.h"
#include "state/Game.h"
#include "GiveEquipment.h"
#include <algorithm>
#include "engine/InitEquipmentCards.h"
#include "state/Equipments.h"
#include <random>
#include <ctime>




namespace engine {
    InitEquipmentCards initCards;
    std::vector<state::Equipments> deck = initCards.Init();

    std::vector<state::PlayerID> recipientPlayerIds;

Engine GiveEquipment::execute(state::PlayerID bodyguardId , engine::Engine myEngine) {
    std::vector<state::PlayerID> recipientPlayerIds;

    // Demander au BODYGUARD de sélectionner les destinataires
    std::cout << "BODYGUARD, veuillez sélectionner les joueurs à qui vous souhaitez donner des cartes.\n";
    std::string input;
    while (true) {
        std::cout << "Entrez l'ID du joueur ou 'fin' pour terminer: ";
        std::getline(std::cin, input);

        if (input == "fin") {
            break;
        }

        try {
            state::PlayerID selectedId = static_cast<state::PlayerID>(std::stoi(input));
        
                recipientPlayerIds.push_back(selectedId);
             
            
        } catch (const std::invalid_argument&) {
            std::cout << "Entrée invalide. Veuillez réessayer.\n";
        }
    }
   
     
    // Distribuer les cartes aux joueurs destinataires choisis
    std::mt19937 rng(time(nullptr));
    std::uniform_int_distribution<std::mt19937::result_type> dist(0, deck.size() - 1); // Déplacer ici

    // Distribuer les cartes aux joueurs destinataires choisis
    for (auto recipientId : recipientPlayerIds) {
        state::Players recipient = myEngine.getPlayer(recipientId);
        std::vector<state::Equipments> currentEquipments = recipient.getEquipments();
        currentEquipments.push_back(deck[dist(rng)]);
        recipient.setEquipments(currentEquipments);
    }

    // Parcourir la liste des joueurs et mettre à jour les équipements si nécessaire
    for (auto& playerInList : myEngine.CurrentState.listPlayers) {
        if (std::find(recipientPlayerIds.begin(), recipientPlayerIds.end(), playerInList.getIdPlayer()) != recipientPlayerIds.end()) {
            // Le joueur est un destinataire, mettre à jour ses équipements
            std::vector<state::Equipments> currentEquipments = playerInList.getEquipments();
            currentEquipments.push_back(deck[dist(rng)]); // Utiliser dist ici
            playerInList.setEquipments(currentEquipments);
        }
    }

  
    
    

    return myEngine;
}

}  // namespace engine


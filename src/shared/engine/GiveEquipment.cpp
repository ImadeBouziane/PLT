#include <iostream>
#include <string>
#include <vector>
#include "Engine.h"
#include "state/Game.h"
#include "GiveEquipment.h"
#include "Engine.cpp"
#include "engine/InitEquipmentCards.h"
#include "state/Equipments.h"
#include <random>
#include <ctime>




namespace engine {
    InitEquipmentCards initCards;
    std::vector<state::Equipments> deck = initCards.Init();

    std::vector<state::PlayerID> recipientPlayerIds;

bool GiveEquipment::execute(state::PlayerID bodyguardId) {
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
     std::mt19937 rng(time(nullptr)); 
     
    // Distribuer les cartes aux joueurs destinataires choisis
    for (auto recipientId : recipientPlayerIds) {
        state::Players recipient = myEngine.getPlayer(recipientId);
         // Initialise le générateur de nombres aléatoires
         

         // Crée une distribution pour l'index du tableau
            std::uniform_int_distribution<std::mt19937::result_type> dist(0, deck.size() - 1);
               

            std::vector<state::Equipments> currentEquipments = recipient.getEquipments();
             currentEquipments.push_back(deck[dist(rng)]);
             recipient.setEquipments(currentEquipments);    
            
            
                }

    // Mise à jour de l'état du jeu
    // Par exemple : bodyguard.removeCard(card);

    return true;
}

}  // namespace engine

#include "engine/InitEquipmentCards.h"
#include "state/Equipments.h"
#include "TrapCommand.h"
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include "engine/InitCluesCards.h"

namespace engine {
    //InitCluesCards InitClues;
    //std::vector<state::Equipments> deck = initCards.Init();


    TrapCommand::TrapCommand(state::PlayerID player) : place(place) {}

    std::vector<state::Equipments> chooseCommand (state::PlayerID player,std::vector<state::Equipments> availableEquipment){
        std::vector<state::Equipments> contributedEquipments;
        for (auto& equipment : availableEquipment) {
            std::cout << "ID: " << equipment.getIdCard() << " | Valeur: " << equipment.getEquipmentValue()
                      << " | Triangle: " << equipment.getIsTriangle() << " | Circle: " << equipment.getIsCircle()
                      << std::endl;
    }

        // Demander au joueur de choisir le nombre d'équipements à contribuer (entre 0 et 3)
        int numContributedEquipments;
        do {
        std::cout << "Choisir un nombre d'équipments à jouer(0-3): ";
        std::cin >> numContributedEquipments;
        } while (numContributedEquipments < 0 || numContributedEquipments > 3);

        // Demander au joueur de choisir les équipements à contribuer
        for (int i = 0; i < numContributedEquipments; ++i) {
            std::string equipmentId;
            std::cout << "Entrez le nombre d'équipements voulu " << i + 1 << ": ";
            std::cin >> equipmentId;

            // Rechercher l'équipement dans la liste des équipements disponibles
            auto foundEquipment = std::find_if(availableEquipment.begin(), availableEquipment.end(),
                                               [equipmentId](state::Equipments& equipment) {
                                                   return equipment.getIdCard() == equipmentId;
                                               });

            // Si l'équipement est trouvé, l'ajouter à la liste des équipements contribués
            if (foundEquipment != availableEquipment.end()) {
                contributedEquipments.push_back(*foundEquipment);
            } else {
                std::cout << "L'ID de l'equipement est invalide , veuillez en choisir un autre." << std::endl;
                --i;  // Décrémenter i pour que le joueur choisisse à nouveau cet équipement
            }   
        }

        std::cout << "Vous avez bien choisi vos équipements" << std::endl;

        return contributedEquipments;

   
    }

    
    

    /*
    
    
    void TrapCommand::execute(state::PlayerID players) {
    std::cout << "Piège activé : " << place.getTrap().getIdCard() << std::endl;
    std::cout << "Piège activé : " << place.getTrap().getIdCard() << std::endl;
    

    // Itérer sur les joueurs présents
    for (const auto& player : place.getPresentPlayers()) {
        std::cout << "Joueur " << player.getIdPlayer() << ", utilisez vos équipements." << std::endl;

        // Demander au joueur de choisir et contribuer avec des équipements
        std::vector<state::Equipments> contributedEquipments = chooseCommand(player.getIdPlayer(), player.getAvailableEquipments());

        // Pour chaque équipement contribué, mettre à jour trapValue en conséquence
        for (const auto& contributedEquipment : contributedEquipments) {
            int equipmentValue = contributedEquipment.getEquipmentValue();
            int trapValue = place.getTrap().getTrapValue();

            // Si les valeurs sont du même signe, les ajouter ; sinon, les soustraire
            place.getTrap().setTrapValue((equipmentValue * trapValue >= 0) ? (trapValue + equipmentValue) : (trapValue - equipmentValue));
        }
    }

    // Vérifier si le piège est désamorcé ou activé en fonction de trapValue
    if (place.getTrap().getTrapValue() >= 0) {
        std::cout << "Piège désamorcé !" << std::endl;
        // TODO: Implémenter la logique pour un piège désamorcé
    } else {
        std::cout << "Piège activé !" << std::endl;
        // TODO: Implémenter la logique pour un piège activé
    }
}
}*/
    
}
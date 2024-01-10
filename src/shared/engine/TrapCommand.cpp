#include "engine/InitEquipmentCards.h"
#include "state/Equipments.h"
#include "TrapCommand.h"
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include "engine/InitCluesCards.h"
#include "Engine.h"
#include "state/Passives.h"

namespace engine {
    
    std::vector<state::Traps> ListTrap;


    //TrapCommand::TrapCommand(state::PlayerID player) : place(place) {}

    
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

   
    };

    
    void TrapCommand::execute(state::PlayerID players, state::Game game) {

        std::vector<state::Traps> ListTrap;

        state::Traps trap1;
        trap1.setIdcard("Flaque de Pétrole");
        trap1.setCardsTypes("Traps");
        trap1.setTrapValue(6);
        trap1.setIsDefused(false);
        trap1.setIsTriangle(false);
        trap1.setIsCircle(true);

        ListTrap.push_back(trap1); 

        state::Traps trap2;
        trap2.setIdcard("Alligator Sauvage");
        trap2.setCardsTypes("Traps");
        trap2.setTrapValue(8);
        trap2.setIsDefused(false);
        trap2.setIsTriangle(true);
        trap2.setIsCircle(false);
        ListTrap.push_back(trap2);

        state::Traps trap3;
        trap3.setIdcard("Danger Électrique");
        trap3.setCardsTypes("Traps");
        trap3.setTrapValue(6);
        trap3.setIsDefused(false);
        trap3.setIsTriangle(false);
        trap3.setIsCircle(true);

        ListTrap.push_back(trap3);

        state::Traps trap4;
        trap4.setIdcard("Feu de Cuisine");
        trap4.setCardsTypes("Traps");
        trap4.setTrapValue(6);
        trap4.setIsDefused(false);
        trap4.setIsTriangle(true);
        trap4.setIsCircle(false);

        ListTrap.push_back(trap4);

        state::Traps trap5;
        trap5.setIdcard("Pièce Inondée");
        trap5.setCardsTypes("Traps");
        trap5.setTrapValue(6);
        trap5.setIsDefused(false);
        trap5.setIsTriangle(true);
        trap5.setIsCircle(false);

        ListTrap.push_back(trap5);

        state::Traps trap6;
        trap6.setIdcard("Pièce Explosif à Fil Tendu");
        trap6.setCardsTypes("Traps");
        trap6.setTrapValue(9);
        trap6.setIsDefused(false);
        trap6.setIsTriangle(true);
        trap6.setIsCircle(true);
        
        ListTrap.push_back(trap6);

        state::Traps trap7;
        trap7.setIdcard("Serpents Venimeux");
        trap7.setCardsTypes("Traps");
        trap7.setTrapValue(7);
        trap7.setIsDefused(false);
        trap7.setIsTriangle(true);
        trap7.setIsCircle(false);
        
        ListTrap.push_back(trap7);


        state::Traps trap8;
        trap8.setIdcard("Trou dans le Plancher");
        trap8.setCardsTypes("Traps");
        trap8.setTrapValue(7);
        trap8.setIsDefused(false);
        trap8.setIsTriangle(false);
        trap8.setIsCircle(true);
        ListTrap.push_back(trap8);

        state::Traps trap9;
        trap9.setIdcard("Plafond Effondré");
        trap9.setCardsTypes("Traps");
        trap9.setTrapValue(7);
        trap9.setIsDefused(false);
        trap9.setIsTriangle(false);
        trap9.setIsCircle(true);

        ListTrap.push_back(trap9);

    

        std::cout << "Piège activé : " << place.getTrap() << std::endl;
        // Utiliser la fonction find_if pour rechercher le piège correspondant à l'ID
        auto foundTrap = std::find_if(ListTrap.begin(), ListTrap.end(), [this](state::Traps& trap) {
        return trap.getIdCard() == this->place.getTrap();
    });

        // Vérifier si le piège correspondant a été trouvé
        if (foundTrap != ListTrap.end()) {
        // Accéder aux informations du piège trouvé
            if (foundTrap->getIsCircle() && foundTrap->getIsTriangle()){
                std::cout << "Le Piège est de signe triangle et cercle : " << std::endl;
                std::cout << "Sa valeur vaut : " << foundTrap->getTrapValue() << std::endl;
            }
            else if (foundTrap->getIsCircle()){
                std::cout << "Le Piège est de signe Cercle : " << std::endl;
                std::cout << "Sa valeur vaut : " << foundTrap->getTrapValue() << std::endl;
                
            }

            else if (foundTrap->getIsTriangle()){
                std::cout << "Le Piège est de signe Cercle : " << std::endl;
                std::cout << "Sa valeur vaut : " << foundTrap->getTrapValue() << std::endl;
                
            }
            
            else{
                std::cout << "Sa valeur vaut : " << foundTrap->getTrapValue() << std::endl;

            }
        
        } 
        else {
            std::cout << "Piège introuvable." << std::endl;
        }
    // Itérer sur les joueurs présents
    int value = 0; 
    
    for (auto& player : place.getPresentPlayers()) {
        std::cout << "Joueur " << player.getIdPlayer() << ", utilisez vos équipements." << std::endl;

        // Demander au joueur de choisir et contribuer avec des équipements
        std::vector<state::Equipments> contributedEquipments = chooseCommand(player.getIdPlayer(), player.getEquipments());

        // Pour chaque équipement contribué, mettre à jour Value en conséquence
        
        
        for (auto& contributedEquipment : contributedEquipments) {
            int equipmentValue = contributedEquipment.getEquipmentValue();
            

            // Si les valeurs sont du même signe, les ajouter ; sinon, les soustraire
            if ((foundTrap->getIsCircle() && not(foundTrap->getIsTriangle()) && contributedEquipment.getIsTriangle()) || (foundTrap->getIsTriangle() && not(foundTrap->getIsCircle()) && contributedEquipment.getIsCircle()) ){
            
                value = value - equipmentValue;
            
            }

            else{
                value = value + equipmentValue;
            }
            
        }
    }

    // Vérifier si le piège est désamorcé ou activé en fonction de trapValue
    if (value >= foundTrap->getTrapValue()) {
      
    std::vector<state::Clues> cluesList;
    std::string cluesType;
    bool isRevealed;

    std::cout << "Entrez vos indices (tapez 'fin' pour le type d'indice pour terminer) : " << std::endl;
    while (true) {
        std::cout << "Entrez le type d'indice : ";
        std::getline(std::cin, cluesType);
        if (cluesType == "fin") {
            break;
        }

        isRevealed = true;  // Supposons que l'indice n'est pas révélé initialement

        state::Clues newClue;
        newClue.setCluesTypes(cluesType);
        newClue.setIsRevealed(isRevealed);
        cluesList.push_back(newClue);

        // Afficher l'indice ajouté
        std::cout << "Indice ajouté : " << newClue.getCluesType() << std::endl;

    }

    for (auto& player : game.listPlayers) {
        if (player.getrole() == 3) {
            player.setannouncedClues(cluesList);
            break; 
        }
    }

    

        

    } else {
        std::cout << "Piège activé !" << std::endl;
        // TODO: Implémenter la logique pour un piège activé

         std::vector<state::Clues> cluesList;
    std::string cluesType;
    bool isRevealed;

    std::cout << "Entrez vos indices (tapez 'fin' pour le type d'indice pour terminer) : " << std::endl;
    while (true) {
        std::cout << "Entrez le type d'indice : ";
        std::getline(std::cin, cluesType);
        if (cluesType == "fin") {
            break;
        }

        isRevealed = true;  // Supposons que l'indice n'est pas révélé initialement

        state::Clues newClue;
        newClue.setCluesTypes(cluesType);
        newClue.setIsRevealed(isRevealed);
        cluesList.push_back(newClue);

        // Afficher l'indice ajouté
        std::cout << "Indice ajouté : " << newClue.getCluesType() << std::endl;

    }

    for (auto& player : myEngine.CurrentState.listPlayers) {
        if (player.getrole() == state::RoleType::BODYGUARD) {
            player.setannouncedClues(cluesList);
            break; 
        }
    }

    int currentlifePoint = state::passives.getLifePoint();
        state::passives.setLifePoint(currentlifePoint - 1);



    }
}
}
    

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
#include "state/Places.h"

namespace engine {
    
    std::vector<state::Traps> ListTrap;


    TrapCommand::TrapCommand(state::PlayerID player, state::Game game) {}

    
    
    

    
    Engine TrapCommand::execute(state::PlayerID players, Engine& engine, state::Places place) {

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

    

        std::cout << "Piège activé : " << engine.CurrentState.getCurrentPlace().getTrap() << std::endl;
        // Utiliser la fonction find_if pour rechercher le piège correspondant à l'ID
        auto foundTrap = std::find_if(ListTrap.begin(), ListTrap.end(), [&place](state::Traps& trap) {
        return trap.getIdCard() == place.getTrap();
    });

        // Vérifier si le piège correspondant a été trouvé
        if (foundTrap != ListTrap.end()) {
        // Accéder aux informations du piège trouvé
            if (foundTrap->getIsCircle() && foundTrap->getIsTriangle()){
                std::cout << "Le Piège est de signe triangle et cercle !!! " << std::endl;
                std::cout << "Sa valeur vaut : " << foundTrap -> getTrapValue() << std::endl;
            }
            else if (foundTrap->getIsCircle()){
                std::cout << "Le Piège est de signe Cercle : " << std::endl;
                std::cout << "Sa valeur vaut : " << foundTrap->getTrapValue() << std::endl;
                
            }

            else if (foundTrap->getIsTriangle()){
                std::cout << "Le Piège est de signe Triangle : " << std::endl;
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
    int i = 0; 
    for (auto& player : place.getPresentPlayers()) {
        i = i + 1;
        std::cout <<"Joueur "<< player.getIdPlayer()<< std::endl;
        

        // Demander au joueur de choisir et contribuer avec des équipements
        // Pour chaque équipement contribué, mettre à jour Value en conséquence
        std::vector<state::Equipments> contributedEquipments;
        
        for (auto& equipment : player.getEquipments()) {
            
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
            std::cout << "Quel équipement voulez-vous jouez" << ": ";
            std::cin >> equipmentId;

            // Rechercher l'équipement dans la liste des équipements disponibles


            
            for (auto& equipment : player.getEquipments()) {
                if (equipment.getIdCard() == equipmentId){
                    state::Equipments foundEquipment = equipment ;

                    // Si l'équipement est trouvé, l'ajouter à la liste des équipements contribués
                    contributedEquipments.push_back(foundEquipment);
                    break;
                    }
        }
  
        
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
    }



    // Vérifier si le piège est désamorcé ou activé en fonction de trapValue
    if (value >= foundTrap->getTrapValue()) {
        std::cout<<"Le piège a été désamorcé"<<std::endl; 
      
    std::vector<state::Clues> cluesList = place.getListClues();
    cluesList[0].setIsRevealed(true);
    cluesList[1].setIsRevealed(true);

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
    

    for (auto& player : engine.CurrentState.listPlayers) {
        if (player.getrole() == 3) {
            player.setannouncedClues(cluesList);
            break; 
        }
    }

    

        

    } else {
        std::cout << "Le Piège s'est activé !" << std::endl;
        

        std::vector<state::Clues> cluesList1 = place.getListClues();
        cluesList1[0].setIsRevealed(true);
        cluesList1[1].setIsRevealed(true);
        std::string cluesType;
        std::cout << "Entrez vos indices (tapez 'fin' pour le type d'indice pour terminer) : " << std::endl;
        while (true) {
            std::cout << "Entrez le type d'indice : ";
            std::getline(std::cin, cluesType);
            if (cluesType == "fin") {
                break;
            }
            bool isRevealed;
            isRevealed = true;  // Supposons que l'indice n'est pas révélé initialement

            state::Clues newClue;
            newClue.setCluesTypes(cluesType);
            newClue.setIsRevealed(isRevealed);
            cluesList1.push_back(newClue);

            // Afficher l'indice ajouté
            std::cout << "Indice ajouté : " << newClue.getCluesType() << std::endl;

    }

    for (auto& player : engine.CurrentState.listPlayers) {
        if (player.getrole() == state::RoleType::BODYGUARD) {
            player.setannouncedClues(cluesList1);
            break; 
        }
    }
        state::Passives passif = engine.CurrentState.getPassif();
        int currentlifePoint = passif.getLifePoint();
        passif.setLifePoint(currentlifePoint - 1);

        engine.CurrentState.setPassif(passif);

        



    }
    
    return engine;
}
}    

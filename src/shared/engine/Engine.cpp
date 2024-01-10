#include "Engine.h"
#include "VoteCommand.h"
#include "engine/InitEquipmentCards.h"
#include "engine/InitPlaces.h"
#include "InitCluesCards.h"
#include "state.h"
#include <iostream>
#include <vector>
#include <algorithm>  
#include <random>




// Inclure d'autres fichiers d'en-tête nécessaires, si besoin

namespace engine {

    Engine::Engine() {
        
    }

    Engine myEngine;
    
    Engine::~Engine() {
        // Nettoyage, si nécessaire
    }

   /*

    state::Game& Engine::getState() {
        // Retourner l'état actuel du jeu
        return CurrentState;
    }

    void Engine::getRecord() {
        // Implémentation de la récupération d'enregistrement, si nécessaire
    }

    state::Players Engine::getPlayer(state::PlayerID id) {

        std::vector<state::Players> players;
        // Supposons que Game a une méthode ou un attribut pour accéder à la liste des joueurs
         players = CurrentState.listPlayers; 

        for (auto& player : players) {
            if (player.getIdPlayer() == id) {
                return player; // Retourner le joueur correspondant
            }
        }

        throw std::runtime_error("Joueur non trouvé avec l'ID spécifié"); // ou retourner un joueur par défaut
    }

    std::vector<state::Players> Engine::initPlayer(state::Game game){
        std::vector<state::Players> ListPlayer; 

        state::Players player1;
        player1.setIdPlayer(state::Player1);
        player1.setrole(state::SCOUT);
        ListPlayer.push_back(player1);
        


        state::Players player2;
        player2.setIdPlayer(state::Player2);
        player2.setrole(state::SIMPLE);
        ListPlayer.push_back(player2);
        

        state::Players player3;
        player3.setIdPlayer(state::Player3);
        player3.setrole(state::SIMPLE);
        ListPlayer.push_back(player3);

        state::Players player4;
        player4.setIdPlayer(state::Player4);
        player4.setrole(state::SIMPLE);
        ListPlayer.push_back(player4);

        state::Players player5; 
        player5.setIdPlayer(state::Player5);
        player5.setrole(state::SIMPLE);
        ListPlayer.push_back(player5);

        

        // Initialiser le générateur de nombres aléatoires
        std::random_device rd;
        std::mt19937 rng(rd());

        // Mélanger le vecteur
        std::shuffle(ListPlayer.begin(), ListPlayer.end(), rng);

        ListPlayer[0].setplayerSecretRole("Chief Conspirator");
        ListPlayer[1].setplayerSecretRole("Conspirator");
        ListPlayer[2].setplayerSecretRole("Friend");
        ListPlayer[3].setplayerSecretRole("Friend");
        ListPlayer[4].setplayerSecretRole("Friend");

        InitEquipmentCards initCards;
        std::vector<state::Equipments> deck = initCards.Init();

        std::random_device rd1;
        std::mt19937 rng1(rd1());

        std::shuffle(deck.begin(), deck.end(), rng1);
        
        for (auto& player : ListPlayer) {
            // Vérifier si le vecteur mélangé contient suffisamment d'équipements
            if (deck.size() >= 3) {
                // Prendre les trois premiers équipements du vecteur mélangé
                std::vector<state::Equipments> selectedEquipments(deck.begin(), deck.begin() + 3);

                // Attribuer les équipements au joueur
                player.setEquipments(selectedEquipments);

            //Remelanger les equipements
                std::shuffle(deck.begin(), deck.end(), rng);
            }
        else{
            std::cout << "Pas assez d'équipements disponibles pour attribuer à tous les joueurs." << std::endl;
            break;
            }


        return ListPlayer;
    }
        }

    void Engine::init() {
        state::Game newGame;
        std::vector<state::Players> ListPlayer = initPlayer(newGame);
        newGame.setListPlayer(ListPlayer);


        InitEquipmentCards initCards;
        std::vector<state::Equipments> deck = initCards.Init();
        newGame.setListEquipments(deck); 

        InitPlaces initPlaces; 
        std::vector<state::Places> places = initPlaces.Init(); 
         

        InitCluesCards initClues; 
        std::vector<state::Clues> clues = initClues.InitClues();
        std::pair<state::Clues , std::vector<state::Clues>> crime = initClues.InitCrimePlace(clues);
        state::Clues crimePlace = crime.first; 
        std::vector<state::Clues> clues1 = crime.second;
        newGame.setCrimePlace(crimePlace); 


        std::pair<state::Clues , std::vector<state::Clues>> crime1 = initClues.InitCrimeWeapon(clues1);
        state::Clues weaponPlace = crime1.first; 
        std::vector<state::Clues> clues2 = crime1.second;
        newGame.setCrimePlace(weaponPlace); 

        std::pair<state::Clues , std::vector<state::Clues>> crime2 = initClues.InitSafePlace(clues2);
        state::Clues safePlace = crime2.first; 
        std::vector<state::Clues> clues3 = crime2.second;
        newGame.setCrimePlace(safePlace);

        

        newGame.setListClues(clues3);


        
        std::random_device rd;
        std::mt19937 rng(rd());

        // Mélangez le vecteur de clues
        std::shuffle(clues3.begin(), clues3.end(), rng);
        
        for (size_t i = 0; i < 9; ++i) {
        // Accédez à chaque équipement 
            places[i].setListClues({clues3[2*i],clues3[2*i + 1]});
    
    }
        
        newGame.setListPlaces(places);

        state::Passives Passive;


        

    }

}
    */
}
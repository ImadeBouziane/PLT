#include "Engine.h"
#include "engine.h"
#include "VoteCommand.h"
#include "engine/InitEquipmentCards.h"
#include "engine/InitPlaces.h"
#include "engine/InitCluesCards.h"
#include "state.h"
#include <iostream>
#include <vector>
#include <algorithm>  
#include <random>




// Inclure d'autres fichiers d'en-tête nécessaires, si besoin

namespace engine {

    Engine::Engine() {
        
    }

   
    
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
         

        //InitCluesCards initClues; 
        std::vector<state::Clues> clu = InitCluesCards::InitClues();


        state::Clues crimePlace = InitCluesCards::InitCrimeWeapon(clu);
        newGame.setCrimePlace(crimePlace); 

        state::Clues crimeWeapon = InitCluesCards::InitCrimeWeapon(clu);
        newGame.setCrimePlace(crimeWeapon); 

        state::Clues safePlace = InitCluesCards::InitCrimeWeapon(clu);
        newGame.setCrimePlace(safePlace);
        

        newGame.setListClues(clu);


        
        std::random_device rd;
        std::mt19937 rng(rd());

        // Mélangez le vecteur de clues
        std::shuffle(clu.begin(), clu.end(), rng);
        
        for (size_t i = 0; i < 9; ++i) {
        // Accédez à chaque équipement 
            places[i].setListClues({clu[2*i],clu[2*i + 1]});
    
    }
        
        newGame.setListPlaces(places);

        state::Passives Passive;


        

    }

}
    */
}
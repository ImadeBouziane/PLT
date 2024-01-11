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

    Engine::Engine() :
    CurrentState(){
  
        
    }

   
    
    Engine::~Engine() {
        // Nettoyage, si nécessaire
    }

   

    state::Game& Engine::getState() {
        return CurrentState;
    }

    void Engine::setCurrentState(state::Game game){
        CurrentState = game;
    }    


    void Engine::getRecord() {
        // Implémentation de la récupération d'enregistrement, si nécessaire
    }

    state::Players Engine::getPlayer(state::PlayerID id) {

        std::vector<state::Players> players;
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
        newGame.setnbPlayers(5);//nb Players
        
        std::vector<state::Players> ListPlayer = initPlayer(newGame);
        newGame.setListPlayer(ListPlayer);//ListPlayer

        newGame.setTurnPlayers(state::Player1); //numero de tour 
        
        newGame.setIsEndGame(false);//end game

        //ListWEAPON à faire

        std::vector<state::Clues> clu = InitCluesCards::InitClues();
        state::Clues crimePlace;

        std::vector<state::Clues> shuffledClues = clu;

        // Mélanger le vecteur shuffledClues
        std::random_device rd;
        std::mt19937 g(rd());
        std::shuffle(shuffledClues.begin(), shuffledClues.end(), g);

        // Recherchez la première Clue dans le vecteur mélangé
       auto it = std::find_if(shuffledClues.begin(), shuffledClues.end(), [](state::Clues& clue) {
            return clue.getCluesType() == "Place";
        });

       // Si une Clue est trouvée, retirez-la du vecteur
       if (it != shuffledClues.end()) {
            state::Clues selectedClue = *it;
            clu = shuffledClues;
            crimePlace = selectedClue; 

         }
       
        newGame.setCrimePlace(crimePlace); //CrimePlace 

        

        state::Clues crimeWeapon ;
        std::vector<state::Clues> shuffledClues1 = clu;

        // Mélanger le vecteur shuffledClues
        
        std::shuffle(shuffledClues1.begin(), shuffledClues1.end(), g);

        // Recherchez la première Clue dans le vecteur mélangé
       auto it2 = std::find_if(shuffledClues1.begin(), shuffledClues1.end(), [](state::Clues& clue) {
            return clue.getCluesType() == "Weapon";
        });

       // Si une Clue est trouvée, retirez-la du vecteur
       if (it2 != shuffledClues1.end()) {
            state::Clues selectedClue = *it2;
            clu = shuffledClues1;
            crimeWeapon = selectedClue; 

         }

        newGame.setCrimeWeapon(crimeWeapon); //CrimeWeapon

        state::Clues safePlace;
        std::vector<state::Clues> shuffledClues2 = clu;

        // Mélanger le vecteur shuffledClues
        
        std::shuffle(shuffledClues2.begin(), shuffledClues2.end(), g);

        // Recherchez la première Clue dans le vecteur mélangé
       auto it3 = std::find_if(shuffledClues2.begin(), shuffledClues2.end(), [](state::Clues& clue) {
            return clue.getCluesType() == "Place";
        });

       // Si une Clue est trouvée, retirez-la du vecteur
       if (it3 != shuffledClues.end()) {
            state::Clues selectedClue = *it3;
            clu = shuffledClues2;
            safePlace = selectedClue; 

         }


        newGame.setSafePlace(safePlace); //safePlace
        

        newGame.setListClues(clu); //listClues

        InitPlaces initPlaces; 
        std::vector<state::Places> places = initPlaces.Init();

        
        std::mt19937 rng(rd());

        // Mélangez le vecteur de clues
        std::shuffle(clu.begin(), clu.end(), rng);
        
        for (size_t i = 0; i < 9; ++i) {
        // Accédez à chaque équipement 
            places[i].setListClues({clu[2*i],clu[2*i + 1]});
    
    }
        
        newGame.setListPlaces(places);//listPlace


        InitEquipmentCards initCards;
        std::vector<state::Equipments> deck = initCards.Init();
        newGame.setListEquipments(deck);  //listEquipements

        state::Passives Passive;
        newGame.setPassif(Passive);

        CurrentState = newGame; 

    }







}
    

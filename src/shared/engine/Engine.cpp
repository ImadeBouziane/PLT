#include "Engine.h"
#include "VoteCommand.h"
#include "state/Game.h"
#include <iostream>





// Inclure d'autres fichiers d'en-tête nécessaires, si besoin

namespace engine {

    

    
    Engine::Engine() {
        
    }

    Engine myEngine;
    
    Engine::~Engine() {
        // Nettoyage, si nécessaire
    }

    void Engine::init() {
        // Initialiser le moteur de jeu
    }

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
    
}
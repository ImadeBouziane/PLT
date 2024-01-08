#include "engine/InitPlaces.h"
#include "state/Places.h"

namespace engine {

std::vector<state::Places> InitPlaces::Init() {
    std::vector<state::Places> placesDeck;

    // Création des différents lieux

        state::Places place1;
        place1.setIdPlace("Crique Secrète");
        place1.setIsSafe(false);
        place1.setIsTrapped(true);
        place1.setListClues({});
        place1.setPresentPlayers({});
        place1.setTrap("");

        placesDeck.push_back(place1); 

        state::Places place2;
        place2.setIdPlace("Salon Tropical");
        place2.setIsSafe(false);
        place2.setIsTrapped(true);
        place2.setListClues({});
        place2.setPresentPlayers({});
        place2.setTrap("");

        placesDeck.push_back(place2); 

        state::Places place3;
        place3.setIdPlace("Poste de Secours");
        place3.setIsSafe(false);
        place3.setIsTrapped(true);
        place3.setListClues({});
        place3.setPresentPlayers({});
        place3.setTrap("");

        placesDeck.push_back(place3); 

        state::Places place4;
        place4.setIdPlace("Salle de Sport");
        place4.setIsSafe(false);
        place4.setIsTrapped(true);
        place4.setListClues({});
        place4.setPresentPlayers({});
        place4.setTrap("");

        placesDeck.push_back(place4); 

        state::Places place5;
        place5.setIdPlace("Spa Botanique");
        place5.setIsSafe(false);
        place5.setIsTrapped(true);
        place5.setListClues({});
        place5.setPresentPlayers({});
        place5.setTrap("");

        placesDeck.push_back(place5); 

        state::Places place6;
        place6.setIdPlace("Villa Royale");
        place6.setIsSafe(false);
        place6.setIsTrapped(true);
        place6.setListClues({});
        place6.setPresentPlayers({});
        place6.setTrap("");

        placesDeck.push_back(place6); 

        state::Places place7;
        place7.setIdPlace("Piscine à Débordement");
        place7.setIsSafe(false);
        place7.setIsTrapped(true);
        place7.setListClues({});
        place7.setPresentPlayers({});
        place7.setTrap("");

        placesDeck.push_back(place7); 

        state::Places place8;
        place8.setIdPlace("Réception");
        place8.setIsSafe(false);
        place8.setIsTrapped(true);
        place8.setListClues({});
        place8.setPresentPlayers({});
        place8.setTrap("");

        placesDeck.push_back(place8); 

        state::Places place9;
        place9.setIdPlace("Terrasse d'Observation");
        place9.setIsSafe(false);
        place9.setIsTrapped(true);
        place9.setListClues({});
        place9.setPresentPlayers({});
        place9.setTrap("");

        placesDeck.push_back(place9); 

    return placesDeck;

}

} // namespace engine

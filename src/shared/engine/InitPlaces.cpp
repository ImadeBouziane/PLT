#include "engine/InitPlaces.h"
#include "state/Places.h"
#include "state/Traps.h"

namespace engine {

std::vector<state::Places> InitPlaces::Init() {
    std::vector<state::Places> placesDeck;

    // Création des différents pièges

        state::Traps trap1;
        trap1.setIdcard("Flaque de Pétrole");
        trap1.setCardsTypes("Traps");
        trap1.setTrapValue(6);
        trap1.setIsDefused(false);
        trap1.setIsTriangle(false);
        trap1.setIsCircle(true);

        state::Traps trap2;
        trap2.setIdcard("Alligator Sauvage");
        trap2.setCardsTypes("Traps");
        trap2.setTrapValue(8);
        trap2.setIsDefused(false);
        trap2.setIsTriangle(true);
        trap2.setIsCircle(false);

        state::Traps trap3;
        trap3.setIdcard("Danger Électrique");
        trap3.setCardsTypes("Traps");
        trap3.setTrapValue(6);
        trap3.setIsDefused(false);
        trap3.setIsTriangle(false);
        trap3.setIsCircle(true);

        state::Traps trap4;
        trap4.setIdcard("Feu de Cuisine");
        trap4.setCardsTypes("Traps");
        trap4.setTrapValue(6);
        trap4.setIsDefused(false);
        trap4.setIsTriangle(true);
        trap4.setIsCircle(false);

        state::Traps trap5;
        trap5.setIdcard("Pièce Inondée");
        trap5.setCardsTypes("Traps");
        trap5.setTrapValue(6);
        trap5.setIsDefused(false);
        trap5.setIsTriangle(true);
        trap5.setIsCircle(false);

        state::Traps trap6;
        trap6.setIdcard("Pièce Explosif à Fil Tendu");
        trap6.setCardsTypes("Traps");
        trap6.setTrapValue(9);
        trap6.setIsDefused(false);
        trap6.setIsTriangle(true);
        trap6.setIsCircle(true);

        state::Traps trap7;
        trap7.setIdcard("Serpents Venimeux");
        trap7.setCardsTypes("Traps");
        trap7.setTrapValue(7);
        trap7.setIsDefused(false);
        trap7.setIsTriangle(true);
        trap7.setIsCircle(false);

        state::Traps trap8;
        trap8.setIdcard("Trou dans le Plancher");
        trap8.setCardsTypes("Traps");
        trap8.setTrapValue(7);
        trap8.setIsDefused(false);
        trap8.setIsTriangle(false);
        trap8.setIsCircle(true);

        state::Traps trap9;
        trap9.setIdcard("Plafond Effondré");
        trap9.setCardsTypes("Traps");
        trap9.setTrapValue(7);
        trap9.setIsDefused(false);
        trap9.setIsTriangle(false);
        trap9.setIsCircle(true);

    // Création des différents lieux

        state::Places place1;
        place1.setIdPlace("Crique Secrète");
        place1.setIsSafe(false);
        place1.setIsTrapped(true);
        place1.setListClues({});
        place1.setPresentPlayers({});
        place1.setTrap("Plafond Effondré");

        placesDeck.push_back(place1); 

        state::Places place2;
        place2.setIdPlace("Salon Tropical");
        place2.setIsSafe(false);
        place2.setIsTrapped(true);
        place2.setListClues({});
        place2.setPresentPlayers({});
        place2.setTrap("Pièce Inondée");

        placesDeck.push_back(place2); 

        state::Places place3;
        place3.setIdPlace("Poste de Secours");
        place3.setIsSafe(false);
        place3.setIsTrapped(true);
        place3.setListClues({});
        place3.setPresentPlayers({});
        place3.setTrap("Flaque de Pétrole");

        placesDeck.push_back(place3); 

        state::Places place4;
        place4.setIdPlace("Salle de Sport");
        place4.setIsSafe(false);
        place4.setIsTrapped(true);
        place4.setListClues({});
        place4.setPresentPlayers({});
        place4.setTrap("Danger Électrique");

        placesDeck.push_back(place4); 

        state::Places place5;
        place5.setIdPlace("Spa Botanique");
        place5.setIsSafe(false);
        place5.setIsTrapped(true);
        place5.setListClues({});
        place5.setPresentPlayers({});
        place5.setTrap("Alligator Sauvage");

        placesDeck.push_back(place5); 

        state::Places place6;
        place6.setIdPlace("Villa Royale");
        place6.setIsSafe(false);
        place6.setIsTrapped(true);
        place6.setListClues({});
        place6.setPresentPlayers({});
        place6.setTrap("Feu de Cuisine");

        placesDeck.push_back(place6); 

        state::Places place7;
        place7.setIdPlace("Piscine à Débordement");
        place7.setIsSafe(false);
        place7.setIsTrapped(true);
        place7.setListClues({});
        place7.setPresentPlayers({});
        place7.setTrap("Serpents Venimeux");

        placesDeck.push_back(place7); 

        state::Places place8;
        place8.setIdPlace("Réception");
        place8.setIsSafe(false);
        place8.setIsTrapped(true);
        place8.setListClues({});
        place8.setPresentPlayers({});
        place8.setTrap("Pièce Explosif à Fil Tendu");

        placesDeck.push_back(place8); 

        state::Places place9;
        place9.setIdPlace("Terrasse d'Observation");
        place9.setIsSafe(false);
        place9.setIsTrapped(true);
        place9.setListClues({});
        place9.setPresentPlayers({});
        place9.setTrap("Trou dans le Plancher");

        placesDeck.push_back(place9); 

    return placesDeck;

}

std::vector<state::Places>  places = InitPlaces::Init();

} // namespace engine

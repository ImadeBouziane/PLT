#include "engine/InitEquipmentCards.h"
#include "state/Equipments.h"

namespace engine {

std::vector<state::Equipments> InitEquipmentCards::Init() {
    std::vector<state::Equipments> equipmentDeck;
    

    // Ajouter les cartes d'équipement à la pioche
    
        state::Equipments equipment;
        equipment.setIdcard("allumette");
        equipment.setCardsTypes("Equipment");
        equipment.setEquipmentValue(1);
        equipment.setIsTriangle(false);
        equipment.setIsCircle(false);
        for (int i = 0; i < 3; ++i) {
        equipmentDeck.push_back(equipment);
        }

         state::Equipments equipment1;
        equipment1.setIdcard("allumette2");
        equipment1.setCardsTypes("Equipment");
        equipment1.setEquipmentValue(2);
        equipment1.setIsTriangle(true);
        equipment1.setIsCircle(false);
        for (int i = 0; i < 3; ++i) {
        equipmentDeck.push_back(equipment1);
        }


         state::Equipments equipment2;
        equipment2.setIdcard("corde");
        equipment2.setCardsTypes("Equipment");
        equipment2.setEquipmentValue(1);
        equipment2.setIsTriangle(false);
        equipment2.setIsCircle(false);
        for (int i = 0; i < 3; ++i) {
        equipmentDeck.push_back(equipment2);
        }


         state::Equipments equipment3;
        equipment3.setIdcard("corde2");
        equipment3.setCardsTypes("Equipment");
        equipment3.setEquipmentValue(2);
        equipment3.setIsTriangle(false);
        equipment3.setIsCircle(true);
        for (int i = 0; i < 3; ++i) {
        equipmentDeck.push_back(equipment3);
        }



        state::Equipments equipment4;
        equipment4.setIdcard("couteauSuisse");
        equipment4.setCardsTypes("Equipment");
        equipment4.setEquipmentValue(2);
        equipment4.setIsTriangle(true);
        equipment4.setIsCircle(false);
        for (int i = 0; i < 3; ++i) {
        equipmentDeck.push_back(equipment4);
        }


         state::Equipments equipment5;
        equipment5.setIdcard("CouteauSuisse2");
        equipment5.setCardsTypes("Equipment");
        equipment5.setEquipmentValue(2);
        equipment5.setIsTriangle(false);
        equipment5.setIsCircle(true);
        for (int i = 0; i < 3; ++i) {
        equipmentDeck.push_back(equipment5);
        }


         state::Equipments equipment6;
        equipment6.setIdcard("extincteur");
        equipment6.setCardsTypes("Equipment");
        equipment6.setEquipmentValue(1);
        equipment6.setIsTriangle(false);
        equipment6.setIsCircle(false);
        for (int i = 0; i < 3; ++i) {
        equipmentDeck.push_back(equipment6);
        }


         state::Equipments equipment7;
        equipment7.setIdcard("extincteur2");
        equipment7.setCardsTypes("Equipment");
        equipment7.setEquipmentValue(2);
        equipment7.setIsTriangle(true);
        equipment7.setIsCircle(false);
        for (int i = 0; i < 3; ++i) {
        equipmentDeck.push_back(equipment7);
        }


         state::Equipments equipment8;
        equipment8.setIdcard("lampe");
        equipment8.setCardsTypes("Equipment");
        equipment8.setEquipmentValue(2);
        equipment8.setIsTriangle(true);
        equipment8.setIsCircle(false);
        for (int i = 0; i < 3; ++i) {
        equipmentDeck.push_back(equipment8);
        }

         state::Equipments equipment9;
        equipment9.setIdcard("lampe2");
        equipment9.setCardsTypes("Equipment");
        equipment9.setEquipmentValue(2);
        equipment9.setIsTriangle(false);
        equipment9.setIsCircle(true);
        for (int i = 0; i < 3; ++i) {
        equipmentDeck.push_back(equipment9);
        }

        state::Equipments equipment10;
        equipment10.setIdcard("lampe3");
        equipment10.setCardsTypes("Equipment");
        equipment10.setEquipmentValue(1);
        equipment10.setIsTriangle(false);
        equipment10.setIsCircle(false);
        for (int i = 0; i < 3; ++i) {
        equipmentDeck.push_back(equipment10);
        }

         state::Equipments equipment11;
        equipment11.setIdcard("scotch");
        equipment11.setCardsTypes("Equipment");
        equipment11.setEquipmentValue(1);
        equipment11.setIsTriangle(false);
        equipment11.setIsCircle(false);
        for (int i = 0; i < 3; ++i) {
        equipmentDeck.push_back(equipment11);
        }


         state::Equipments equipment12;
        equipment12.setIdcard("Scotch2");
        equipment12.setCardsTypes("Equipment");
        equipment12.setEquipmentValue(1);
        equipment12.setIsTriangle(false);
        equipment12.setIsCircle(true);
        for (int i = 0; i < 3; ++i) {
        equipmentDeck.push_back(equipment12);
        }

    return equipmentDeck;
        
    }

    

} // namespace engine

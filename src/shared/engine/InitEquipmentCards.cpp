// Dans le fichier InitEquipmentCards.cpp

#include "engine/InitEquipmentCards.h"
#include "state/Equipments.h"

namespace engine {

std::vector<state::Equipments> InitEquipmentCards::Init() {
    std::vector<state::Equipments> equipmentDeck;
    

    // Ajouter les cartes d'équipement à la pioche
    for (int i = 0; i < 3; ++i) {
        state::Equipments equipment;
        equipment.setIdcard("allumette 1");
        equipment.setCardsTypes("Equipment");
        equipment.setEquipmentValue(1);
        equipment.setIsTriangle(false);
        equipment.setIsCircle(false);
        equipmentDeck.push_back(equipment);

        // Ajouter deux copies supplémentaires de la même carte
        equipmentDeck.push_back(equipment);
        equipmentDeck.push_back(equipment);

         state::Equipments equipment1;
        equipment1.setIdcard("allumette 2 bleu");
        equipment1.setCardsTypes("Equipment");
        equipment1.setEquipmentValue(2);
        equipment1.setIsTriangle(true);
        equipment1.setIsCircle(false);
        equipmentDeck.push_back(equipment1);

        // Ajouter deux copies supplémentaires de la même carte
        equipmentDeck.push_back(equipment1);
        equipmentDeck.push_back(equipment1);


         state::Equipments equipment2;
        equipment2.setIdcard("corde 1");
        equipment2.setCardsTypes("Equipment");
        equipment2.setEquipmentValue(1);
        equipment2.setIsTriangle(false);
        equipment2.setIsCircle(false);
        equipmentDeck.push_back(equipment2);

        // Ajouter deux copies supplémentaires de la même carte
        equipmentDeck.push_back(equipment2);
        equipmentDeck.push_back(equipment2);


         state::Equipments equipment3;
        equipment3.setIdcard("corde rose");
        equipment3.setCardsTypes("Equipment");
        equipment3.setEquipmentValue(2);
        equipment3.setIsTriangle(false);
        equipment3.setIsCircle(true);
        equipmentDeck.push_back(equipment3);

        // Ajouter deux copies supplémentaires de la même carte
        equipmentDeck.push_back(equipment3);
        equipmentDeck.push_back(equipment3);



        state::Equipments equipment4;
        equipment4.setIdcard("couteau suisse bleu");
        equipment4.setCardsTypes("Equipment");
        equipment4.setEquipmentValue(2);
        equipment4.setIsTriangle(true);
        equipment4.setIsCircle(false);
        equipmentDeck.push_back(equipment4);

        // Ajouter deux copies supplémentaires de la même carte
        equipmentDeck.push_back(equipment4);
        equipmentDeck.push_back(equipment4);


         state::Equipments equipment5;
        equipment5.setIdcard("couteau suisse rose");
        equipment5.setCardsTypes("Equipment");
        equipment5.setEquipmentValue(2);
        equipment5.setIsTriangle(false);
        equipment5.setIsCircle(true);
        equipmentDeck.push_back(equipment5);

        // Ajouter deux copies supplémentaires de la même carte
        equipmentDeck.push_back(equipment5);
        equipmentDeck.push_back(equipment5);


         state::Equipments equipment6;
        equipment6.setIdcard("extincteur");
        equipment6.setCardsTypes("Equipment");
        equipment6.setEquipmentValue(1);
        equipment6.setIsTriangle(false);
        equipment6.setIsCircle(false);
        equipmentDeck.push_back(equipment6);

        // Ajouter deux copies supplémentaires de la même carte
        equipmentDeck.push_back(equipment6);
        equipmentDeck.push_back(equipment6);


         state::Equipments equipment7;
        equipment7.setIdcard("extincteur bleu");
        equipment7.setCardsTypes("Equipment");
        equipment7.setEquipmentValue(2);
        equipment7.setIsTriangle(true);
        equipment7.setIsCircle(false);
        equipmentDeck.push_back(equipment7);

        // Ajouter deux copies supplémentaires de la même carte
        equipmentDeck.push_back(equipment7);
        equipmentDeck.push_back(equipment7);


         state::Equipments equipment8;
        equipment8.setIdcard("lampe bleu");
        equipment8.setCardsTypes("Equipment");
        equipment8.setEquipmentValue(2);
        equipment8.setIsTriangle(true);
        equipment8.setIsCircle(false);
        equipmentDeck.push_back(equipment8);

        // Ajouter deux copies supplémentaires de la même carte
        equipmentDeck.push_back(equipment8);
        equipmentDeck.push_back(equipment8);

         state::Equipments equipment9;
        equipment9.setIdcard("lampe rose");
        equipment9.setCardsTypes("Equipment");
        equipment9.setEquipmentValue(2);
        equipment9.setIsTriangle(false);
        equipment9.setIsCircle(true);
        equipmentDeck.push_back(equipment9);

        // Ajouter deux copies supplémentaires de la même carte
        equipmentDeck.push_back(equipment9);
        equipmentDeck.push_back(equipment9);

        state::Equipments equipment10;
        equipment10.setIdcard("lampe");
        equipment10.setCardsTypes("Equipment");
        equipment10.setEquipmentValue(1);
        equipment10.setIsTriangle(false);
        equipment10.setIsCircle(false);
        equipmentDeck.push_back(equipment10);

        // Ajouter deux copies supplémentaires de la même carte
        equipmentDeck.push_back(equipment10);
        equipmentDeck.push_back(equipment10);

         state::Equipments equipment11;
        equipment11.setIdcard("scotch 1");
        equipment11.setCardsTypes("Equipment");
        equipment11.setEquipmentValue(1);
        equipment11.setIsTriangle(false);
        equipment11.setIsCircle(false);
        equipmentDeck.push_back(equipment11);

        // Ajouter deux copies supplémentaires de la même carte
        equipmentDeck.push_back(equipment11);
        equipmentDeck.push_back(equipment11);


         state::Equipments equipment12;
        equipment12.setIdcard("Scotch 2 rose");
        equipment12.setCardsTypes("Equipment");
        equipment12.setEquipmentValue(1);
        equipment12.setIsTriangle(false);
        equipment12.setIsCircle(true);
        equipmentDeck.push_back(equipment12);

        // Ajouter deux copies supplémentaires de la même carte
        equipmentDeck.push_back(equipment12);
        equipmentDeck.push_back(equipment12);

        
    }

    

    return equipmentDeck;
}

} // namespace engine

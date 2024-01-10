#include <boost/test/unit_test.hpp>
#include "state.h"
#include "engine.h"

// TEST DE LA PARTIE ENGINE

using namespace engine;
using namespace state;

BOOST_AUTO_TEST_CASE(TestEngine) {

    Game myGame;

    InitEquipmentCards InitEquipment;
    myGame.setListEquipments(InitEquipment.Init());
    BOOST_CHECK_EQUAL(myGame.getListEquipments().size(), 39);

    InitPlaces Initplaces;
    myGame.setListPlaces(Initplaces.Init());
    BOOST_CHECK_EQUAL(myGame.getListPlaces().size(), 9);

    InitCluesCards clues;
    myGame.setListClues(clues.InitClues());
    BOOST_CHECK_EQUAL(myGame.getListClues().size(), 21);
    //myGame.setCrimePlace(clues.InitCrimePlace(myGame.getListClues()));
    //BOOST_CHECK_EQUAL(myGame.getListClues().size(), 20);
    //myGame.setCrimeWeapon(clues.InitCrimeWeapon(myGame.getListClues()));
    //BOOST_CHECK_EQUAL(myGame.getListClues().size(), 19);
    //myGame.setSafePlace(clues.InitCrimeWeapon(myGame.getListClues()));
    //BOOST_CHECK_EQUAL(myGame.getListClues().size(), 18);

    //InitCluesCards giveEquip;
    //GiveEquipment giveEquip;
    //TrapCommand trap;
    //InitCluesCards clues;
    //giveEquip.execute(Player1,myGame.getListEquipments());

}    
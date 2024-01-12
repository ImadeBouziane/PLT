#include <boost/test/unit_test.hpp>
#include "state.h"
#include "engine.h"


// TEST DE LA PARTIE ENGINE

using namespace engine;
using namespace state;

BOOST_AUTO_TEST_CASE(TestEngine) {

    Game myGame;
    Engine engine;

    InitEquipmentCards InitEquipment;
    myGame.setListEquipments(InitEquipment.Init());
    BOOST_CHECK_EQUAL(myGame.getListEquipments().size(), 39);

    InitPlaces Initplaces;
    myGame.setListPlaces(Initplaces.Init());
    BOOST_CHECK_EQUAL(myGame.getListPlaces().size(), 9);

    InitCluesCards clues;
    myGame.setListClues(clues.InitClues());
    BOOST_CHECK_EQUAL(myGame.getListClues().size(), 21);

    VerifyConspiracy verify;

    myGame.setnbPlaces(9);
    //myGame = engine.getState();
    //myGame.setIsEndGame(true);

    engine.setCurrentState(myGame);
    
    //BOOST_CHECK_EQUAL(engine.getState().getnbPlaces(), 9);
    
    engine = verify.execute(engine);

    BOOST_CHECK_EQUAL(engine.getState().getIsEndGame(), true);

    myGame.setIsEndGame(false);

    Passives passif;
    passif.setLifePoint(2);

    Places place;
    place.setIdPlace("Salon Tropical");

    Clues crimeplace;
    crimeplace.setIdcard("Salon Tropical");

    std::vector<state::Players> ListPlayer; 

    state::Players player1;
    player1.setIdPlayer(state::Player1);
    player1.setrole(state::SIMPLE);
    player1.setplayerSecretRole("Friend");
    ListPlayer.push_back(player1);
        
    state::Players player2;
    player2.setIdPlayer(state::Player2);
    player2.setrole(state::BODYGUARD);
    player1.setplayerSecretRole("Chief Conspirator");
    ListPlayer.push_back(player2);

    place.setPresentPlayers(ListPlayer);

    myGame.setPassif(passif);
    myGame.setCurrentPlaces(place);
    myGame.setCrimePlace(crimeplace);
    myGame.setnbPlaces(5);
    myGame.setListPlayer(ListPlayer);

    engine.setCurrentState(myGame);

    engine = verify.execute(engine);

    BOOST_CHECK_EQUAL(engine.getState().getPassif().getLifePoint(), 2);
    BOOST_CHECK_EQUAL(engine.getState().getCurrentPlace().getIdPlace(), myGame.getCrimePlace().getIdCard());
    BOOST_CHECK_EQUAL(engine.getState().getIsEndGame(), true);
    //myGame.setIsEndGame(false);

    //InitCluesCards giveEquip;
    //GiveEquipment giveEquip;
    //TrapCommand test02;
    //InitCluesCards clues;
    //giveEquip.execute(Player1,myGame.getListEquipments());

}    
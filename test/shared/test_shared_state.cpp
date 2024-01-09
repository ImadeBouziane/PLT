#define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>
#include "../../src/shared/state.h"

// TEST DE LA PARTIE STATE

using namespace state;

BOOST_AUTO_TEST_CASE(TestState) {
    
	
	Players myPlayer;

	BOOST_CHECK_EQUAL(myPlayer.getIdPlayer(), Player1);
	BOOST_CHECK_EQUAL(myPlayer.getplayerSecretRole(), "");
	BOOST_CHECK_EQUAL(myPlayer.gethaveVoted(), false);
	BOOST_CHECK_EQUAL(myPlayer.getvote(), false);
	BOOST_CHECK_EQUAL(myPlayer.getrole(), state::RoleType::SIMPLE);
	BOOST_CHECK(myPlayer.getEquipments().empty());
	BOOST_CHECK(myPlayer.getrealClues().empty());
	BOOST_CHECK(myPlayer.getannouncedClues().empty());

	Traps myTrap;

	myTrap.setIdcard("Flaque de Pétrole");
    myTrap.setCardsTypes("Traps");
    myTrap.setTrapValue(6);
    myTrap.setIsDefused(false);
    myTrap.setIsTriangle(false);
    myTrap.setIsCircle(true);
	BOOST_CHECK_EQUAL(myTrap.getIdCard(), "Flaque de Pétrole");
	BOOST_CHECK_EQUAL(myTrap.getCardsType(), "Traps");
	BOOST_CHECK_EQUAL(myTrap.getTrapValue(), 6);
	BOOST_CHECK_EQUAL(myTrap.getIsDefused(), false);
	BOOST_CHECK_EQUAL(myTrap.getIsTriangle(), false);
	BOOST_CHECK_EQUAL(myTrap.getIsCircle(), true);

	Places myPlace;

    myPlace.setIdPlace("Crique Secrète");
    myPlace.setIsSafe(false);
    myPlace.setIsTrapped(true);
    myPlace.setListClues({});
    myPlace.setPresentPlayers({});
    myPlace.setTrap("Flaque de Pétrole");
	BOOST_CHECK_EQUAL(myPlace.getIdPlace(), "Crique Secrète");
	BOOST_CHECK_EQUAL(myPlace.getIsSafe(), false);
	BOOST_CHECK_EQUAL(myPlace.getIsTrapped(), true);
	BOOST_CHECK(myPlace.getListClues().empty());
	BOOST_CHECK(myPlace.getPresentPlayers().empty());
	BOOST_CHECK_EQUAL(myPlace.getTrap(), "Flaque de Pétrole");

	Equipments myEquipment;

    myEquipment.setIdcard("allumette 1");
    myEquipment.setCardsTypes("Equipment");
    myEquipment.setEquipmentValue(1);
    myEquipment.setIsTriangle(false);
    myEquipment.setIsCircle(false);
	BOOST_CHECK_EQUAL(myEquipment.getIdCard(), "allumette 1");
	BOOST_CHECK_EQUAL(myEquipment.getCardsType(), "Equipment");
	BOOST_CHECK_EQUAL(myEquipment.getEquipmentValue(), 1);
	BOOST_CHECK_EQUAL(myEquipment.getIsTriangle(), false);
	BOOST_CHECK_EQUAL(myEquipment.getIsCircle(), false);

	Passives myPassive;

	myPassive.setLifePoint(0);
	myPassive.setTempestPoint(0);
	myPassive.setIsAlive(false);
	BOOST_CHECK_EQUAL(myPassive.getLifePoint(), 0);
	BOOST_CHECK_EQUAL(myPassive.getTempestPoint(), 0);
	BOOST_CHECK_EQUAL(myPassive.getIsAlive(), false);

	Conspiracy myConspiracy;

	myConspiracy.setIdPlace("Crique Secrète");
	myConspiracy.setIdWeapon("Sabre");
	myConspiracy.setIdPlayer("Player1");
	BOOST_CHECK_EQUAL(myConspiracy.getIdPlace(), "Crique Secrète");
	BOOST_CHECK_EQUAL(myConspiracy.getIdWeapon(), "Sabre");
	BOOST_CHECK_EQUAL(myConspiracy.getIdPlayer(), "Player1");

	Weapons myWeapon;

	myWeapon.setIdWeapon("Pistolet");
	BOOST_CHECK_EQUAL(myWeapon.getIdWeapon(), "Pistolet");

	Clues myClue;

	myClue.setIdcard("Spa Botanique");
    myClue.setCardsTypes("Clues");
    myClue.setCluesTypes("Place");
    myClue.setIsRevealed(false);
	BOOST_CHECK_EQUAL(myClue.getIdCard(), "Spa Botanique");
	BOOST_CHECK_EQUAL(myClue.getCardsType(), "Clues");
	BOOST_CHECK_EQUAL(myClue.getCluesType(), "Place");
	BOOST_CHECK_EQUAL(myClue.getIsRevealed(), false);

	Game myGame;

	std::vector<state::Players> playerList;
	playerList.push_back(myPlayer);
	
	myGame.setnbPlayers(5);
	myGame.setListPlayer(playerList);
	myGame.setTurnPlayers(Player2);
	myGame.setListWeapons({myWeapon});
	myGame.setListPlaces({myPlace});
	myGame.setListEquipments({myEquipment});
	myGame.setGoodGuys(playerList);
	myGame.setBadGuys(playerList);
	myGame.setIsEndGame(false);
	BOOST_CHECK_EQUAL(myGame.getnbPlayers(), 5);
	BOOST_CHECK_EQUAL(myGame.getListPlayer().size(), 1);
	BOOST_CHECK_EQUAL(myGame.getTurnPlayers(), Player2);
	BOOST_CHECK_EQUAL(myGame.getListWeapons().size(), 1);
	BOOST_CHECK_EQUAL(myGame.getListPlaces().size(), 1);
	BOOST_CHECK_EQUAL(myGame.getListEquipments().size(), 1);
	BOOST_CHECK_EQUAL(myGame.getGoodGuys().size(), 1);
	BOOST_CHECK_EQUAL(myGame.getBadGuys().size(), 1);
	BOOST_CHECK_EQUAL(myGame.getIsEndGame(), false);
	
	;
}


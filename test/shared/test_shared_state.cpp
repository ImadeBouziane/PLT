#include <boost/test/unit_test.hpp>
#include "state.h"

// TEST DE LA PARTIE STATE

using namespace state;

BOOST_AUTO_TEST_CASE(TestState) {
    
	//Test de la classe Traps

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

	//Test de la classe Places

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

	//Test de la classe Equipments

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

	//Test de la classe Passives

	Passives myPassive;

	myPassive.setLifePoint(0);
	myPassive.setTempestPoint(0);
	myPassive.setIsAlive(false);
	BOOST_CHECK_EQUAL(myPassive.getLifePoint(), 0);
	BOOST_CHECK_EQUAL(myPassive.getTempestPoint(), 0);
	BOOST_CHECK_EQUAL(myPassive.getIsAlive(), false);

	//Test de la classe Conspiracy

	Conspiracy myConspiracy;

	myConspiracy.setIdPlace("Crique Secrète");
	myConspiracy.setIdWeapon("Sabre");
	myConspiracy.setIdPlayer("Player1");
	BOOST_CHECK_EQUAL(myConspiracy.getIdPlace(), "Crique Secrète");
	BOOST_CHECK_EQUAL(myConspiracy.getIdWeapon(), "Sabre");
	BOOST_CHECK_EQUAL(myConspiracy.getIdPlayer(), "Player1");

	//Test de la classe Weapons

	Weapons myWeapon;

	myWeapon.setIdWeapon("Hachette");
	BOOST_CHECK_EQUAL(myWeapon.getIdWeapon(), "Hachette");

	//Test de la classe Clues

	Clues myClue;

	myClue.setIdcard("Spa Botanique");
    myClue.setCardsTypes("Clues");
    myClue.setCluesTypes("Place");
    myClue.setIsRevealed(false);
	BOOST_CHECK_EQUAL(myClue.getIdCard(), "Spa Botanique");
	BOOST_CHECK_EQUAL(myClue.getCardsType(), "Clues");
	BOOST_CHECK_EQUAL(myClue.getCluesType(), "Place");
	BOOST_CHECK_EQUAL(myClue.getIsRevealed(), false);

	//Test de la classe Players

	Players myPlayer;

	myPlayer.setIdPlayer(Player3);
	myPlayer.setrole(SCOUT);
	myPlayer.setplayerSecretRole("Friend");
	myPlayer.setEquipments({myEquipment,myEquipment});
	myPlayer.setRealClues({myClue,myClue});
	myPlayer.setannouncedClues({myClue,myClue});
	myPlayer.sethaveVoted(true);
	myPlayer.setvote(true);
	BOOST_CHECK_EQUAL(myPlayer.getIdPlayer(), Player3);
	BOOST_CHECK_EQUAL(myPlayer.getrole(), state::RoleType::SCOUT);
	BOOST_CHECK_EQUAL(myPlayer.getplayerSecretRole(), "Friend");
	BOOST_CHECK_EQUAL(myPlayer.getEquipments().size(), 2);
	BOOST_CHECK_EQUAL(myPlayer.getrealClues().size(), 2);
	BOOST_CHECK_EQUAL(myPlayer.getannouncedClues().size(), 2);
	BOOST_CHECK_EQUAL(myPlayer.gethaveVoted(), true);
	BOOST_CHECK_EQUAL(myPlayer.getvote(), true);

	//Test de la classe Game

	Game myGame;

	std::vector<state::Players> playerList;
	playerList.push_back(myPlayer);
	
	myGame.setnbPlayers(5);
	myGame.setListPlayer(playerList);
	myGame.setTurnPlayers(Player2);
	myGame.setListWeapons({myWeapon});
	myGame.setListPlaces({myPlace});
	myGame.setListEquipments({myEquipment});
	myGame.setListTraps({myTrap});
	myGame.setListClues({myClue});
	myGame.setGoodGuys(playerList);
	myGame.setBadGuys(playerList);
	myGame.setIsEndGame(false);
	myGame.setCrimeWeapon(myClue);
	myGame.setCrimePlace(myClue);
	myGame.setSafePlace(myClue);
	BOOST_CHECK_EQUAL(myGame.getnbPlayers(), 5);
	BOOST_CHECK_EQUAL(myGame.getListPlayer().size(), 1);
	BOOST_CHECK_EQUAL(myGame.getTurnPlayers(), Player2);
	BOOST_CHECK_EQUAL(myGame.getListWeapons().size(), 1);
	BOOST_CHECK_EQUAL(myGame.getListPlaces().size(), 1);
	BOOST_CHECK_EQUAL(myGame.getListEquipments().size(), 1);
	BOOST_CHECK_EQUAL(myGame.getListTraps().size(), 1);
	BOOST_CHECK_EQUAL(myGame.getListClues().size(), 1);
	BOOST_CHECK_EQUAL(myGame.getGoodGuys().size(), 1);
	BOOST_CHECK_EQUAL(myGame.getBadGuys().size(), 1);
	BOOST_CHECK_EQUAL(myGame.getIsEndGame(), false);
	Clues crimeweapon = myGame.getCrimeWeapon();
	BOOST_CHECK_EQUAL(crimeweapon.getIdCard(), "Spa Botanique");
	Clues crimeplace = myGame.getCrimePlace();
	BOOST_CHECK_EQUAL(crimeplace.getIdCard(), "Spa Botanique");
	Clues safeplace = myGame.getSafePlace();
	BOOST_CHECK_EQUAL(safeplace.getIdCard(), "Spa Botanique");

	;
}


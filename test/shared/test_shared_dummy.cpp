#define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>
#include "../../src/shared/state.h"

// TEST DE LA CLASSE GAME 
// TEST DE LA CLASSE PLAYER 

using namespace state;

BOOST_AUTO_TEST_SUITE(PlayersTestSuite)

BOOST_AUTO_TEST_CASE(TestVoteFinal) {
        Players* PlayerOne = new Players();
        BOOST_CHECK_NO_THROW(PlayerOne->voteFinal());
        delete PlayerOne;
}

BOOST_AUTO_TEST_CASE(TestGiveEquipment) {
        Players* PlayerOne = new Players();
        BOOST_CHECK_NO_THROW(PlayerOne->giveEquipments());
        delete PlayerOne;
}


BOOST_AUTO_TEST_CASE(TestGameAttributes) {
	Players myPlayer;


	BOOST_CHECK_EQUAL(myPlayer.getIdPlayer(), "");
	BOOST_CHECK_EQUAL(myPlayer.getplayerSecretRole(), "");
	BOOST_CHECK_EQUAL(myPlayer.gethaveVoted(), false);
	BOOST_CHECK_EQUAL(myPlayer.getvote(), false);

	// Test role
	BOOST_CHECK_EQUAL(myPlayer.getrole(), state::RoleType::SIMPLE);

	// Test vectors
	BOOST_CHECK(myPlayer.getEquipments().empty());
	BOOST_CHECK(myPlayer.getrealClues().empty());
	BOOST_CHECK(myPlayer.getannouncedClues().empty());

	;
}


BOOST_AUTO_TEST_SUITE_END()

// TEST DE LA CLASSE PASSIVE

using namespace state;

BOOST_AUTO_TEST_SUITE(PassivesTestSuite)




BOOST_AUTO_TEST_CASE(TestPassivesAttributes) {
	Passives myPassive;


	BOOST_CHECK_EQUAL(myPassive.getLifePoint(), 3);
	BOOST_CHECK_EQUAL(myPassive.getTempestPoint(), 3);
	BOOST_CHECK_EQUAL(myPassive.getIsAlive(), true);


	;
}


BOOST_AUTO_TEST_SUITE_END()



// TEST DE LA CLASSE PLACES


BOOST_AUTO_TEST_SUITE(PlacesTestSuite)




BOOST_AUTO_TEST_CASE(TestPlacesAttributes) {
	Places myPlace;


	BOOST_CHECK_EQUAL(myPlace.getIdPlace(), "");
	BOOST_CHECK_EQUAL(myPlace.getIsSafe(), false);
	BOOST_CHECK_EQUAL(myPlace.getIsTrapped(), true);
	BOOST_CHECK_EQUAL(myPlace.getTrap(), "");
	



	// Test vectors
	BOOST_CHECK(myPlace.getListClues().empty());
	BOOST_CHECK(myPlace.getPresentPlayers().empty());

	;
}


BOOST_AUTO_TEST_SUITE_END()




// TEST DE LA CLASSE TRAPS 


BOOST_AUTO_TEST_SUITE(TrapTestSuite)



BOOST_AUTO_TEST_CASE(TestTrapAttributes) {
	Traps myTrap;


	BOOST_CHECK_EQUAL(myTrap.getTrapValue(), 0);
	BOOST_CHECK_EQUAL(myTrap.getIsDefused(), false);
	BOOST_CHECK_EQUAL(myTrap.getIsTriangle(), false);
	BOOST_CHECK_EQUAL(myTrap.getIsCircle(), false);


	;
}


BOOST_AUTO_TEST_SUITE_END()



// TEST DE LA CLASSE WDEAPON

BOOST_AUTO_TEST_SUITE(WeaponTestSuite)


BOOST_AUTO_TEST_CASE(TestWeaponAttributes) {
	Weapons myWeapon;


	BOOST_CHECK_EQUAL(myWeapon.getIdWeapon(), "");

	;
}


BOOST_AUTO_TEST_SUITE_END()


// TEST DE LA CLASSE CARD 


BOOST_AUTO_TEST_SUITE(CardTestSuite)




BOOST_AUTO_TEST_CASE(TestCardAttributes) {
	Cards myCard;


	BOOST_CHECK_EQUAL(myCard.getIdCard(), "");
	BOOST_CHECK_EQUAL(myCard.getCardsType(), "");

}


BOOST_AUTO_TEST_SUITE_END()


// TEST DE LA CLASSE CLUES 

BOOST_AUTO_TEST_SUITE(CluesTestSuite)



BOOST_AUTO_TEST_CASE(TestCluesAttributes) {
	Clues myClue;


	BOOST_CHECK_EQUAL(myClue.getCluesType(), "");
	BOOST_CHECK_EQUAL(myClue.getIsRevealed(), false);



}


BOOST_AUTO_TEST_SUITE_END()



// TEST DE LA CLASSE CONSPIRACY 

BOOST_AUTO_TEST_SUITE(ConspiracyTestSuite)




BOOST_AUTO_TEST_CASE(TestConspiracyAttributes) {
	Conspiracy myConspiracy;


	BOOST_CHECK_EQUAL(myConspiracy.getIdPlace(), "");
	BOOST_CHECK_EQUAL(myConspiracy.getIdWeapon(), "");
	BOOST_CHECK_EQUAL(myConspiracy.getIdPlayer(), "");

}


BOOST_AUTO_TEST_SUITE_END()


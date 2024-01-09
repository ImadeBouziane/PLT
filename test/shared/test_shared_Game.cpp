#define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>
#include "../../src/shared/state.h"

using namespace state;

BOOST_AUTO_TEST_SUITE(GameTestSuite)

BOOST_AUTO_TEST_CASE(chooseCharacters) {
	Game* myGame = new Game();
	BOOST_CHECK_NO_THROW(myGame->chooseCharacters());
	delete myGame;
}

BOOST_AUTO_TEST_CASE(TestChangeScout) {
	Game* myGame = new Game();
	BOOST_CHECK_NO_THROW(myGame->changeScout());
	delete myGame;
}

BOOST_AUTO_TEST_CASE(TestMovePlayers) {
	Game* myGame = new Game();
	BOOST_CHECK_NO_THROW(myGame->movePlayers());
	delete myGame;
}

BOOST_AUTO_TEST_CASE(TestDefuse) {
	Game* myGame = new Game();
	BOOST_CHECK_NO_THROW(myGame->defuse());
	delete myGame;
}

BOOST_AUTO_TEST_CASE(TestPlayerAttributes) {
	Game myGame;

	BOOST_CHECK_EQUAL(myGame.getnbPlayers(), 0);
	BOOST_CHECK_EQUAL(myGame.getTurnPlayers(), 1);

	// Test vectors
	;
}




BOOST_AUTO_TEST_SUITE_END()



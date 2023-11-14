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
        state::Players myPlayer;


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

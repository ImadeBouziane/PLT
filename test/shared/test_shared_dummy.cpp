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
/*
BOOST_AUTO_TEST_CASE(TestGameAttributes) {
        Game* myGame = new Game();

        // Test initial state of attributes
        BOOST_CHECK_EQUAL(myGame->nbPlayers, 0);
        BOOST_CHECK(myGame->listPlayers.empty());
        BOOST_CHECK_EQUAL(myGame->turnPlayer, 0);
        BOOST_CHECK_EQUAL(myGame->isEndGame, false);
        BOOST_CHECK(myGame->listWeapons.empty());
        BOOST_CHECK(myGame->listPlaces.empty());
        BOOST_CHECK(myGame->listCards.empty());
        BOOST_CHECK(myGame->publicRole.empty());
        BOOST_CHECK(myGame->secretRole.empty());



        delete myGame;
}
BOOST_AUTO_TEST_CASE(TestPlayersAttributes) {
        Players* myPlayers = new Players();

        // Test initial state of attributes
        BOOST_CHECK_EQUAL(myPlayers->idPlayer, "");
        BOOST_CHECK_EQUAL(myPlayers->playerPublicRole, "");
        BOOST_CHECK_EQUAL(myPlayers->playerSecretRole, "");
        BOOST_CHECK(myPlayers->Equipments.empty());
        BOOST_CHECK(myPlayers->realClues.empty());
        BOOST_CHECK(myPlayers->announcedClues.empty());

        // Vous pouvez ajouter plus de tests ici après avoir modifié les attributs

        delete myPlayers;
}
*/
BOOST_AUTO_TEST_SUITE_END()

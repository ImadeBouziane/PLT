#include <boost/test/unit_test.hpp>

#include "../../src/shared/state.h"

using namespace ::state;

BOOST_AUTO_TEST_CASE(firstPlayerTest)
{
  {
    // Testing the empty contructor of Player
    Players* FirstPlayer = new Players();
    
    // Checking default value 

    BOOST_CHECK_EQUAL(FirstPlayer->getName(), "");
    BOOST_CHECK_EQUAL(FirstPlayer->getId(), -1);
    BOOST_CHECK_EQUAL(FirstPlayer->getEmpire(), ); //To Complete
    BOOST_CHECK_EQUAL(FirstPlayer->getToBuildCards(), {});
    BOOST_CHECK_EQUAL(FirstPlayer->getBuiltCards(), {});
    BOOST_CHECK_EQUAL(FirstPlayer->getDraftingCards(), {});
    BOOST_CHECK_EQUAL(FirstPlayer->getDraftCards(), {});
    BOOST_CHECK_EQUAL(FirstPlayer->getState(), PENDING);
    BOOST_CHECK_EQUAL(FirstPlayer->getFinancierTokensUnit(), 0);
    BOOST_CHECK_EQUAL(FirstPlayer->getColoneTokensUnit(), 0);
    BOOST_CHECK_EQUAL(FirstPlayer->getKrystalliumTokensUnit(), 0);
    BOOST_CHECK_EQUAL(FirstPlayer->getCurrentResources(), {});
    BOOST_CHECK_EQUAL(FirstPlayer->getResourceInEmpireUnit(), 0);
   

    // Creation of multiple elements to test the methods.
    DevelopmentCard* cardTest = new DevelopmentCard();
    Resource* resourceTest = new Resource();

    // Calling methods of Player.
    myFirstPlayer->construct(cardTest);
    myFirstPlayer->addResource(resourceTest, cardTest);
    myFirstPlayer->discardCard(cardTest);
    
    int production = myFirstPlayer->computeProduction(GOLD);
    int victoryPoints = myFirstPlayer->computeVictoryPoint();
    
    myFirstPlayer->sendResourceToEmpire(resourceTest);
    myFirstPlayer->convertToKrystallium();
    myFirstPlayer->chooseDraftCard(cardTest);
    
    bool colonelChoosed = myFirstPlayer->chooseColonelToken();
    std::string PlayerToString = myFirstPlayer->toString();

    myFirstPlayer->updateProduction();

    // Checking output of Player methods.
    BOOST_CHECK_EQUAL(production, -1);
    BOOST_CHECK_EQUAL(victoryPoints, -1);
    BOOST_CHECK_EQUAL(colonelChoosed, false);
    BOOST_CHECK_EQUAL(PlayerToString, "");

    // Delete pointers that won't be used anymore.
    delete myFirstPlayer;
    delete cardTest;
    delete resourceTest;
  }

  {
  ;
  }
}

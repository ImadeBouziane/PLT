#define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>
#include "../../src/shared/state.h"

using namespace state;

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
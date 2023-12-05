#define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>
#include "../../src/shared/state.h"

using namespace state;

BOOST_AUTO_TEST_SUITE(PlayerTestSuite)




BOOST_AUTO_TEST_CASE(TestGameAttributes) {
	Passives myPassive;


	BOOST_CHECK_EQUAL(myPassive.getLifePoint(), 3);
	BOOST_CHECK_EQUAL(myPassive.getTempestPoint(), 3);
	BOOST_CHECK_EQUAL(myPassive.getIsAlive(), true);
	
	
	;
}


BOOST_AUTO_TEST_SUITE_END()

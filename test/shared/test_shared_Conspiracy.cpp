#define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>
#include "../../src/shared/state.h"

using namespace state;

BOOST_AUTO_TEST_SUITE(ConspiracyTestSuite)




BOOST_AUTO_TEST_CASE(TestGameAttributes) {
	Conspiracy myConspiracy;


	BOOST_CHECK_EQUAL(myConspiracy.getIdPlace(), "");
	BOOST_CHECK_EQUAL(myConspiracy.getIdWeapon(), "");
	BOOST_CHECK_EQUAL(myConspiracy.getIdPlayer(), "");
	
}


BOOST_AUTO_TEST_SUITE_END()


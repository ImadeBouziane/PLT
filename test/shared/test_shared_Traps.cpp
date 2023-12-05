#define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>
#include "../../src/shared/state.h"

using namespace state;

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

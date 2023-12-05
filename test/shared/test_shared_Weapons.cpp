#define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>
#include "../../src/shared/state.h"

using namespace state;

BOOST_AUTO_TEST_SUITE(WeaponTestSuite)


BOOST_AUTO_TEST_CASE(TestWeaponAttributes) {
	Weapon myWeapon;


	BOOST_CHECK_EQUAL(myWeapon.getIdWeapon(), "");
	
	;
}


BOOST_AUTO_TEST_SUITE_END()
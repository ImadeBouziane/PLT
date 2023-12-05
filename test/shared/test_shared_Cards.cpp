#define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>
#include "../../src/shared/state.h"

using namespace state;

BOOST_AUTO_TEST_SUITE(PlayerTestSuite)




BOOST_AUTO_TEST_CASE(TestCardAttributes) {
	Card myCard;


	BOOST_CHECK_EQUAL(myCard.getIdCard(), "");
	BOOST_CHECK_EQUAL(myCard.getCardsType(), "");
	
}


BOOST_AUTO_TEST_SUITE_END()

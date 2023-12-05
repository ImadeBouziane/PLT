#define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>
#include "../../src/shared/state.h"

using namespace state;

BOOST_AUTO_TEST_SUITE(CluesTestSuite)



BOOST_AUTO_TEST_CASE(TestCluesAttributes) {
	Clues myClue;


	BOOST_CHECK_EQUAL(myClue.getCluesType(), "");
	BOOST_CHECK_EQUAL(myClue.getIsRevealed(), false);


	
}


BOOST_AUTO_TEST_SUITE_END()

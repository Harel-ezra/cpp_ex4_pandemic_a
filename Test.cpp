#include <istream>
#include <string>
#include "Board.hpp"
#include "doctest.h"
using namespace std;
using namespace pandemic;

TEST_CASE("test")
{
    for (int i = 0; i < 20; i++)
    {
        CHECK(i==i);
    }
}
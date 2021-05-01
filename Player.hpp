#pragma once
#include "Board.hpp"
#include "City.hpp"
#include "Color.hpp"
namespace pandemic
{
    class Player
    {
    public:
        Player(Board b, City c)
        {}

        ~Player()
        {}

        Player& drive(City c);
        Player& fly_direct (City c);
        Player& fly_charter(City c);
        Player& fly_shuttle(City c);
        Player& build();
        Player& discover_cure(Color c);
        Player& treat(City c);
        Player& take_card(City  c);
        std::string role();

    };
}
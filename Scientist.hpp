#pragma once
#include "Board.hpp"
#include "City.hpp"
#include "Player.hpp"
namespace pandemic
{
    class Scientist : public Player
    {
    public:
        Scientist(Board b, City c, int number): Player(b,c)
        {}

        ~Scientist()
        {}


    };
}
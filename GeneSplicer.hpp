#pragma once
#include "Board.hpp"
#include "City.hpp"
#include "Player.hpp"
namespace pandemic
{
    class GeneSplicer : public Player
    {
    public:
        GeneSplicer(Board b, City c);
        ~GeneSplicer();

    };
}
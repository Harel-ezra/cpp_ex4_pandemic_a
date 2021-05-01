#pragma once

#include <iostream>
#include "City.hpp"

namespace pandemic {
    class Board {
    private:

    public:
        Board() {
        }

        ~Board() {}

        Board& operator[](City c);
        void operator=(int dis);

        bool is_clean() const;

        friend std::ostream &operator<<(std::ostream &output, const Board &board);
    };
}

#include "Board.hpp"
#include <iostream>
#include <string>

using namespace std;
using namespace pandemic;

Board &Board::operator[](City c) {
    return *this;
}

void Board::operator=(int dis) {
    return;
}


bool Board::is_clean() const {
    return true;
}
void Board::remove_cures()
{
    return;
}
std::ostream &pandemic::operator<<(std::ostream &output, const Board &board) {
    return output;
}

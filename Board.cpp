#include "Board.hpp"
#include <iostream>
#include <string>

using namespace std;
using namespace pandemic;

int& Board::operator[](const City c) {
    return reinterpret_cast<int &>(*this);
}

const int Board::operator[](City c) const
{
    return 0;
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

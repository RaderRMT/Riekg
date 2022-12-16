#pragma once

#include "../Room.hpp"
#include <utility>

class RoomFactory {

private:
    static const int HAS_BED_PROBABILITY = 3; // lower = more chances of having a bed
    static const int MAX_ENEMIES = 5;
    static const int MAX_ITEMS = 2;

public:
    static Room* createRoom(Position position, std::pair<Direction, Position> previousRoom);
};

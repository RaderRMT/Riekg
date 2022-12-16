#pragma once

#include <map>
#include <vector>

#include "Room.hpp"

class Dungeon {

private:
    std::vector<Room*> m_rooms;

public:
    Dungeon();
};

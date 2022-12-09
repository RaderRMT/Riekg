#pragma once

#include <map>

#include "Position.hpp"
#include "Room.hpp"

class Dungeon {

private:
    std::map<Position, Room> m_rooms;

public:
    Dungeon();

    Room getRoom(Position position);
    void addRoom(Room room);
};

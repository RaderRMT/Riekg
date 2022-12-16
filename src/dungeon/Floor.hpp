#pragma once

#include "Room.hpp"
#include <vector>
#include <queue>

class Floor {

private:
    const int MAX_ROOM_COUNT = 15;
    const int MIN_ROOM_COUNT = 7;
    std::vector<Room*> rooms;

    int roomsToGenerate;

    void generateExits(Room* room);
    void generateFloorRooms(std::queue<Room*> rooms);

public:
    Floor();
    Room* generateFloor();
};

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

public:
    Floor();
    void parcoursLargeur(std::queue<Room*> rooms);
    void generateFloor();
};

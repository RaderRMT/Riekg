#include "Floor.hpp"
#include "Direction.hpp"
#include "Room.hpp"
#include "factories/RoomFactory.hpp"
#include <algorithm>
#include <cstdlib>
#include <iostream>
#include <map>
#include <utility>

Floor::Floor() {
    this->roomsToGenerate = MIN_ROOM_COUNT + (rand() % (MAX_ROOM_COUNT - MIN_ROOM_COUNT));
}

void Floor::generateFloor() {
    Room* initialRoom = RoomFactory::createRoom(std::pair<Direction, Room*>(Direction::NONE, nullptr));

    std::queue<Room*> queue;
    queue.push(initialRoom);

    generateFloorRooms(queue);
}

void Floor::generateFloorRooms(std::queue<Room*> rooms) {
    if (rooms.empty()) {
        return;
    }

    Room* room = rooms.front();

    generateExits(room);

    for (std::pair<Direction, Room*> position : room->getExits()) {
        Room* newRoom = RoomFactory::createRoom(
                std::pair<Direction, Room*>(inverse(position.first), room)
        );

        room->setExit(position.first, newRoom);

        rooms.push(newRoom);
    }

    rooms.pop();
}

void Floor::generateExits(Room* room) {
    int neighbours = rand() % 15;
    if (neighbours == 0) {
        neighbours = 1;
    }

    for (int i = 0; i < 4; i++) {
        if (this->roomsToGenerate == 0) {
            return;
        }

        int direction = neighbours & (1 << i);
        if (direction == 0) {
            continue;
        }
        
        Direction exitDirection = static_cast<Direction>(direction);

        if (room->hasExit(exitDirection)) {
            continue;
        }

        room->setExit(exitDirection, nullptr);

        this->roomsToGenerate--;
    }
}

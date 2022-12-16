#include "Dungeon.hpp"
#include "Position.hpp"
#include "Room.hpp"
#include <utility>

Dungeon::Dungeon() {
}

Room* Dungeon::getRoom(Position position) {
    return this->m_rooms.at(position);
}

void Dungeon::addRoom(Room* room) {
    this->m_rooms.insert(std::pair<Position, Room*>(room->getPosition(), room));
}

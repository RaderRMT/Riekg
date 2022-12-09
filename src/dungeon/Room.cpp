#include "Room.hpp"

#include "Position.hpp"
#include <cstddef>

Room::Room(Position position, bool hasBed, /*std::vector<Enemy> enemies, std::vector<Item> items, */std::map<Direction, Position> exits) {
    this->m_position = position;
    this->m_hasBed = hasBed;
    this->m_exits = exits;
}

bool Room::hasBed() {
    return this->m_hasBed;
}

Position Room::getExit(Direction direction) {
    return this->m_exits.at(direction);
}

Position Room::getPosition() {
    return this->m_position;
}

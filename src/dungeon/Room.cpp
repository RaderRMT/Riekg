#include "Room.hpp"

#include "Position.hpp"
#include <vector>

Room::Room(Position position, bool hasBed, std::vector<Enemy> enemies, std::vector<Item> items, std::map<Direction, Position> exits) {
    this->m_position = position;
    this->m_hasBed = hasBed;
    this->m_exits = exits;
    this->m_enemies = enemies;
    this->m_items = items;
}

bool Room::hasBed() {
    return this->m_hasBed;
}

bool Room::hasEnemies() {
    return this->m_enemies.empty();
}

std::vector<Enemy> Room::getEnemies() {
    return this->m_enemies;
}

bool Room::hasItems() {
    return this->m_items.empty();
}

std::vector<Item> Room::getItems() {
    return this->m_items;
}

Position Room::getExit(Direction direction) {
    return this->m_exits.at(direction);
}

Position Room::getPosition() {
    return this->m_position;
}

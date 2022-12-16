#include "Room.hpp"

#include "Direction.hpp"
#include "Position.hpp"
#include <algorithm>
#include <map>
#include <utility>
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

bool Room::hasExit(Direction direction) {
    return std::count(this->m_exits.begin(), this->m_exits.end(), direction);
}

std::vector<Item> Room::getItems() {
    return this->m_items;
}

Position Room::getExit(Direction direction) {
    return this->m_exits.at(direction);
}

std::map<Direction, Position> Room::getExits() {
    return this->m_exits;
}

Position Room::getPosition() {
    return this->m_position;
}

void Room::addExit(Direction direction, Position position) {
    this->m_exits.insert(std::pair<Direction, Position>(direction, position));
}

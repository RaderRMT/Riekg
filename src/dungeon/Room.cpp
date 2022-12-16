#include "Room.hpp"

#include "Direction.hpp"
#include <algorithm>
#include <map>
#include <utility>
#include <vector>

Room::Room(bool hasBed, std::vector<Enemy*> enemies, std::vector<Item*> items, std::map<Direction, Room*> exits) {
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

std::vector<Enemy*> Room::getEnemies() {
    return this->m_enemies;
}

bool Room::hasItems() {
    return this->m_items.empty();
}

bool Room::hasExit(Direction direction) {
    return std::count(this->m_exits.begin(), this->m_exits.end(), direction);
}

std::vector<Item*> Room::getItems() {
    return this->m_items;
}

Room* Room::getExit(Direction direction) {
    return this->m_exits.at(direction);
}

std::map<Direction, Room*> Room::getExits() {
    return this->m_exits;
}

void Room::setExit(Direction direction, Room* room) {
    this->m_exits.insert(std::pair<Direction, Room*>(direction, nullptr));
}

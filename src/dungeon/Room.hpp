#pragma once

#include <vector>
#include <map>
#include "../entities/enemies/Enemy.hpp"
#include "../items/Item.hpp"
#include "Position.hpp"
#include "Direction.hpp"

class Room {

private:
    std::vector<Enemy> m_enemies;
    std::vector<Item> m_items;
    std::map<Direction, Position> m_exits;
    bool m_hasBed;
    Position m_position;

public:
    Room(Position position, bool hasBed, std::vector<Enemy> enemies, std::vector<Item> items, std::map<Direction, Position> exits);

    bool hasEnemies();
    bool hasItems();
    bool hasBed();

    std::vector<Enemy> getEnemies();
    std::vector<Item> getItems();
    Position getExit(Direction direction);
    Position getPosition();
};

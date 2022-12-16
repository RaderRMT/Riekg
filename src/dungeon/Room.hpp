#pragma once

#include <vector>
#include <map>
#include "../entities/enemies/Enemy.hpp"
#include "../items/Item.hpp"
#include "Direction.hpp"

class Room {

private:
    std::vector<Enemy> m_enemies;
    std::vector<Item> m_items;
    std::map<Direction, Room*> m_exits;
    bool m_hasBed;

public:
    Room(bool hasBed, std::vector<Enemy> enemies, std::vector<Item> items, std::map<Direction, Room*> exits);

    bool hasEnemies();
    bool hasItems();
    bool hasBed();
    bool hasExit(Direction direction);

    void setExit(Direction direction, Room* room);

    std::vector<Enemy> getEnemies();
    std::vector<Item> getItems();
    Room* getExit(Direction direction);
    std::map<Direction, Room*> getExits();
};

inline bool operator==(const std::pair<const Direction, Room*> pair, const Direction direction) {
    return pair.first == direction;
}

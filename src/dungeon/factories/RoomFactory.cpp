#include "RoomFactory.hpp"
#include <cstdlib>
#include <initializer_list>
#include <map>
#include <queue>
#include <utility>
#include <vector>

Room* RoomFactory::createRoom(Position position, std::pair<Direction, Position> previousRoom) {
    bool hasBed = (rand() % HAS_BED_PROBABILITY) == 0;

    int enemyCount = rand() % MAX_ENEMIES;
    int itemCount = rand() % MAX_ITEMS;

    std::map<Direction, Position> exist;
    exist.insert(previousRoom);
    
    return new Room(
            position,
            hasBed,
            std::vector<Enemy>(),
            std::vector<Item>(),
            exist
    );
}

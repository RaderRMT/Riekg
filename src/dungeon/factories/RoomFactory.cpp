#include "RoomFactory.hpp"
#include <cstdlib>
#include <initializer_list>
#include <map>
#include <queue>
#include <utility>
#include <vector>

Room* RoomFactory::createRoom(std::pair<Direction, Room*> previousRoom) {
    bool hasBed = (rand() % HAS_BED_PROBABILITY) == 0;

    int enemyCount = rand() % MAX_ENEMIES;
    int itemCount = rand() % MAX_ITEMS;

    std::map<Direction, Room*> exist;
    exist.insert(previousRoom);
    
    return new Room(
            hasBed,
            std::vector<Enemy>(),
            std::vector<Item>(),
            exist
    );
}

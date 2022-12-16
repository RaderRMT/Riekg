#include "RoamingState.hpp"
#include "../factories/ZombieFactory.hpp"
#include "../factories/SkeletonFactory.hpp"
#include "../items/strategies/RestoreHealthStrategy.hpp"
#include "../items/strategies/GiveGoldStrategy.hpp"
#include <map>
#include <utility>

RoamingState::RoamingState(){
    ZombieFactory zombieFactory;
    SkeletonFactory skeletonFactory;
    std::vector<Enemy*> startRoolEnemies;
    startRoolEnemies.push_back(zombieFactory.createEnemy());
    std::vector<Item*> startRoomItems;
    startRoomItems.push_back(new Item("Potion de soin", "Restore 1O points de vie", new RestoreHealthStrategy()));

    std::map<Direction, Room*> children;

    std::vector<Enemy*> endRoomEnemies;
    startRoolEnemies.push_back(skeletonFactory.createEnemy());
    std::vector<Item*> endRoomItems;
    startRoomItems.push_back(new Item("Bourse d'or", "Ajoute 5 d'or à votre bourse", new GiveGoldStrategy()));

    children.insert(std::pair<Direction, Room*>(Direction::NORTH, new Room(false, endRoomEnemies, endRoomItems, std::map<Direction, Room*>())));

    Room* startRoom = new Room(true, startRoolEnemies, startRoomItems, children);
}

bool RoamingState::run(std::stack<State*>* states){
    int direction;
    scanf("%d",&direction);
    this->m_currentRoom = this->m_currentRoom->getExit(static_cast<Direction>(direction));

    return false;
}

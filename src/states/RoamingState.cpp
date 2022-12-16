#include "RoamingState.hpp"

RoamingState::RoamingState(){
    ZombieFactory zombieFactory;
    std::vector<Enemy*> enemies;
    enemies.push_back(zombieFactory.createEnemy());
    std::vector<Item*> items;
    strategy = new RestoreHealthStrategy();
    new Item("Potion de soin", "restore 1O points de vie", strategy);
    this->m_currentRoom = new Room(true, enemies , items, std::map<Direction, Room*> exits);

}

void RoamingState::run(){
    int direction;
    scanf("%d",&direction);
    this->m_currentRoom = this->m_currentRoom->getExit(static_cast<Direction>(direction));
}
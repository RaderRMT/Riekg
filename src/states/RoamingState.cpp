#include "RoamingState.hpp"

RoamingState::RoamingState(Room* currentroom){
    this->m_currentRoom = currentroom;
}

void RoamingState::run(){
    int direction;
    scanf("%d",&direction);
    static_cast<Direction>(direction);
    this->m_currentRoom = this->m_currentRoom->getExit(direction);
}
#include "RoamingState.hpp"

RoamingState::RoamingState(Room* currentroom){
    this->m_currentRoom = currentroom;
}

void RoamingState::run(){
    int direction;
    scanf("%d",&direction);
    ;
    this->m_currentRoom = this->m_currentRoom->getExit(static_cast<Direction>(direction));
}
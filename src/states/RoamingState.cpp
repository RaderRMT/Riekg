#include "RoamingState.hpp"

RoamingState::RoamingState(Room* currentroom){
    this->m_currentRoom = currentroom;
}

void RoamingState::run(){
    Direction* direction;
    scanf("%d",direction);
    this->m_currentRoom = this->m_currentRoom->getExit(*direction);
}
#include "RoamingState.hpp"

RoamingState::RoamingState(Room* currentroom){
    this->m_currentRoom = currentroom;
}

bool RoamingState::run(std::stack<State*>* states){
    int direction;
    scanf("%d",&direction);
    this->m_currentRoom = this->m_currentRoom->getExit(static_cast<Direction>(direction));

    return false;
}

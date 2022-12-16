#pragma once
#include "State.hpp"
#include "../dungeon/Room.hpp"

class RoamingState:State{
public:
    bool run(std::stack<State*>* states) override;
    RoamingState(Room* currentroom);
private:
    Room* m_currentRoom;
    
};


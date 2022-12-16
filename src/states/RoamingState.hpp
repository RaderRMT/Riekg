#pragma once
#include "State.hpp"
#include "Room.hpp"

class RoamingState:State{
public:
    void run() override;
    RoamingState();
private:
    Room* m_currentRoom;
};


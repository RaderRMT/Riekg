#pragma once
#include "State.hpp"
#include "../dungeon/Room.hpp"

class RoamingState : public State{
public:
    bool run(std::stack<State*>* states) override;
    RoamingState();

private:
    Room* m_currentRoom;
};


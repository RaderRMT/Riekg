#pragma once
#include "State.hpp"
#include "Room.hpp"
#include "Player.hpp"

class FightState{
public:
    void run();
    FightState();

private:
    bool m_inFight;
    Player* m_player;
};
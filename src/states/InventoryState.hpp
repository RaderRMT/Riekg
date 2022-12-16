#pragma once

#include "State.hpp"
#include "../dungeon/Room.hpp"
#include "../entities/Player.hpp"

class InventoryState : public State {
public:
    bool run(std::stack<State*>* states) override;

private:
    Player* m_player;
    Entity* m_enemy;
};

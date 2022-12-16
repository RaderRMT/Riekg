#pragma once
#include "State.hpp"
#include "../dungeon/Room.hpp"
#include "../entities/Player.hpp"

class FightState : public State {
public:
    bool run(std::stack<State*>* states) override;
    FightState(Enemy* enemy);

private:
    Player* m_player;
    Enemy* m_enemy;
};

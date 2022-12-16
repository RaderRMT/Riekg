#pragma once

#include "EnemyFactory.hpp"

class ZombieFactory : EnemyFactory {

private:
    const int m_experience = 5;
    const int m_health = 20;
    const int m_strength = 10;

public:
    Enemy* createEnemy() override;
};

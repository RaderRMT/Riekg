#pragma once

#include "EnemyFactory.hpp"

class SkeletonFactory : EnemyFactory {

private:
    const int m_experience = 10;
    const int m_health = 30;
    const int m_strength = 15;

public:
    Enemy* createEnemy() override;
};

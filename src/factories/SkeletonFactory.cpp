#include "SkeletonFactory.hpp"

#include "../entities/enemies/Enemy.hpp"

Enemy* SkeletonFactory::createEnemy() {
    return new Enemy("Skeleton", this->m_experience, this->m_health, this->m_strength);
}

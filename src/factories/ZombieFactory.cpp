#include "ZombieFactory.hpp"

#include "../entities/enemies/Enemy.hpp"

Enemy* ZombieFactory::createEnemy() {
    return new Enemy("Zombie", this->m_experience, this->m_health, this->m_strength);
}

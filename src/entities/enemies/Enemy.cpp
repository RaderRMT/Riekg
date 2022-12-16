#include "Enemy.hpp"
#include <string>

Enemy::Enemy(std::string name, int experience, int health, int strength) : Entity(health, strength, nullptr, nullptr) {
    this->m_experience = experience;
    this->m_name = name;
}

int Enemy::getExperience() {
    return this->m_experience;
}

std::string Enemy::getName() {
    return this->m_name;
}

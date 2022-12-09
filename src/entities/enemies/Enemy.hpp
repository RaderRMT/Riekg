#pragma once

#include "../Entity.hpp"

class Enemy : public Entity {

private:
    int m_experience;

public:
    Enemy(int experience, int health, int strength) : Entity(health, strength) {
        this->m_experience = experience;
    }

    int getExperience();
};

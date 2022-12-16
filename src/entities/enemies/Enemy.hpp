#pragma once

#include "../Entity.hpp"
#include <string>

class Enemy : public Entity {

private:
    std::string m_name;
    int m_experience;

public:
    Enemy(std::string name, int experience, int health, int strength);
    int getExperience();
    std::string getName();
};

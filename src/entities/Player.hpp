#pragma once
#include "Entity.hpp"

class Player : public Entity {

public:
    Player(int maxHealth, int strength) : Entity(maxHealth,strength) {
        this->m_maxHealth = maxHealth;
    }
    void flee();
    void observe();
    void rest();
    void useItem();

    int getMaxHealth();
    void setMaxHealth(int maxHealth);

    int getGold();
    void setGold(int gold);

    static Player* getInstance();

private:
    static Player* player;

    int m_gold;
    int m_xp;
    int m_level;
    int m_maxHealth;
};

#pragma once
#include "Entity.hpp"
#include "Position.hpp"

class Player : public Entity {

public:
    void flee();
    void observe();
    void rest();
    void move(Direction direction);

    int getMaxHealth();
    void setMaxHealth(int maxHealth);

    int getGold();
    void setGold(int gold);

    static Player* getInstance();

private:
    Player(int maxHealth, int strength);

    static Player* player;

    int m_gold;
    int m_xp;
    int m_level;
    int m_maxHealth;
};

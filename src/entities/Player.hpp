#pragma once
#include "Entity.hpp"

class Player : public Entity {
public:
    Player(int health, int strength):Entity(health,strength){}
    void flee();
    void observe();
    void rest();
    void useItem();

private:
    int m_gold;
    int m_xp;
    int m_level;
protected:
};
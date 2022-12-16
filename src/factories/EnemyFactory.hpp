#pragma once

 #include "../entities/enemies/Enemy.hpp"

class EnemyFactory {

public:
    virtual Enemy* createEnemy() = 0;
};

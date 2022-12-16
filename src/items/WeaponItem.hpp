#pragma once

#include "Item.hpp"
#include "../entities/Entity.hpp"

class Entity;

class WeaponItem : public Item {

private:
    int m_damage;

public:
    WeaponItem(std::string name, std::string description, int damage);
    void attack(Entity* entity);
};

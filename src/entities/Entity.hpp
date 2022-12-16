#pragma once

#include "../items/ArmorItem.hpp"
#include "../items/WeaponItem.hpp"
#include "../items/Inventory.hpp"

class WeaponItem;

class Entity {

public:
    int getHealth();
    void setHealth(int health);
    int getStrength();
    WeaponItem* getWeapon();
    void setWeapon(WeaponItem* weapon);
    Inventory* getInventory();
    ArmorItem* getArmor();
    void setArmor(ArmorItem* armor);
    void attack(Entity* target);

private:
    int m_health;
    int m_strength;
    Inventory* m_inventory;
    WeaponItem* m_weapon;
    ArmorItem* m_armor;

protected:
    Entity(int health, int strength, WeaponItem* weapon, ArmorItem* armor);
};

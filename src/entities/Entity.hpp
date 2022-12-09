#pragma once

class Entity {

public:
    int getHealth();
    void setHealth(int health);
    int getStrength();
//    Weapon getWeapon();
//    Inventory getInventory();
//    Armor getArmor();
    void attack(Entity);

private:
    int m_health;
    int m_strength;
//    Inventory m_inventory;
//    Weapon m_weapon;
//    Armor m_armor;

protected:
    Entity(int health, int strength/*, Weapon weapon, Armor armor*/);
};

#pragma once

class Entity {
    public:
        int getHealth();
        int getStrength();
        Weapon getWeapon();
        Armor getArmor();
        void attack(Entity);
    private:
        int m_health;
        int m_strength;
        Inventory m_inventory;
        Weapon m_weapon;
        Armor m_armor;
    protected:
        Entity(int health,int strength,Inventory inventory, Weapon weapon,Armor armor);
};

#include <iostream>
#include "Entity.hpp"

Entity::Entity(int health, int strength/*, Inventory inventory, Weapon weapon, Armor armor*/) {
    this->m_health = health;
    this->m_strength = strength;
//    this->m_inventory = inventory;
//    this->m_weapon = weapon;
//    this->m_armor = armor;
}

int Entity::getHealth(){
    return this->m_health;
}

int Entity::getStrength(){
    return this->m_strength;
}

void Entity::setHealth(int health) {
    this->m_health = health;
}

/*
Entty::getInventory(){
    return this->m_inventory
}

Entity::getWeapon(){
    return this->m_weapon;
}
*/

/*
Entity::getArmor(){
    return this->m_armor;
}
*/

/*
Entity::attack(){
    m_weapon.attack();
}
*/

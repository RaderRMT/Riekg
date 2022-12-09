#include <iostream>
#include "Entity.hpp"

Entity::Entity(health,strength,inventory,weapon,armor) {
    this->m_health = health;
    this->m_strength = strength;
    this->m_inventory = inventory;
    this->m_weapon = weapon;
    this->m_armor = armor;
}

Entity::getHealth(){
    return this->m_health;
}

Entity::getStrength(){
    return this->m_strength;
}

Entity::getWeapon(){
    return this->m_weapon;
}

Entity::getArmor(){
    return this->m_armor;
}

Entity::attack(){
    m_weapon.attack();
}
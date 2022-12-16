#include <iostream>
#include "Entity.hpp"

Entity::Entity(int health, int strength, WeaponItem* weapon, ArmorItem* armor) {
    this->m_health = health;
    this->m_strength = strength;
    this->m_inventory = new Inventory();
    this->m_weapon = weapon;
    this->m_armor = armor;
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


Inventory* Entity::getInventory(){
    return this->m_inventory;
}

WeaponItem* Entity::getWeapon(){
    return this->m_weapon;
}

void Entity::setWeapon(WeaponItem *weapon) {
    this->m_weapon = weapon;
}

ArmorItem* Entity::getArmor(){
    return this->m_armor;
}

void Entity::setArmor(ArmorItem *armor) {
    this->m_armor = armor;
}


void Entity::attack(Entity* target) {
    if (this->m_weapon == nullptr) {
        return;
    }

    this->m_weapon->attack(target);
}

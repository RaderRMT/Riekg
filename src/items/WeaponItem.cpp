#include "WeaponItem.hpp"
#include <algorithm>
#include <string>

WeaponItem::WeaponItem(std::string name, std::string description, int damage) : Item(name, description, nullptr) {
    this->m_damage = damage;
}

void WeaponItem::attack(Entity* entity) {
    int damage;

    if (entity->getArmor() != nullptr) {
        damage = std::max(this->m_damage - entity->getArmor()->getProtection(), 1);
    } else {
        damage = this->m_damage;
    }

    entity->setHealth(std::max(entity->getHealth() - damage, 0));
}

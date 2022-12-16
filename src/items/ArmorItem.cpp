#include "ArmorItem.hpp"
#include <string>

ArmorItem::ArmorItem(std::string name, std::string description, int protection) : Item(name, description, nullptr) {
    this->m_protection = protection;
}

int ArmorItem::getProtection() {
    return this->m_protection;
}

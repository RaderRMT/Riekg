#include "Item.hpp"

Item::Item(std::string name, std::string description, ItemStrategy* strategy) {
    this->m_name = name;
    this->m_description = description;
    this->m_strategy = strategy;
}

void Item::setStrategy(ItemStrategy* strategy) {
    this->m_strategy = strategy;
}

void Item::use() {
    if (this->m_strategy == nullptr) {
        return;
    }

    this->m_strategy->use();
}

std::string Item::getName() {
    return this->m_name;
}

std::string Item::getDescription() {
    return this->m_description;
}

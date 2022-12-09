#include "Item.hpp"

Item::Item(std::string name, std::string description, ItemStrategy* strategy) {
    this->m_name = name;
    this->m_description = description;
    this->m_strategy = strategy;
}

void setStrategy(ItemStrategy* strategy) {

}

std::string Item::getName() {
    return this->m_name;
}

std::string Item::getDescription() {
    return this->m_description;
}

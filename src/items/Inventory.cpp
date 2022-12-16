#include "Inventory.hpp"
#include "Item.hpp"
#include <vector>

Inventory::Inventory() {
    this->m_elements = std::vector<ItemStruct>();
}

ItemStruct Inventory::getItem(int index) {
    return this->m_elements.at(index);
}

void Inventory::insert(Item* item, int quantity) {
    for (ItemStruct inventoryItem : this->m_elements) {
        if (inventoryItem.item->getName() == item->getName()) {
            inventoryItem.quantity++;
            return;
        }
    }

    this->m_elements.push_back(ItemStruct{ item, quantity });
}

void Inventory::addAll(Inventory* inventory) {
    for (ItemStruct element : inventory->m_elements) {
        this->insert(element.item, element.quantity);
    }
}

int Inventory::getSize() {
    return this->m_elements.size();
}

std::vector<ItemStruct> Inventory::getItems() {
    return this->m_elements;
}

void Inventory::show() {
    // todo
}

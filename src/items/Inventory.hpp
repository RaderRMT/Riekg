#pragma once
#include <vector>
#include "ItemStruct.hpp"

class Inventory {

private:
    std::vector<ItemStruct> m_elements;

public:
    Inventory();

    ItemStruct getItem(int index);
    void insert(Item* item, int count);
    void addAll(Inventory* source);
    int getSize();
    std::vector<ItemStruct> getItems();
    void show();
};

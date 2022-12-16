#pragma once

#include "Item.hpp"

class ArmorItem : public Item {

private:
    int m_protection;

public:
    ArmorItem(std::string name, std::string description, int protection);
    int getProtection();
};

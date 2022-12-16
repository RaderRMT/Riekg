#pragma once
#include <iostream>
#include "strategies/ItemStrategy.hpp"

class Item {

public:
    void setStrategy(ItemStrategy* strategy);
    std::string getName();
    std::string getDescription();
    Item(std::string name, std::string description, ItemStrategy* strategy);
    void use();

private:
    std::string m_name;
    std::string m_description;
    ItemStrategy* m_strategy;
};

#pragma once
#include <iostream>
#include "strategies/ItemStrategy.hpp"


class Item {
public:
private:
    std::string m_name;
    std::string description;
    ItemStrategy m_strategy;
};
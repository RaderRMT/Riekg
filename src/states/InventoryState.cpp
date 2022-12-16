#include "InventoryState.hpp"
#include <iostream>

bool InventoryState::run(std::stack<State*>* states) {
    Player* player = Player::getInstance();

    if (player->getInventory()->getSize() == 0) {
        std::cout << "L'inventaire est vide\n";
        return true;
    }

    int index = 0;
    for (ItemStruct item : player->getInventory()->getItems()) {
        std::cout << index << ": " << item.quantity << "x  " << item.item->getName() << ": " << item.item->getDescription() << '\n';
    }

    std::cout << "\nUtiliser quel item?\n";

    int action;
    std::cin >> action;

    if (action < 0 || action >= player->getInventory()->getSize()) {
        return false;
    }

    player->getInventory()->getItem(action).item->use();
    return true;
}

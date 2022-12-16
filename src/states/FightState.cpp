#include "FightState.hpp"
#include "InventoryState.hpp"
#include <iostream>

FightState::FightState(Enemy* enemy) {
    this->m_player = Player::getInstance();
    this->m_enemy = enemy;
}

bool FightState::run(std::stack<State*>* states) {
    std::cout << "Ennemi: " << this->m_enemy->getName() << '\n';
    std::cout << "PV Ennemi: " << this->m_enemy->getHealth() << '\n';
    std::cout << "PV Joueur: " << this->m_player->getHealth() << '\n';

    if (this->m_enemy->getHealth() == 0) {
        return true;
    }

    std::cout << '\n';
    std::cout << "[0] Attaquer" << '\n';
    std::cout << "[1] Inventaire" << '\n';
    std::cout << "[2] Fuir" << '\n';

    int option;
    std::cin >> option;

    switch (option) {
        case 0:
            this->m_player->attack(this->m_enemy);
            break;

        case 1:
            states->push(new InventoryState());
            break;

        case 2:
            return true;
            break;

        default:
            break;
    }

    return false;
}

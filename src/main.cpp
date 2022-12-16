#include "entities/enemies/Enemy.hpp"
#include "items/WeaponItem.hpp"
#include "states/FightState.hpp"
#include <iostream>
#include <stack>

#include "factories/ZombieFactory.hpp"
#include "states/State.hpp"

std::stack<State*> states;

int main() {
    Player* player = Player::getInstance();
    player->setWeapon(new WeaponItem("Epée", "Une épée trouvée dans un coin", 6));

    ZombieFactory zombieFactory;

    Enemy* enemy = zombieFactory.createEnemy();

    FightState* state = new FightState(enemy);
    states.push(state);

    while (!states.empty()) {
        State* currentState = states.top();

        if (currentState->run(&states)) {
            states.pop();
        }
    }
}

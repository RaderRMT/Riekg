#include "RestoreHealthStrategy.hpp"

#include "../../entities/Player.hpp"
#include <algorithm>

void RestoreHealthStrategy::use() {
    Player* player = Player::getInstance();

    player->setHealth(std::min(player->getHealth() + HEALTH_RESTORE, player->getMaxHealth()));
}

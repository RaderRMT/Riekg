#include "GiveGoldStrategy.hpp"

#include "../../entities/Player.hpp"
#include <algorithm>

void GiveGoldStrategy::use() {
    Player* player = Player::getInstance();

    player->setGold(player->getGold() + GOLD_COUNT);
}

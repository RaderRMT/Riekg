#include <iostream>
#include "Player.hpp"

Player::Player(int maxHealth, int strength) : Entity(maxHealth, strength, nullptr, nullptr) {
    this->m_gold = 0;
    this->m_xp = 0;
    this->m_level = 0;
    this->m_maxHealth = maxHealth;
}

Player* Player::getInstance() {
    if (player == nullptr) {
        player = new Player(100, 30);
    }

    return player;
}

Player* Player::player = nullptr;

void Player::setMaxHealth(int maxHealth) {
    this->m_maxHealth = maxHealth;
}

int Player::getMaxHealth() {
    return this->m_maxHealth;
}

void Player::setGold(int gold) {
    this->m_gold = gold;
}

int Player::getGold() {
    return this->m_gold;
}

void Player::flee() {


}

void Player::observe() {

}

void Player::rest() {

}


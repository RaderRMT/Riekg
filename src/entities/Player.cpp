#include <iostream>
#include "Player.hpp"

Player* Player::getInstance() {
    if (player == nullptr) {
        player = new Player(100, 30);
    }

    return player;
}

void Player::setMaxHealth(int maxHealth) {
    this->m_maxHealth = maxHealth;
}

int Player::getMaxHealth() {
    return this->m_maxHealth;
}

void Player::flee(){

}

void Player::observe(){

}

void Player::rest(){

}

void Player::useItem(){
    
}

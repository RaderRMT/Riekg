#include <iostream>
#include "Player.hpp"

Player* Player::getInstance() {
    if (player == nullptr) {
        player = new Player(100, 30);
    }

    return player;
}

void Player::flee(){
    
}

void Player::observe(){

}

void Player::rest(){

}

void Player::useItem(){
    
}

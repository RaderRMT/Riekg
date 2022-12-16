#include "FightState.hpp"
#include <iostream>

FightState::FightState(Entity* entity){
    this->m_player = Player::getInstance();
};

void FightState::run(){
    int option;
    std::cin >> option;
    if (option == 0) {
        this->m_player->attack(this->m_entity);
    }
    if (option == 1){
        this->m_player->flee();        
    }
    if (option == 2){
        this->m_player->observe();
    }
    if (option == 3){
        this->m_player->rest();
    }
    if (option == 4){
        this->m_player->
    }
    
};
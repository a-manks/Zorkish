//
//  Player.cpp
//  Zorkish
//
//  Created by Adam Manks on 8/09/2014.
//  Copyright (c) 2014 Adam Manks. All rights reserved.
//

#include "Player.h"


Player::Player()
{
    
}

Player::Player(std::string idents, std::string oname, std::string desc):Entity(idents, oname, desc)
{
    health = 100;
    alive = true;

    
    
}



void Player::listInvent()
{
    std::cout<<"Your inventory conatins: \n"<<std::endl;
    std::cout<<inventory.list();
}
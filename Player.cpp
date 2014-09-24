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

Inventory& Player::getInventory()
{
    return inventory;
}



void Player::changeLocation(std::string locname)
{
    locName = locname;
}

Location& Player::getLocation()
{
    return loc;
}
void Player::setLocation(Location l)
{
    loc = l;
}
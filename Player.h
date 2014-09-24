//
//  Player.h
//  Zorkish
//
//  Created by Adam Manks on 8/09/2014.
//  Copyright (c) 2014 Adam Manks. All rights reserved.
//

#pragma once
#include <iostream>
#include "Entity.h"
#include "Inventory.h"
#include "Item.h"
#include "Location.h"

class Player : public Entity
{
private:
    Inventory inventory;
    Location loc;
public:
    bool alive;
    int health;
    Player();
    Player(std::string idents, std::string oname, std::string desc);
    void takeDamage(int damage);
    Inventory& getInventory();
    void changeLocation(std::string locName);
    Location& getLocation();
    std::string locName;
    void setLocation(Location l);
    
};



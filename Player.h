//
//  Player.h
//  Zorkish
//
//  Created by Adam Manks on 8/09/2014.
//  Copyright (c) 2014 Adam Manks. All rights reserved.
//

#ifndef __Zorkish__Player__
#define __Zorkish__Player__
#pragma once
#include <iostream>
#include "Entity.h"
#include "Inventory.h"
#include "Item.h"

class Player : public Entity
{
private:
    
    
    
public:
    bool alive;
    int health;
    Inventory inventory;
    Player();
    Player(std::string idents, std::string oname, std::string desc);
    void listInvent();
    void takeDamage(int damage);
  
    

    
    
    
};


#endif /* defined(__Zorkish__Player__) */

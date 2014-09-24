//
//  Location.h
//  Zorkish
//
//  Created by Adam Manks on 11/09/2014.
//  Copyright (c) 2014 Adam Manks. All rights reserved.
//


#pragma once
#include <iostream>
#include "Entity.h"
#include "Item.h"
#include "Inventory.h"
#include "StringSplit.h"

class Location : public Entity
{
    
private:
    Inventory inventory;
    //std::vector<Enemies> enemies;
    struct ExitInfo {

        std::string direction;
        std::string locToMove;
        bool isEnabled;
        bool locked;
    };
    
    
public:
    Location();
    Location(std::string idents, std::string oname, std::string desc);
    Inventory& getInventory();
    std::string getName();
    std::string getDesc();
    void setDesc();
    void setExit(std::string exitDirection, std::string locConnection, bool enabled = true, bool locked = false);
    void enableExit(std::string direction, bool enabled);
    std::vector<ExitInfo> locsToMove;
    using Entity::areYou;
    
};


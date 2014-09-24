//
//  GameWorld.h
//  Zorkish
//
//  Created by Adam Manks on 11/09/2014.
//  Copyright (c) 2014 Adam Manks. All rights reserved.
//


#include "Player.h"
#include <iostream>
#include "Location.h"
#include <list>
#include "Item.h"
#include "CommandProcessor.h"
#include <list>
#pragma once

class GameWorld
{
private:
    CommandProcessor cp;
    Player p;
    std::vector<Location> locs;
    void populateLocs();
    bool locChange();
    
    
    
public:
    GameWorld();
    ~GameWorld();
    void processInput(std::string commands);
    void update();
    void render();
};

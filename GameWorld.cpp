//
//  GameWorld.cpp
//  Zorkish
//
//  Created by Adam Manks on 11/09/2014.
//  Copyright (c) 2014 Adam Manks. All rights reserved.
//

#include "GameWorld.h"


GameWorld::GameWorld()
{
    p = Player("p1", "Adam", "The hero");
    populateLocs();
    cp = CommandProcessor();
}

GameWorld::~GameWorld()
{
    
}

void GameWorld::populateLocs()
{
    
    Location Home("home Home", "Home", "Your home ay the bottom of the mountain you can see a path leading to the west"
                  " ");
    Item Key("key Key", "key", "A key, silver, i wonder what it opens...." );
    Home.getInventory().put(Key);
    
    Location Lake("lake Lake", "Lake", "A wide lake thats uncrossable without a boat... you see a valley to the North");
    
    Item Rock("rock stone Rock Stone", "Rock", "A heavy rock, could inlfict some damage...if you could throw");
    Lake.getInventory().put(Rock);
    
    Location Valley("valley Valley", "Valley", "looks like a dead end");
    Item GoldBar("Goldbar gold Gold", "Gold Bar", "A solid gold bar...or so you hope.");
    Valley.getInventory().put(GoldBar);
    
    Home.setExit("west", "Lake");
    Home.setExit("north", "Valley");
    Lake.setExit("east", "Home");
    Lake.setExit("north", "Valley");
    Valley.setExit("south", "Lake");
    locs.push_back(Valley);
    locs.push_back(Lake);
    p.locName = "Home";
    p.setLocation(Home);
    
}

bool GameWorld::locChange()
{
    if (p.locName != p.getLocation().getName()) {return true;}
    else {return false;};
}


void GameWorld::processInput(std::string commands)
{
    cp.process(commands, &p);
}

void GameWorld::update()
{
    std::string locName = p.locName;
  
    if (locName != p.getLocation().getName()) {
        locs.push_back(p.getLocation());
        for (int i = 0; i < locs.size(); i++) {
        if (locs[i].getName() == locName) {
                p.setLocation(locs[i]);
                locs.erase(locs.begin() + i);
                break;
            }
        }
    }
}

void GameWorld::render()
{
    if (locChange()) {
        std::cout<< p.getLocation().Entity::getDesc();
    }
    
}
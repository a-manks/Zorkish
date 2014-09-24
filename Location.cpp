//
//  Location.cpp
//  Zorkish
//
//  Created by Adam Manks on 11/09/2014.
//  Copyright (c) 2014 Adam Manks. All rights reserved.
//

#include "Location.h"

Location::Location()
{
  
}

Location::Location(std::string idents, std::string oname, std::string desc):Entity(idents, oname, desc)
{
    
    
}

Inventory& Location::getInventory()
{
    return inventory;
}

std::string Location::getName()
{
    return this->Entity::getName();
}

std::string Location::getDesc()
{
    return this->Entity::getDesc();
}


void Location::setExit(std::string exitDirection, std::string locConnection, bool enabled, bool locked)
{
    ExitInfo exitInfo;
    exitInfo.direction = exitDirection;
    exitInfo.locToMove = locConnection;
    exitInfo.isEnabled = enabled;
    exitInfo.locked = locked;
    locsToMove.push_back(exitInfo);
    
}

void Location::enableExit(std::string direction, bool enabled)
{
    for (int i =0; i < locsToMove.size(); i++) {
        if(locsToMove[i].direction == direction) {
            locsToMove[i].isEnabled = enabled;
            break;
        }
    }
}



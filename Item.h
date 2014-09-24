//
//  Item.h
//  Zorkish
//
//  Created by Adam Manks on 8/09/2014.
//  Copyright (c) 2014 Adam Manks. All rights reserved.
//


#pragma once
#include <iostream>
#include "Entity.h"

class Item : public Entity
{
private:
    static Item m_item;
    std::string name;
    std::string description;
    
public:
    Item();
    Item(std::string idents, std::string oname, std::string desc);
    bool areYou(std::string ids);
    static Item* instance();
    std::string getName();
};



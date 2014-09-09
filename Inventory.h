//
//  Inventory.h
//  Zorkish
//
//  Created by Adam Manks on 8/09/2014.
//  Copyright (c) 2014 Adam Manks. All rights reserved.
//

#ifndef __Zorkish__Inventory__
#define __Zorkish__Inventory__
#pragma once
#include <iostream>
#include <vector>
#include "Item.h"


class Item;

class Inventory
{
private:
    std::vector<Item> items;
    
    
public:
    Inventory();
    bool hasItem(std::string ids);
    void put(Item itm);
    Item* fetch (std::string ids);
    std::string list();
    ~Inventory();
    
};

#endif /* defined(__Zorkish__Inventory__) */

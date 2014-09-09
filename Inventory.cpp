//
//  Inventory.cpp
//  Zorkish
//
//  Created by Adam Manks on 8/09/2014.
//  Copyright (c) 2014 Adam Manks. All rights reserved.
//

#include "Inventory.h"

Inventory::Inventory()
{
    Item sword("Sword", "Blunt Sword", "a starting weapon");
    put(sword);
    Item key("Key", "Golden Master Key", ".....");
    put(key);
    
}

Inventory::~Inventory()
{
    if (items.size() <= 0) {
        items.clear();
    }
}


std::string Inventory::list()
{
    std::string itemList;
    for (int i =0; i < items.size(); i++) {
        itemList +=(items[i].getName());
        itemList.append("\n");
    }
    return itemList;
}


bool Inventory::hasItem(std::string ids)
{
    bool temp = false;
    
    for (int i =0; i < items.size(); i++) {
        if(items[i].areYou(ids)) {
            temp = true;
        }
    }
    return temp;
}

void Inventory::put(Item itm)
{
    items.push_back(itm);
}


Item* Inventory:: fetch(std::string ids)
{
    
    for (int i =0; i < items.size(); i++) {
        if(items[i].areYou(ids)) {
            return items[i].instance();
        }
    }
    
    return nullptr;

}


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
    
}

Inventory::~Inventory()
{
    
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

void Inventory::put(Item& itm)
{
    items.push_back(itm);
}

void Inventory::drop(std::string ids)
{
    
    for (int i=0; i< items.size(); i++) {
        if(items[i].areYou(ids)) {
            items.erase(items.begin() +i);
        }
        
    }
    
}


Item& Inventory::fetch(std::string ids)
{
    
    Item g;
    for (int i =0; i < items.size(); i++) {
        if(items[i].areYou(ids)) {
            return items[i];
        }
    }
    
    return g;

}

bool Inventory::isEmpty()
{
    bool temp = true;
    if (! items.empty()) {
        temp = false;
    }
    return temp;
}


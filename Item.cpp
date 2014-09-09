//
//  Item.cpp
//  Zorkish
//
//  Created by Adam Manks on 9/09/2014.
//  Copyright (c) 2014 Adam Manks. All rights reserved.
//

#include "Item.h"

Item Item::m_item;

Item::Item(std::string idents, std::string oname, std::string desc):Entity(idents, oname, desc)
{
    this->description = desc;
    this->name = oname;
}


Item::Item()
{
    
}
bool Item :: areYou(std::string ids)
{
    bool temp;
    temp = Entity::areYou(ids);
    return temp;
}

Item* Item::instance()
{
    return &m_item;
}

std::string Item:: getName()
{
    return name;
}
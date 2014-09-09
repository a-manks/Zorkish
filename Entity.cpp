//
//  Entity.cpp
//  Zorkish
//
//  Created by Adam Manks on 8/09/2014.
//  Copyright (c) 2014 Adam Manks. All rights reserved.
//

#include "Entity.h"

Entity::Entity()
{
    
}

Entity::Entity(std::string idents, std::string oname, std::string desc)
{
    identifiers = split(idents, ' ');
    description = desc;
    name = oname;
}

Entity::~Entity()
{
   
}

std::vector<std::string> Entity::ssplit(const std::string &s, char delim, std::vector<std::string> &elems)
{
    std::stringstream ss(s);
    std::string item;
    while (std::getline(ss, item, delim)) {
        elems.push_back(item);
    }
    return elems;
}

std::vector<std::string> Entity::split(const std::string &s, char delim)
{
    std::vector<std::string> elems;
    ssplit(s, delim, elems);
    return elems;
}

bool Entity:: areYou(std::string ids)
{
    bool temp = false;
    for (int i =0; i< identifiers.size(); i++) {
    
        if (identifiers[i] == ids) {
            temp = true;
            break;
        }
       }
    return temp;
}

void Entity::addIdentifier(std::string ids)
{
    identifiers.push_back(ids);
}


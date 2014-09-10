//
//  Entity.cpp
//  Zorkish
//
//  Created by Adam Manks on 8/09/2014.
//  Copyright (c) 2014 Adam Manks. All rights reserved.
//

#include "Entity.h"
#include "StringSplit.h"

Entity::Entity()
{
    
}

Entity::Entity(std::string idents, std::string oname, std::string desc)
{
    identifiers = StringSplit::split(idents, ' ');
    description = desc;
    name = oname;
}

Entity::~Entity()
{
   
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


//
//  Entity.h
//  Zorkish
//
//  Created by Adam Manks on 8/09/2014.
//  Copyright (c) 2014 Adam Manks. All rights reserved.
//


#pragma once
#include <iostream>
#include <vector>
#include <sstream>



class Entity
{
private:
    std::vector<std::string> identifiers;
    std::string description;
    std::string name;
    
public:
    Entity();
    Entity(std::string idents, std::string oname, std::string desc);
    bool areYou(std::string ids);
    std::string firstId();
    void addIdentifier(std::string ids);
    virtual ~Entity();
    std::string getName();
    std::string getDesc();
    
    
};



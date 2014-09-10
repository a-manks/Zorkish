//
//  CommandProcessor.h
//  Zorkish
//
//  Created by Adam Manks on 9/09/2014.
//  Copyright (c) 2014 Adam Manks. All rights reserved.
//


#pragma once
#include "Player.h"
#include <iostream>
#include "StringSplit.h"
#include <vector>
#include <map>
#include "Command.h"
#include "GoCommand.h"
#include "Look.h"

class CommandProcessor
{
private:
    static CommandProcessor m_CommandProcessor;
    std::map<std::string, Command*> commandDict;
    std::map<std::string, Command*>::iterator it;
    Look look;
    GoCommand goCommand;
    
public:
    CommandProcessor();
    CommandProcessor* instance();
    
    static std::vector<std::string>split(std::string str);
    void process(std::string commands, Player *p);
    void populateCommandDict();
    
};



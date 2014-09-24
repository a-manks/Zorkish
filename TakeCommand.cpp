//
//  Take.cpp
//  Zorkish
//
//  Created by Adam Manks on 12/09/2014.
//  Copyright (c) 2014 Adam Manks. All rights reserved.
//

#include "TakeCommand.h"


TakeCommand TakeCommand:: m_TakeCommand;

TakeCommand::TakeCommand()
{
    
}

TakeCommand* TakeCommand :: instance()
{
    return &m_TakeCommand;
}


std::string TakeCommand::execute(std::vector<std::string> commands, Player *p)
{
    std::string str;
    if (hasItem(p, commands[1])) {
        Item i = p->getLocation().getInventory().fetch(commands[1]);
        p->getInventory().put(i);
        p->getLocation().getInventory().drop(commands[1]);
        str="You have take " + commands[1];
    }else{
        str="I cant see that item";
    }
    return str;
}

bool TakeCommand::hasItem(Player *p, std::string item)
{
    bool temp = false;
    if (p->getLocation().getInventory().hasItem(item)) {
        temp = true;
    }
    return temp;
}


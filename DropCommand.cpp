//
//  DropCommand.cpp
//  Zorkish
//
//  Created by Adam Manks on 15/09/2014.
//  Copyright (c) 2014 Adam Manks. All rights reserved.
//

#include "DropCommand.h"

DropCommand::DropCommand()
{
    
}

DropCommand DropCommand::m_DropCommand;

DropCommand* DropCommand::instance()
{
    return &m_DropCommand;
}

std::string DropCommand::execute(std::vector<std::string> commands, Player *p)
{
    std::string str;
    if (hasItem(p, commands[1])) {
        Item i = p->getInventory().fetch(commands[1]);
        p->getLocation().getInventory().put(i);
        p->getInventory().drop(commands[1]);
        str="You have dropped " + commands[1];
    }else{
        str="I cant see that item";
    }
    return str;

}

bool DropCommand::hasItem(Player *p, std::string item)
{
    bool temp = false;
    if (p->getInventory().hasItem(item)) {
        temp = true;
    }
    return temp;
}
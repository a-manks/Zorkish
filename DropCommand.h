//
//  DropCommand.h
//  Zorkish
//
//  Created by Adam Manks on 15/09/2014.
//  Copyright (c) 2014 Adam Manks. All rights reserved.
//


#pragma once
#include <iostream>
#include "Command.h"
#include "Player.h"


class DropCommand : public Command
{
public:
    DropCommand();
    static DropCommand* instance();
    std::string execute(std::vector<std::string> commands, Player *p);
    bool hasItem(Player *p, std::string item);
    
private:
    static DropCommand m_DropCommand;
};
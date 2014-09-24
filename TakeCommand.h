//
//  Take.h
//  Zorkish
//
//  Created by Adam Manks on 12/09/2014.
//  Copyright (c) 2014 Adam Manks. All rights reserved.
//


#pragma once
#include <iostream>
#include "Command.h"
#include "Item.h"
#include "Player.h"
#include <vector>


class TakeCommand : public Command
{
public:
    TakeCommand();
    static TakeCommand* instance();
    std::string execute(std::vector<std::string> commands, Player *p);
    bool hasItem(Player *p, std::string item);
private:
    static TakeCommand m_TakeCommand;
};


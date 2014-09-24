//
//  GoCommand.h
//  Zorkish
//
//  Created by Adam Manks on 9/09/2014.
//  Copyright (c) 2014 Adam Manks. All rights reserved.
//


#pragma once
#include <iostream>
#include "Command.h"

class GoCommand : public Command
{
public:
    GoCommand();
    static GoCommand* instance();
    std::string execute(std::vector<std::string> commands, Player *p);
    std::string changeLocation(std::string dir, Player *p);
private:
    static GoCommand m_goCommand;
};



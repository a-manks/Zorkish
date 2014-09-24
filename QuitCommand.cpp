//
//  Quit.cpp
//  Zorkish
//
//  Created by Adam Manks on 15/09/2014.
//  Copyright (c) 2014 Adam Manks. All rights reserved.
//

#include "QuitCommand.h"

QuitCommand QuitCommand::m_QuitCommand;

QuitCommand::QuitCommand()
{
    
}

QuitCommand* QuitCommand::instance()
{
    return &m_QuitCommand;
}

std::string QuitCommand::execute(std::vector<std::string> commands, Player* p)
{
    return "Bye";
}
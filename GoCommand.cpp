
//
//  GoCommand.cpp
//  Zorkish
//
//  Created by Adam Manks on 9/09/2014.
//  Copyright (c) 2014 Adam Manks. All rights reserved.
//

#include "GoCommand.h"



GoCommand GoCommand::m_goCommand;

GoCommand::GoCommand()
{
    
}

GoCommand* GoCommand::instance()
{
    return(&m_goCommand);
}

std::string GoCommand::execute(std::vector<std::string> commands, Player *p)
{
    if (commands.size()<2) {
        return "Invalid direction command";
    }
    
    if (commands.size()==2) {
        std::string dir = commands[1];
        char d = dir[0];
        
        switch (d) {
            case 'n':
                return "heading north";
                break;
            case's' :
                return "heading south";
                break;
            case'e':
                return "heading east";
                break;
            case'w' :
                return "heading west";
                break;
                
            default:
                break;
        }
        
    }
    return "NOPE";
}



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

std::string GoCommand::changeLocation(std::string dir, Player *p)
{
    std::string temp = "Hmm can seem to go that way...";
    //Location ltemp = *new Location();
    for (int i=0; i< p->getLocation().locsToMove.size(); i++) {
        if (dir == p->getLocation().locsToMove[i].direction && p->getLocation().locsToMove[i].isEnabled )
        {
            p->changeLocation(p->getLocation().locsToMove[i].locToMove);
            temp ="Heading ";
            break;
        }
    }
    return temp;
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
                return changeLocation(dir, p) + "North";
                break;
            case's' :
                return changeLocation(dir, p) + "South";
                break;
            case'e':
                return changeLocation(dir, p) + "East";
                break;
            case'w' :
                return changeLocation(dir, p) + "West";
                break;
                
            default:
                break;
        }
        
    }
    return NULL;
}
 

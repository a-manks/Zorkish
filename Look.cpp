//
//  Look.cpp
//  Zorkish
//
//  Created by Adam Manks on 9/09/2014.
//  Copyright (c) 2014 Adam Manks. All rights reserved.
//

#include "Look.h"

Look Look::m_Look;

Look::Look()
{
    
}

Look* Look::instance()
{
    return (&m_Look);
}

std::string Look::execute(std::vector<std::string>commands, Player *p)
{
    if (commands[0] != "look" || commands [1] != "at")
    {
      return  "What do you what to look at?";
        
    }
    if (commands.size() == 5) {
        
        if (commands [3] != "in") {
            return "What do you want to look in?";
        } else {
            return lookAtIn (p, commands[2], commands[4]);
        }
    } else if (commands.size() == 3) {
         return lookAtIn (p, commands[2], "inventory");
    } else {
        return "I don't know how to look like that.";
    }
}

std::string Look::lookAtIn (Player *p, std::string thingId, std::string containerId)
{
    std::string result = "";
    
    
    if (thingId == containerId)
    {
        result = containerId;
    }
    else{
        if (p->inventory.hasItem(thingId))
        {
            Item *i = p->inventory.fetch(thingId);
            return i->getName();
        }else{
            result = "I cannot find the " + containerId;
        }
    }
    return result;
}


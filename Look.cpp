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

std::string Look::execute(std::vector<std::string> commands, Player *p)
{
    if (commands.size() == 1) {
        return p->getLocation().getDesc();
    }
    
    if (commands.size() == 2 && commands[1] == "around") {
        return lookAround(p);
    }
    
    if ( commands [1] == "at" && commands.size()==3)
    {
        return lookAt(commands[2], p);
        
    }else if (commands.size()==3 && commands [1] == "in" && commands [2] == "inventory"){
        
        return lookInInventory (p);
    
    } else {
        return "I don't know how to look like that.";
    }
}

std::string Look::lookAt(std::string idents, Player *p)
{
    std::string temp = p->getLocation().getInventory().fetch(idents).getDesc();
    if (temp.empty()) {
        temp = "Sorry i can't see that item";
    }
    return temp;
}

std::string Look::lookAround(Player *p)
{
    return "You can see: \n" + p->getLocation().getInventory().list();
}

std::string Look::lookInInventory(Player *p)
{
    std::string result = "";
    
    if (p->getInventory().isEmpty()) {
        result = "Your inventory is empty...";
    } else {
        
        result = "Your inventory conatins: \n" + p->getInventory().list();

    }

    
    return result;

}




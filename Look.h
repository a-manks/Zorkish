//
//  Look.h
//  Zorkish
//
//  Created by Adam Manks on 9/09/2014.
//  Copyright (c) 2014 Adam Manks. All rights reserved.
//


#pragma once
#include <iostream>
#include "Command.h"
#include "Player.h"


class Look : public Command
{

public:
    Look();
    static Look* instance();
    std::string execute(std::vector<std::string> commands, Player *p);
    std::string lookAround(Player *p);
    std::string lookInInventory(Player *p);
    std::string lookAt(std::string idents, Player *p);
private:
    static Look m_Look;
};


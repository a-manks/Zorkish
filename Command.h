//
//  Command.h
//  Zorkish
//
//  Created by Adam Manks on 8/09/2014.
//  Copyright (c) 2014 Adam Manks. All rights reserved.
//

#pragma once
#include <iostream>
#include "Player.h"
class Player;

class Command
{
public:
    virtual std::string execute(std::vector<std::string> commands, Player *p)=0;
    
};




//
//  Command.h
//  Zorkish
//
//  Created by Adam Manks on 8/09/2014.
//  Copyright (c) 2014 Adam Manks. All rights reserved.
//

#ifndef __Zorkish__Command__
#define __Zorkish__Command__
#pragma once
#include <iostream>
#include "Player.h"
class Player;

class Command
{
public:
    virtual void Execute(std::string commands, Player *p)=0;
    
};


#endif /* defined(__Zorkish__Command__) */

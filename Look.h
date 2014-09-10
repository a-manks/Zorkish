//
//  Look.h
//  Zorkish
//
//  Created by Adam Manks on 9/09/2014.
//  Copyright (c) 2014 Adam Manks. All rights reserved.
//

#ifndef __Zorkish__Look__
#define __Zorkish__Look__
#pragma once
#include <iostream>
#include "Command.h"
#include "Player.h"

class Look : public Command
{

public:
    Look();
    static Look* instance();
    std::string execute(std::vector<std::string>commands, Player *p);
    std::string lookAtIn(Player *p, std::string thingId, std::string containerId);
private:
    static Look m_Look;
};

#endif /* defined(__Zorkish__Look__) */

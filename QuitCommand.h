//
//  Quit.h
//  Zorkish
//
//  Created by Adam Manks on 15/09/2014.
//  Copyright (c) 2014 Adam Manks. All rights reserved.
//

#pragma once
#include <iostream>
#include "Command.h"
#include "Player.h"
#include "MenuMain.h"


class QuitCommand : public Command
{
public:
    QuitCommand();
    static QuitCommand* instance();
    std::string execute(std::vector<std::string> commands, Player *p);
private:
    static QuitCommand m_QuitCommand;
    
};

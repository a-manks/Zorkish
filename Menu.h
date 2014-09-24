//
//  Menu.h
//  Zorkish
//
//  Created by Adam Manks on 8/09/2014.
//  Copyright (c) 2014 Adam Manks. All rights reserved.
//


#pragma once
#include <iostream>
#include "GameState.h"
class Menu : public GameState
{
public:
    virtual void Render() =0;
    virtual void ProcessInput(GameManager * playerManager, std::string str) =0;
    virtual void Run() =0;
    void PrintHeader(std::string name);
    
    
protected:
    
    Menu();
};

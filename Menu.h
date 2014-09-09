//
//  Menu.h
//  Zorkish
//
//  Created by Adam Manks on 8/09/2014.
//  Copyright (c) 2014 Adam Manks. All rights reserved.
//

#ifndef __Zorkish__Menu__
#define __Zorkish__Menu__
#pragma once
#include <iostream>
#include "GameState.h"
class Menu : public GameState
{
public:
    virtual void Render() =0;
    virtual void ProcessInput(GameManager * playerManager, char nKey) =0;
    virtual void Run() =0;
    void PrintHeader(std::string name);
    
    
protected:
    
    Menu();
};

#endif /* defined(__Zorkish__Menu__) */

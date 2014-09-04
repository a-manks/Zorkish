//
//  Help.h
//  Zorkish
//
//  Created by Adam Manks on 4/09/2014.
//  Copyright (c) 2014 Adam Manks. All rights reserved.
//

#ifndef __Zorkish__Help__
#define __Zorkish__Help__
#pragma once
#include <iostream>
#include "GameState.h"

class Help : public GameState
{
public:
    virtual void Render();
    virtual void Update();
    virtual void ProcessInput(GameManager * playerManager, char nKey);
    virtual void Run();
    
    static Help* Instance();
    
    virtual ~Help();
    
protected:
    Help();
    
private:
    static Help m_Help;
    std::string name;
    
};



#endif /* defined(__Zorkish__Help__) */

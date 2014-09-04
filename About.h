//
//  About.h
//  Zorkish
//
//  Created by Adam Manks on 3/09/2014.
//  Copyright (c) 2014 Adam Manks. All rights reserved.
//

#ifndef __Zorkish__About__
#define __Zorkish__About__
#pragma once
#include <iostream>
#include "GameState.h"


class About : public GameState
{
public:
    virtual void Render();
    virtual void Update();
    virtual void ProcessInput(GameManager * playerManager, char nKey);
    virtual void Run();
    
    static About* Instance();
    
    virtual ~About();
    
protected:
    About();
    
private:
    static About m_About;
    std::string name;
    
};





#endif /* defined(__Zorkish__About__) */

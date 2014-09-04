//
//  SelectAdventure.h
//  Zorkish
//
//  Created by Adam Manks on 3/09/2014.
//  Copyright (c) 2014 Adam Manks. All rights reserved.
//

#ifndef __Zorkish__SelectAdventure__
#define __Zorkish__SelectAdventure__
#pragma once
#include <iostream>
#include "GameState.h"
class SelectAdventure : public GameState
{
public:
    virtual void Render();
    virtual void Update();
    virtual void ProcessInput(GameManager * playerManager, char nKey);
    virtual void Run();
    
    static SelectAdventure* Instance();
    
    virtual ~SelectAdventure();
    
protected:
    SelectAdventure();
    
private:
    static SelectAdventure m_SelectAdventure;
    std::string name;
    
};

#endif /* defined(__Zorkish__SelectAdventure__) */

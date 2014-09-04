//
//  HighScore.h
//  Zorkish
//
//  Created by Adam Manks on 4/09/2014.
//  Copyright (c) 2014 Adam Manks. All rights reserved.
//

#ifndef __Zorkish__HighScore__
#define __Zorkish__HighScore__
#pragma once
#include <iostream>
#include "GameState.h"

class HighScore : public GameState
{
public:
    virtual void Render();
    virtual void Update();
    virtual void ProcessInput(GameManager * playerManager, char nKey);
    virtual void Run();
    
    static HighScore* Instance();
    
    virtual ~HighScore();
    
protected:
    HighScore();
    
private:
    static HighScore m_HighScore;
    std::string name;
    
};


#endif /* defined(__Zorkish__HighScore__) */

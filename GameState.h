//
//  GameState.h
//  Zorkish
//
//  Created by Adam Manks on 3/09/2014.
//  Copyright (c) 2014 Adam Manks. All rights reserved.
//

#ifndef __Zorkish__GameState__
#define __Zorkish__GameState__
#pragma once
#include <iostream>

class GameManager;

class GameState
{
public:
    virtual void Render() = 0;
    virtual void Update() = 0;
    virtual void ProcessInput(GameManager * playerManager, char nKey) =0;
    void PrintHeader(std::string name);
    virtual void Run()=0;
    
   
    virtual ~GameState();
    
protected:
    GameState();
    
    void ChangeState(GameManager* playerManager,
                     GameState* playerState);
    
    
};



#endif /* defined(__Zorkish__GameState__) */

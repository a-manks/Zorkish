//
//  PlayingState.h
//  Zorkish
//
//  Created by Adam Manks on 20/09/2014.
//  Copyright (c) 2014 Adam Manks. All rights reserved.
//


#pragma once
#include <iostream>
#include "GameState.h"
#include "GameWorld.h"
#include "GameManager.h"




class PlayingState : public GameState
{
public:
    void Render();
    void Update();
    void ProcessInput(GameManager * playerManager, std::string str);
    void Run();
    
     PlayingState();
   static PlayingState* instance();
    ~PlayingState();
   
private:
    static PlayingState m_PlayingState;
    GameWorld g;
 
    };


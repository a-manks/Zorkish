//
//  GameManager.h
//  Zorkish
//
//  Created by Adam Manks on 3/09/2014.
//  Copyright (c) 2014 Adam Manks. All rights reserved.
//

#include <iostream>
#pragma once
class GameState;

class GameManager
{
public:
    void Render();
    void Update();
    void ProcessInput(std::string str);
    
    GameManager();
    virtual ~GameManager();
    
private:
    void ChangeState(GameState* playerState);
    friend class GameState;
    GameState* m_playerState;
};




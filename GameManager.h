//
//  GameManager.h
//  Zorkish
//
//  Created by Adam Manks on 3/09/2014.
//  Copyright (c) 2014 Adam Manks. All rights reserved.
//

#ifndef __Zorkish__GameManager__
#define __Zorkish__GameManager__
#pragma once
class GameState;

class GameManager
{
public:
    void Render();
    void Update();
    void ProcessInput(char nKey);
    
    GameManager();
    virtual ~GameManager();
    
private:
    void ChangeState(GameState* playerState);
    friend class GameState;
    GameState* m_playerState;
};

#endif /* defined(__Zorkish__GameManager__) */


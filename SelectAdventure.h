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
#include "Menu.h"
#include "Player.h"
#include "MenuMain.h"

class SelectAdventure : public Menu
{
public:
    void Render();
    void Update();
    void ProcessInput(GameManager * playerManager, std::string str);
    void Run();
    
    static SelectAdventure* Instance();
    
    virtual ~SelectAdventure();
    
protected:
    SelectAdventure();
    
private:
    static SelectAdventure m_SelectAdventure;
    std::string name;
    
    
    
};

#endif /* defined(__Zorkish__SelectAdventure__) */

//
//  About.h
//  Zorkish
//
//  Created by Adam Manks on 3/09/2014.
//  Copyright (c) 2014 Adam Manks. All rights reserved.
//

#pragma once
#include <iostream>
#include "Menu.h"


class About : public Menu
{
public:
    void Render();
    void Update();
    void ProcessInput(GameManager * playerManager, std::string str);
    void Run();
    
    static About* Instance();
    
    virtual ~About();
    
protected:
    About();
    
private:
    static About m_About;
    std::string name;
    
};





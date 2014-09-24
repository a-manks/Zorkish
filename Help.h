//
//  Help.h
//  Zorkish
//
//  Created by Adam Manks on 4/09/2014.
//  Copyright (c) 2014 Adam Manks. All rights reserved.
//

#pragma once
#include <iostream>
#include "Menu.h"

class Help : public Menu
{
public:
    void Render();
    void Update();
    void ProcessInput(GameManager * playerManager, std::string str);
    void Run();
    
    static Help* Instance();
    
    virtual ~Help();
    
protected:
    Help();
    
private:
    static Help m_Help;
    std::string name;
    
};



//
//  Help.h
//  Zorkish
//
//  Created by Adam Manks on 4/09/2014.
//  Copyright (c) 2014 Adam Manks. All rights reserved.
//

#ifndef __Zorkish__Help__
#define __Zorkish__Help__
#pragma once
#include <iostream>
#include "Menu.h"

class Help : public Menu
{
public:
    void Render();
    void Update();
    void ProcessInput(GameManager * playerManager, char nKey);
    void Run();
    
    static Help* Instance();
    
    virtual ~Help();
    
protected:
    Help();
    
private:
    static Help m_Help;
    std::string name;
    
};



#endif /* defined(__Zorkish__Help__) */

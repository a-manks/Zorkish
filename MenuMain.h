//
//  MenuMain.h
//  Zorkish
//
//  Created by Adam Manks on 3/09/2014.
//  Copyright (c) 2014 Adam Manks. All rights reserved.
//

#ifndef __Zorkish__MenuMain__
#define __Zorkish__MenuMain__
#pragma once
#include <iostream>
#include "Menu.h"



class MenuMain : public Menu
{
public:
    void Render();
    void Update();
    void ProcessInput(GameManager * playerManager, char nKey);
    void Run();
    static MenuMain* Instance();
    
    virtual ~MenuMain();
    
protected:
    MenuMain();
    
private:
    static MenuMain m_MenuMain;
    std::string name;
    
    
};




#endif /* defined(__Zorkish__MenuMain__) */

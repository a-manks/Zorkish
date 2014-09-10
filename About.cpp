//
//  About.cpp
//  Zorkish
//
//  Created by Adam Manks on 3/09/2014.
//  Copyright (c) 2014 Adam Manks. All rights reserved.
//

#include "About.h"


#include "MenuMain.h"
#include "SelectAdventure.h"

About About::m_About;

About::About()
{
    
}

About::~About()
{
    
}


void About::Render()
{
    
    name = "About";
    
    PrintHeader(name);
    
    std:: cout << "Written by: Adam Manks - 9736271\n" << std:: endl;
    
    std:: cout <<"Press ESC or Enter to return to the Main Menu" << std:: endl;
}

void About::ProcessInput(GameManager * playerManager, std::string str)
{
    char nKey = str[0];
    switch (nKey) {
        case 27:
            ChangeState(playerManager, MenuMain::Instance());
            break;
            
        case 13:
            ChangeState(playerManager, MenuMain::Instance());
        default:
            //std::cout<<"Invalid Input";
            break;
    }
    
}

About* About::Instance()
{
    return(&m_About);
}


void About::Run()
{
    
    
}

void About::Update()
{
    
}

//
//  Help.cpp
//  Zorkish
//
//  Created by Adam Manks on 4/09/2014.
//  Copyright (c) 2014 Adam Manks. All rights reserved.
//

#include "Help.h"
#include "MenuMain.h"

Help Help:: m_Help;

Help::Help()
{
    
}

Help::~Help()
{
    
}


void Help::Render()
{
    name = "Help";
    
    PrintHeader(name);
    
    std:: cout << "The follwing commands are supported:\n" << std:: endl;
    
    std:: cout <<"quit," << std:: endl;
    std:: cout <<"Hiscore (for testing)\n" << std:: endl;
   
    
    std:: cout <<"Press ESC or Enter to return to the Main Menu" << std::endl;
}

void Help::ProcessInput(GameManager * playerManager, char nKey)
{
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

Help* Help::Instance()
{
    return(&m_Help);
}


void Help::Run()
{
    
    
}

void Help::Update()
{
    
}


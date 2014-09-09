//
//  MenuMain.cpp
//  Zorkish
//
//  Created by Adam Manks on 3/09/2014.
//  Copyright (c) 2014 Adam Manks. All rights reserved.
//

#include "MenuMain.h"
#include "SelectAdventure.h"
#include "About.h"
#include "Help.h"
#include "HighScore.h"

MenuMain MenuMain::m_MenuMain;

MenuMain::MenuMain()
{
    
}

MenuMain::~MenuMain()
{
    
}


void MenuMain::Render()
{
    name = "Main Menu";
    
    PrintHeader(name);
    
    std:: cout << "Welcome to Zorkish Adventures \n" << std:: endl;
    
    std:: cout <<"1. Select Adventure and Play" << std:: endl;
    std:: cout <<"2. Hall of Fame" << std:: endl;
    std:: cout <<"3. Help " << std:: endl;
    std:: cout <<"4. About" << std:: endl;
    std:: cout <<"5. Quit " << std:: endl;
    
    std:: cout <<"Select 1-5: ";
}

void MenuMain::ProcessInput(GameManager * playerManager, char nKey)
{
    switch (nKey) {
        case '1':
            ChangeState(playerManager, SelectAdventure::Instance());
            break;
            
        case '2':
            ChangeState(playerManager, HighScore::Instance());
            break;
            
        case '3':
            ChangeState(playerManager, Help::Instance());
            break;
            
        case '4' :
             ChangeState(playerManager, About::Instance());
            break;
        case '5' :
            std::cout<<"GoodBye"<<std::endl;
            break;
        
        default:
            std::cout<<"Invalid Input";
            break;
    }
    
}


MenuMain* MenuMain::Instance()
{
    return(&m_MenuMain);
}


void MenuMain::Run()
{
    
    
}

void MenuMain::Update()
{
    
}


//
//  SelectAdventure.cpp
//  Zorkish
//
//  Created by Adam Manks on 3/09/2014.
//  Copyright (c) 2014 Adam Manks. All rights reserved.
//

#include "SelectAdventure.h"
#include "CommandProcessor.h"


SelectAdventure SelectAdventure::m_SelectAdventure;

SelectAdventure::SelectAdventure()
{
    
}

SelectAdventure::~SelectAdventure()
{
    
}


void SelectAdventure::Render()
{
    name = "Select Adventure";
    
    PrintHeader(name);
    
    std:: cout << "Choose your adventure: \n" << std:: endl;
    
    std:: cout <<"1. Void World" << std:: endl;
    std:: cout <<"2. High Score World/n" << std:: endl;
 
    
    std:: cout <<"Select 1-2: ";
}

void SelectAdventure::ProcessInput(GameManager * playerManager, std::string str)
{
    Player p("p", "d", "c");
    char nKey = str[0];
    switch (nKey) {
        case '1':
        {
            std::string b;
            std:: cout << "A very Boring world indeed" << std:: endl;
            std::getline(std::cin, b);
            CommandProcessor c;
            c.process(b, &p);
            break;
    
        }
        case 27:
            ChangeState(playerManager, MenuMain::Instance());
            break;
        default:
            std::cout<<"Invalid Input"<< std::endl;
            break;
    }
    
}

SelectAdventure* SelectAdventure::Instance()
{
    return(&m_SelectAdventure);
}


void SelectAdventure::Run()
{
    
}

void SelectAdventure::Update()
{
    
}

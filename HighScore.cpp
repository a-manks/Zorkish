//
//  HighScore.cpp
//  Zorkish
//
//  Created by Adam Manks on 4/09/2014.
//  Copyright (c) 2014 Adam Manks. All rights reserved.
//

#include "HighScore.h"
#include "MenuMain.h"
#include <fstream>

HighScore HighScore::m_HighScore;

HighScore::HighScore()
{
    
}

HighScore::~HighScore()
{
    
}


void HighScore::Render()
{
    name = "High Scores";
    
    PrintHeader(name);
    
    std:: cout << "Top 10 Zorkish Adventure Champions \n" << std:: endl;
    
    std::cout << FileReader() <<std::endl;
    
    std:: cout <<"Press Enter or ESC to Return to the Main Menu";
}

void HighScore::ProcessInput(GameManager * playerManager, std::string str)
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

HighScore *HighScore::Instance()
{
    return(&m_HighScore);
}


void HighScore::Run()
{
    
    
}

void HighScore::Update()
{
    
}

std::string HighScore::FileReader()
{
    std::string fileContents;
    std::ifstream file(fileName);
    std::string str;
    if (file.is_open()) {
        while (std::getline(file, str))
        {
            fileContents += str;
            fileContents.push_back('\n');
          
        }

    }
    return fileContents;
    
}
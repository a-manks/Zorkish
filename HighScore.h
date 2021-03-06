//
//  HighScore.h
//  Zorkish
//
//  Created by Adam Manks on 4/09/2014.
//  Copyright (c) 2014 Adam Manks. All rights reserved.
//


#pragma once
#include <iostream>
#include "Menu.h"

class HighScore : public Menu
{
public:
    void Render();
    void Update();
    void ProcessInput(GameManager * playerManager, std::string str);
    void Run();
    std::string FileReader();
    
    static HighScore* Instance();
    
    virtual ~HighScore();
    
protected:
    HighScore();
    
private:
    static HighScore m_HighScore;
    std::string name;
    const std::string fileName = "highscores.txt";
    
};




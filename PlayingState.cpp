//
//  PlayingState.cpp
//  Zorkish
//
//  Created by Adam Manks on 20/09/2014.
//  Copyright (c) 2014 Adam Manks. All rights reserved.
//

#include "PlayingState.h"

PlayingState PlayingState::m_PlayingState;

PlayingState::PlayingState()
{
    g = GameWorld();
}

PlayingState::~PlayingState()
{
    
}

void PlayingState::ProcessInput(GameManager * playerManager, std::string str)
{
    g.processInput(str);
}


PlayingState* PlayingState::instance()
{
    return &m_PlayingState;
}

void PlayingState::Update()
{
    g.update();
}

void PlayingState::Run()
{
    
}

void PlayingState::Render()
{
    g.render();
}
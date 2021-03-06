//
//  GameManager.cpp
//  Zorkish
//
//  Created by Adam Manks on 3/09/2014.
//  Copyright (c) 2014 Adam Manks. All rights reserved.
//

#include "GameManager.h"
#include "GameState.h"

#include <assert.h>
#include "MenuMain.h"


GameManager::GameManager()
{
    m_playerState = NULL;
    
    ChangeState(MenuMain::Instance() );
    
}

GameManager:: ~GameManager()
{
    delete m_playerState;
}

void GameManager::ChangeState(GameState* playerState)
{
    assert(playerState);
    if (playerState != m_playerState)
    {
        m_playerState = playerState;
        m_playerState->Render();
    }
}
void GameManager::ProcessInput(std::string str)
{
    assert(m_playerState);
    m_playerState->ProcessInput(this,str);
}

void GameManager::Update()
{
	assert(m_playerState);
	m_playerState->Update();
}

void GameManager::Render()
{
	assert(m_playerState);
	m_playerState->Render();
}
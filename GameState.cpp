//
//  GameState.cpp
//  Zorkish
//
//  Created by Adam Manks on 3/09/2014.
//  Copyright (c) 2014 Adam Manks. All rights reserved.
//

#include "GameState.h"
#include "GameManager.h"

////////Construction
////////Desturctution

GameState::GameState()
{
    
}

GameState::~GameState()
{
    
}

void GameState::ChangeState(GameManager* playerManager, GameState* playerState)
{
    playerManager->ChangeState(playerState);
}
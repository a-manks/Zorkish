//
//  main.cpp
//  Zorkish
//
//  Created by Adam Manks on 3/09/2014.
//  Copyright (c) 2014 Adam Manks. All rights reserved.
//

#include <iostream>
#include "GameManager.h"

int main(int argc, const char * argv[])
{

  
    GameManager g;
    std::string str;
    while (str!= "5") {
        std::getline(std::cin,str);
        g.Render();
        g.ProcessInput(str);
        g.Update();
        
    }
 
    
    
    
    
    return 0;
}


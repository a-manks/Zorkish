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
    char ch;
    while (ch != '5') {
        std::cin>>ch;
        
        g.ProcessInput(ch);
    }
 
    
    
    
    
    return 0;
}


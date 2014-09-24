//
//  Menu.cpp
//  Zorkish
//
//  Created by Adam Manks on 8/09/2014.
//  Copyright (c) 2014 Adam Manks. All rights reserved.
//

#include "Menu.h"


Menu ::Menu()
{
    
}


void Menu::PrintHeader(std::string name)
{
    std::cout<<"---------------------------------------------------"<< std::endl;
    std::cout<<"                Zorkish :: "<< name << std::endl;
    std::cout<<"___________________________________________________"<< std::endl;
    std::cout<<"---------------------------------------------------"<< std::endl;
    
}

//
//  StringSplit.h
//  Zorkish
//
//  Created by Adam Manks on 9/09/2014.
//  Copyright (c) 2014 Adam Manks. All rights reserved.
//

#ifndef __Zorkish__StringSplit__
#define __Zorkish__StringSplit__
#pragma once
#include <iostream>
#include <vector>
#include <sstream>

class StringSplit
{
public:
    static std::vector<std::string> ssplit(const std::string &s, char delim, std::vector<std::string> &elems);
    static std::vector<std::string> split(const std::string &s, char delim);
    
};

#endif /* defined(__Zorkish__StringSplit__) */

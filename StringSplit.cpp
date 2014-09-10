//
//  StringSplit.cpp
//  Zorkish
//
//  Created by Adam Manks on 9/09/2014.
//  Copyright (c) 2014 Adam Manks. All rights reserved.
//

#include "StringSplit.h"

std::vector<std::string> StringSplit::ssplit(const std::string &s, char delim, std::vector<std::string> &elems)
{
    std::stringstream ss(s);
    std::string item;
    while (std::getline(ss, item, delim)) {
        elems.push_back(item);
    }
    return elems;
}

std::vector<std::string> StringSplit::split(const std::string &s, char delim)
{
    std::vector<std::string> elems;
    ssplit(s, delim, elems);
    return elems;
}
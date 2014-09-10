//
//  CommandProcessor.cpp
//  Zorkish
//
//  Created by Adam Manks on 9/09/2014.
//  Copyright (c) 2014 Adam Manks. All rights reserved.
//

#include "CommandProcessor.h"

CommandProcessor CommandProcessor::m_CommandProcessor;

CommandProcessor::CommandProcessor()
{
     populateCommandDict();
    
}

CommandProcessor* CommandProcessor::instance()
{
    return(&m_CommandProcessor);
}



std::vector<std::string> CommandProcessor::split(std::string str)
{
   return  StringSplit::split(str, ' ');
}

void CommandProcessor::populateCommandDict()
{
    commandDict["look"]=&look;
    commandDict["walk"]=&goCommand;
    //commandDict.insert(std::pair<std::string,Command>("walk", *goCommand));
}

void CommandProcessor::process(std::string commands, Player *p)
{
   
    std::vector<std::string> vstr;
    vstr =split(commands);
    std::string str;
    str= vstr[0];
    it=commandDict.find(str);
    if (it != commandDict.end()) {
        std::cout<<it->second->execute(vstr, p)<<std::endl;
    } else {
        std::cout << "Command Uknown";
    }
    
}
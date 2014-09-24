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
    commandDict["glance"]=Look::instance();
    commandDict["look"]=Look::instance();
    commandDict["walk"]=GoCommand::instance();
    commandDict["go"]=GoCommand::instance();
    commandDict["run"]=GoCommand::instance();
    commandDict["take"]=TakeCommand::instance();
    commandDict["drop"]=DropCommand::instance();
    commandDict["quit"]=QuitCommand::instance();
    commandDict["q"]=QuitCommand::instance();
}

void CommandProcessor::process(std::string& commands, Player *p)
{
    populateCommandDict();
    std::vector<std::string> vstr;
    vstr =split(commands);
    std::string str;
    if (!vstr.empty()) {
        str= vstr[0];
        it=commandDict.find(str);
        if (it != commandDict.end()) {
            std::cout<<it->second->execute(vstr, p)<<std::endl;
           
        } else {
            std::cout << "Sorry I dont know how to do that \n";
        
        }}
            else {
            std::cout << "Sorry I dont know how to do that \n";
            }
    
}
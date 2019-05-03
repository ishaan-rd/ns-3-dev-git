#ifndef AQM_LIST_HELPER_H
#define AQM_LIST_HELPER_H

#include <stdlib.h>
#include <string>
#include <map>
#include <iostream>
#include <fstream>
#include <algorithm>
#include "ns3/core-module.h"
#include <sys/stat.h>

using namespace ns3;

extern std::vector<std::string> AQM;

extern uint32_t nAQM;

void RemoveAqm (std::string aqm)
{
  AQM.erase (std::remove (AQM.begin (), AQM.end (), aqm), AQM.end ());
  nAQM--;	
}

void addAQM (std::string aqm)
{
  AQM.push_back (aqm);
  nAQM++;
}

void displayAQM ()
{
  int x = nAQM;
  for (int i=0; i<x; i++)
    std::cout << AQM[i] << std::endl;
}

#endif
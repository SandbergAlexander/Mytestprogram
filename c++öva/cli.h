#pragma once
#include <cstdlib>

void setup()
{
#ifdef _WIN32
    system("chcp 65001 > nul");
#endif
}


void clean()
{
#ifdef _WIN64
    system("cls");
#endif 
#ifdef defined(__linux__) || defined(__APPLE__)
    system("clear");
#endif 

}
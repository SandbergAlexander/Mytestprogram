 

#include <iostream>
#include "cli.h"
#include <string>

#ifdef _WIN64
//#include <cstdlib>
#include <windows.h>
 

#endif 
 
int main()
{
    setup(); 
    //1. Hälsa på användaren
    std::string namn;  
 
    std::cout << "hej vad heter du!\n";
    std::getline(std::cin, namn);
    std::cout << namn<< "\n";
 

    clean();
    std::cout << "hej vad heter du!\n";

    return 0;

}

 
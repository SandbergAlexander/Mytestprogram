 

#include <iostream>
#include "cli.h"
#include <string>

#ifdef _WIN64
//#include <cstdlib>
#include <windows.h>
 

#endif 
std::string namn;
int age{};

 
int main()

{
 
    //clean();
    setup(); 
BACK:
    std::cout << "=== MENY ===\n";
    std::cout << "1. Hälsa\n";
    std::cout << "2. Visa ålder\n";
    std::cout << "3. Avsluta\n";
    int val = 0;
    std::cin >> val;
    
 
    switch (val)
    {
 
    case 1:
        //1. Hälsa på användaren
         std::cout << "hej vad heter du!\n";
         std::cin.ignore();
        std::getline(std::cin, namn);
        std::cout << namn << "\n";   goto BACK;
 
  
    case 2:
 
         std::cout << "när är du född vilket år!\n";
         std::cin >> age;
         // om det är 2026-1995 
             // Ålder
          // Fråga efter födelseår och räkna ut ungefärlig ålder.
         std::cout << "Du är" << 2026 - age;   goto BACK;
       
    case 3:

        return 0;   
 

    default:   

        std::cout << "skiv fel!\n";
    goto BACK;
     
    }
}

 
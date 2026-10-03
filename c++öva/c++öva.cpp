#include <iostream>
#include "cli.h"
#include <string>
#include <limits>

#ifdef _WIN64
#include <windows.h>
#endif

std::string namn;
int age{};

int main()
{
    setup();

    while (true)
    {
        std::cout << "\n=== MENY ===\n";
        std::cout << "1. vad heter du \n";
        std::cout << "2. Visa ålder\n";
        std::cout << "3. Avsluta\n";

        std::string val;
        std::cin >> val;
        if (val == "1")
        {
            std::cout << "Hej, vad heter du?\n";

            std::cin.ignore();
            std::getline(std::cin, namn);

            std::cout << "Hej " << namn << "!\n";
        }
        else if (val == "2")
        {
            std::cout << "När är du född? Vilket år?\n";
            std::cin >> age;
        }
        else if (val == "3")
        {
            return 0;
        }
 
 
    }
}
 

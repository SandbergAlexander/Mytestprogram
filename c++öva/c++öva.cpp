 

#include <iostream>
#include <string>
int main()
{
    //1. Hälsa på användaren
    std::string namn;
    std::cout << "hej vad heter du!\n";
    std::getline(std::cin, namn);
    std::cout << namn<< "\n";
    return 0;

}

 
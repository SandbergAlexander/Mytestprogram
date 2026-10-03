 

#include <iostream>

int main()
{
    std::cout << "Skriv ut en variabels adress!\n";
    int x = 10;
    int *p = &x;
    std::cout << "Värdet på x: " << x << "\n";
    std::cout << "Adressen till x: " << &x << "\n";
    std::cout << "Värdet som p pekar på: " << *p << "\n";
}

 
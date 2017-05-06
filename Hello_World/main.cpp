#include <iostream>
#include "Hello_World.h"
#include <iostream>
#include <string>

int main(int argc, char* argv[])
{
    Hello_World hw;
    std::cout << "Hello World!" << std::endl;
    std::cout << "This is so fun!" << std::endl;

    std::string message = "This is a message";
    hw.print_me(message);

    std::cout << "Enter a number: ";
    int i;
    std::cin >> i;
    i = i * 5;
    std::cout << "This is your number times 5: " << i << std::endl;
}

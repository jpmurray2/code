#include "Hello_World.h"
#include <iostream>
#include <string>

Hello_World::Hello_World()
{
    //ctor
}

Hello_World::~Hello_World()
{
    //dtor
}

void Hello_World::print_me(std::string message)
{
    std::cout << message <<std::endl;
}

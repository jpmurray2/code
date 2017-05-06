#ifndef HELLO_WORLD_H
#define HELLO_WORLD_H
#include <iostream>
#include <string>

class Hello_World
{
    public:
        Hello_World();
        virtual ~Hello_World();
        void print_me(std::string message);
    protected:
    private:
};

#endif // HELLO_WORLD_H

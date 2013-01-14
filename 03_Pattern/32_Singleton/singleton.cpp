#include "singleton.h"
#include <iostream>

Singleton& Singleton::getInstance()
{
    static Singleton instance;
    return instance;
}
Singleton::Singleton()
{
    std::cout << "Singleton constructed" << std::endl;
}

Singleton::~Singleton()
{
    std::cout << "Singleton destructed" << std::endl;
}

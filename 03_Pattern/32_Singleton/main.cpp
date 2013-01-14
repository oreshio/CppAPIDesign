#include <iostream>
#include "singleton.h"
using namespace std;

int main()
{
    Singleton& obj = Singleton::getInstance();
    return 0;
}


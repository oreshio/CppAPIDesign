#ifndef AUTOTIMER_H
#define AUTOTIMER_H

#include <string>

class AutoTimer
{
public:
    explicit AutoTimer(const std::string& aName);
    ~AutoTimer();

private:
    class Impl;
    Impl* mImpl_;
};

#endif // AUTOTIMER_H

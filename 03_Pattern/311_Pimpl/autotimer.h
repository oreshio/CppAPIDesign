#ifndef AUTOTIMER_H
#define AUTOTIMER_H

#include <string>

class AutoTimer
{
public:
    explicit AutoTimer(const std::string& aName);
    ~AutoTimer();

private:
    AutoTimer(const AutoTimer&);
    const AutoTimer& operator=(const AutoTimer&);

    class Impl;  // ŽÀ‘•‚ðImplƒNƒ‰ƒX‚É‰B•Á
    Impl* mImpl_;
};

#endif // AUTOTIMER_H

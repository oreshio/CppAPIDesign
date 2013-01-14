#include "autotimer.h"
#include <iostream>
#include <windows.h>

class AutoTimer::Impl
{
public:
    double GetElapsed() const
    {
        return (GetTickCount() -mStartTime_) /*/ le3*/;
    }
    std::string mName_;
    DWORD mStartTime_;
};

AutoTimer::AutoTimer(const std::string& aName)
    : mImpl_(new AutoTimer::Impl())
{
    mImpl_->mName_ = aName;
    mImpl_->mStartTime_ = GetTickCount();
}

AutoTimer::~AutoTimer()
{
    std::cout << mImpl_->mName_ << ": tool " << mImpl_->GetElapsed() << " secs" << std::endl;
    delete mImpl_;
    mImpl_ = NULL;
}

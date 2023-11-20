#include <iostream>
#include <string>
#include <functional>
#include <vector>
#include <cstdio>
#include <chrono>
#include <memory>

using namespace std;

class Timer
{
public:
    using CallbackType = std::function<void()>;
    using Timestamp = chrono::system_clock::time_point;
    using DurationType = chrono::system_clock::duration;

    void StartTimer(shared_ptr<CallbackType> callback, DurationType countdownTime)
    {
        callback_ = callback;
        countdownStartTimestamp_ = chrono::system_clock::now();
        countdownEndTimestamp_ = countdownStartTimestamp_ + countdownTime;
    }

    bool Update()
    {
        if (std::chrono::system_clock::now() > countdownEndTimestamp_)
        {
            (*callback_.get())();
            callback_.reset();
            return true;
        }
        return false;
    }
private:
    shared_ptr<CallbackType> callback_;
    Timestamp countdownEndTimestamp_;

};

int main()
{
    auto callback = make_shared<Timer::CallbackType>([] {cout << "hi" << endl;});

    Timer timer;
    timer.StartTimer(callback, 5s);
    while (!timer.Update())
        ;
    cout << "done" << endl;

    return 0;

}
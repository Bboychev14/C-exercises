#include "SharedPtrInt.h"

SharedPtrInt::SharedPtrInt(int value)
{
    ptr_ = new int(value);
    count_ = new int(1);
}

SharedPtrInt::SharedPtrInt(const SharedPtrInt& other)
{
    ptr_ = other.ptr_;
    count_ = other.count_;
    ++(*count_);
}

SharedPtrInt::~SharedPtrInt()
{
    (*count_)--;
    if (*count_ == 0)
    {
        delete ptr_;
        delete count_;
    }
}

int& SharedPtrInt::operator*() const
{
    return *ptr_;
}

SharedPtrInt& SharedPtrInt::operator=(const SharedPtrInt& other)
{
    ptr_ = other.ptr_;
    count_ = other.count_;
    ++(count_);
    return *this;
}

int SharedPtrInt::GetReffCount()
{
    return *count_;
}
#pragma once

template<typename T>
class SharedPtr
{
public:
    SharedPtr(T value)
    {
        ptr_ = new T(value);
        count_ = new int(1);
    }
    SharedPtr(const SharedPtr& other)
    {
        ptr_ = other.ptr_;
        count_ = other.count_;
        ++(*count_);
    }
    ~SharedPtr()
    {
        (*count_)--;
        if (*count_ == 0)
        {
            delete ptr_;
            delete count_;
        }
    }
    T operator*() const
    {
        return *ptr_;
    }
    SharedPtr<T> operator=(const SharedPtr &other)
    {
        ptr_ = other.ptr_;
        count_ = other.count_;
        ++(count_);
        return *this;
    }
    int GetReffCount()
    {
        return *count_;
    }

private:
    T* ptr_;
    int* count_;
};
#include <iostream>
#include <string>

class UniquePtr
{
public:
    UniquePtr(int* p = nullptr) : ptr(p) {}
    ~UniquePtr() { delete[] ptr; }
    UniquePtr(const UniquePtr& other) = delete;
    void operator=(const UniquePtr& other) = delete;
    UniquePtr(UniquePtr&& other) : ptr(other.ptr) {other.ptr = nullptr;}
    UniquePtr& operator=(UniquePtr&& other) noexcept
    {
        if (this != &other)
        {
            delete ptr;
            ptr = other.ptr;
            other.ptr = nullptr;
        }
        return *this;
    }
    int& operator*() { return *ptr; }
    const int& operator*() const { return *ptr; }
    int* operator->() const { return ptr; }
    explicit operator bool() const { return (ptr != nullptr); }

private:
    int* ptr;
};
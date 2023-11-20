#include <iostream>
#include <string>
#include <vector>

template<typename T>
class UniquePtr
{
public:
    UniquePtr(T* p = nullptr) : ptr(p) {}
    ~UniquePtr() { delete[] ptr; }
    UniquePtr(const UniquePtr& other) = delete;
    UniquePtr& operator=(const UniquePtr& other) = delete;
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
    T& operator*() { return *ptr; }
    const T& operator*() const { return *ptr; }
    T* operator->() const { return ptr; }
    explicit operator bool() const { return (ptr != nullptr); }

private:
    T* ptr;
};

int main()
{
    UniquePtr<int> ptr1(new int(14));
    UniquePtr<double> ptr2(new double(7.2));
    UniquePtr<char> ptr3(new char('R'));

    std::cout << *ptr1 << std::endl;
    std::cout << *ptr2 << std::endl;
    std::cout << *ptr3 << std::endl;
}
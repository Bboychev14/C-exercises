#include "vec.h"
#include <iostream>
#include <string>

template<typename T>
void PrintVector(const Vec<T>& vec)
{
    for (size_t i = 0; i < vec.Size(); ++i)
    {
        std::cout << vec[i] << std::endl;
    }
    std::cout << "-----------\n";
}

int main()
{
    Vec<std::string> v;
    Vec<int> v2(14, 5);
    Vec<int> v3(v2);
    v.PushBack("bobec");
    v.PushBack("bo");
    v.PushBack("rache");
    v.PushBack("rache");
    v.PushBack("rache");
    std::cout << v.At(1) << std::endl;
    PrintVector(v3);

}
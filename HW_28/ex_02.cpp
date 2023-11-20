#include <iostream>
#include <string>

template <typename T = float>
struct Unknown
{
    static void getInfo()
    {
        std::cout << "Unknown!" << std::endl;
    }
};

template <>
struct Unknown<int>
{
    void getInfo()
    {
        std::cout << "INT" << std::endl;
    }
};

template<>
struct Unknown<std::string>
{
    void getInfo()
    {
        std::cout << "STRING" << std::endl;
    }
};

int main()
{
    Unknown cf;
    cf.getInfo();
    Unknown<int> c1;
    c1.getInfo();
    Unknown<std::string> c2;
    c2.getInfo();
}
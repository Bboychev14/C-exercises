#include <iostream>

int a = 0;

int main()
{
    int a = 1;

    std::cout << "Local variable: " << a << std::endl;
    std::cout << "Global variable: " << ::a;

    return 0;
}
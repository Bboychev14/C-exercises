#include <iostream>

int numberOfZeros(unsigned int num);

int main()
{
    std::cout << numberOfZeros(16);
    return 0;
}

int numberOfZeros(unsigned int num)
{
    int counter = 0;
    while ((num & 1) == 0 && num != 0)
    {
        num >>= 1;
        counter ++;
    }
    return counter;
}
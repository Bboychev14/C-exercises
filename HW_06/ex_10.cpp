#include <iostream>

int numberOfOnes(unsigned int num);

int main()
{
    std::cout << numberOfOnes(146);

    return 0;
}

int numberOfOnes(unsigned int num)
{
    int counter = 0;
    unsigned int mask = 1;
    while (mask != 0)
    {
        if (num & mask)
        {
            counter++;
        }
        mask <<=1;
    }
    return counter % 2 == 0;
}
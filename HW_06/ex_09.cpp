#include <iostream>

int numberOfOnes(int num);

int main()
{
    std::cout << numberOfOnes(23);

    return 0;
}

int numberOfOnes(int num)
{
    int counter = 0;
    unsigned int mask = 1;
    while (mask != 0)
    {
        if ((num & mask) != 0)
        {
            counter++;
        }
        mask <<=1;
    }
    return counter;
}
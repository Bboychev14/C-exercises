#include <iostream>

int onesInARow(unsigned int number);

int main()
{
    std::cout << onesInARow(19);
    return 0;
}

int onesInARow(unsigned int number)
{
    int counter = 0;
    int max = 0;
    while (number != 0)
    {
        if((number & 1) == 1)
        {
            counter++;
            if (counter > max)
            {
                max = counter;
            }
        }
        else
        {
            counter = 0;
        }
        number >>= 1;
    }
    return max;

}
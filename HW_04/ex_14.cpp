#include <iostream>
#include "ex_13.cpp"
#include "ex_12.cpp"

float restrict(float num1, float min, float max)
{
    if(num1 < smaller(min, max))
    {
        return min;
    }
    else if(num1 > bigger(min, max))
    {
        return max;
    }
    return num1;
}

/* This function uses the functions from the last two exercises
to put a range to the number it receives. */

/* int main()
{
    float x = 0;
    float y = 0;
    float z = 0;
    cout << "Enter number, min and max values: ";
    cin >> x >> y >> z;
    cout << "The result is: " << restrict(x, y, z);

    return 0;
} */
#include <iostream>

using namespace std;

int ceilDouble(double num)
{
    int tempNum = static_cast<int>(num);
    if(num == tempNum)
    {
        return num;
    }
    else if(num < 0)
    {
        return tempNum;
    }
    else
    {
        return ++tempNum;
    }
}

/* This function returns the rounded up value of the argument it receives */

/* int main()
{
    double a = 0.0;
    cout << "Enter a number: ";
    cin >> a;
    cout << "You'r number is rounded up to: " << ceilDouble(a);

    return 0;
} */
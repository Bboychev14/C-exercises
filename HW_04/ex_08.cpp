#include <iostream>

using namespace std;

int floorDouble(double num)
{
    int tempNum = static_cast<int>(num);
    if(num == tempNum)
    {
        return num;
    }
    else if(num < 0)
    {
        return --tempNum;
    }
    else
    {
        return tempNum;
    }
}

/* This function returns the rounded down value of the argument it receives */

/* int main()
{
    double a = 0.0;
    cout << "Enter a number: ";
    cin >> a;
    cout << "You'r number is rounded down to: " << floorDouble(a);

    return 0;
} */
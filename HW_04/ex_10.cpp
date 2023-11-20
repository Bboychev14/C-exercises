#include <iostream>

using namespace std;

int powerNumber(int num, int power)
{
    int tempNum = num;
    for(int i = 0; i < power - 1; i++)
    {
        num *= tempNum;
    }
    return num;
}

/* This function returns the number on a given power. */

/* int main()
{
    int a = 0;
    int b = 0;
    cout << "Enter a number and it's power: ";
    cin >> a >> b;
    cout << "number " << a << " on power " << b << " equals: " << powerNumber(a, b);

    return 0;
} */
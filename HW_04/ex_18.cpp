#include <iostream>

using namespace std;

double factorial(int num)
{
    double result = 1.0;
    for(int i = num; i > 1; i--)
    {
        result *= i;
    }
    return result;
}

/* This function returns the factorial of a given number. */

/* int main()
{
    int number = 0;
    cout << "Enter a number: ";
    cin >> number;
    cout << factorial(number);

    return 0;

} */
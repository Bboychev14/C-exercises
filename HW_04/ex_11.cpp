#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int num)
{
    int border = sqrt(num);
    if(num <= 1)
    {
        return false;
    }
    for(int i = 2; i <= border; i++)
    {
        if(num % i == 0)
        {
            return false;
        }
    }
    return true;
}

/* This function receives a number and returns true as result if the number is prime
and false if it's not. */

/* int main()
{
    int a = 0;
    cout << "Enter a number: ";
    cin >> a;
    if(isPrime(a))
    {
        cout << "The number is prime.";
    }
    else
    {
        cout << "The number is not prime.";
    }

    return 0;
} */
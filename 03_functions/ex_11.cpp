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

int main()
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
}
#include <iostream>

using namespace std;

bool IsLucky(int number);

int main()
{
    unsigned int num = 0;
    cout << "Enter a number: ";
    cin >> num;

    // Should use while loop until we print as many numbers as wanted.
    for (int i = 7; i <= num; ++i)
    {
        if (IsLucky(i))
        {
            cout << i << endl;
        }
    }
}

bool IsLucky(int number)
{
    int sum = 0;
    while (number > 0)
    {
        sum += number % 10;
        number /= 10;
    }
    if (sum == 7)
    {
        return true;
    }
    return false;
}
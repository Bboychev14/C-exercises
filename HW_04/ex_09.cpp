#include <iostream>

using namespace std;

int roundNum(double num) {
    int tempNum = static_cast<int>(num);
    if(num < 0)
    {
        if(abs(num - tempNum) >= 0.5)
        {
            return --tempNum;
        }
        else
        {
            return tempNum;
        }
    }
    else if(num - tempNum >= 0.5) {
        return ++tempNum;
    } else {
        return tempNum;
    }
}

/* This function rounds the numbers it receives */

/* int main()
{
    double a = 0.0;
    cout << "Enter a number: ";
    cin >> a;
    cout << "You'r rounded number is: " << roundNum(a);

    return 0;
} */
#include <iostream>

using namespace std;

double absoluteValue(double& num)
{
    if(num < 0)
    {
        return num * -1;
    }
    else return num;
}

/* The function receives a number and returns it's absolute value! */

/* int main()
{
    double a = 0.0;
    cout << "Enter a number: ";
    cin >> a;
    cout << "It's absolute value is: " << absoluteValue(a);

    return 0;
} */
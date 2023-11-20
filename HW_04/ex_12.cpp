#include <iostream>

using namespace std;

float smaller(float num1, float num2)
{
    if(num1 < num2)
    {
        return num1;
    }
    return num2;
}

/* This function receives two numbers and returns the smaller one. */

/* int main()
{
    float a = 0.0f;
    float b = 0.0f;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << smaller(a, b) << " Is the smaller number.";

    return 0;
} */
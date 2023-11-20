#include <iostream>

using namespace std;

float bigger(float num1, float num2)
{
    if(num1 > num2)
    {
        return num1;
    }
    return num2;
}

/* This function receives two numbers and returns the bigger one. */

/* int main()
{
    float a = 0.0f;
    float b = 0.0f;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << bigger(a, b) << " Is the bigger number.";

    return 0;
} */
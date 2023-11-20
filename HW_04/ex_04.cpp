#include <iostream>

using namespace std;

float compare(float& num1, float& num2)
{
    if(num1 < num2)
    {
        return num1;
    }
    else
    {
        return num2;
    }

}

/* The result of this function is the smaller number.
If the numbers are equal it returns the second number. */

/* int main()
{
    float a = 0.0f;
    float b = 0.0f;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << compare(a, b);

    return 0;
} */
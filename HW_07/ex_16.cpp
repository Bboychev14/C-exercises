#include <iostream>
#include <stdexcept>

using namespace std;

int divide(int num1, int num2);

int main()
{
    int num1 = 3;
    int num2 = -1;
    try
    {
        cout << divide(num1, num2);
    }
    catch (const invalid_argument& error)
    {
        cout << "Exception: " << error.what();
    }
    return 0;
}

int divide(int num1, int num2)
{
    if (num2 == 0)
    {
        throw invalid_argument("Division by zero!");
    }
    if ((num1 < 0 && num2 > 0) || (num1 > 0 && num2 < 0))
    {
        throw invalid_argument("Arguments with different signs");
    }
    return num1 / num2;
}
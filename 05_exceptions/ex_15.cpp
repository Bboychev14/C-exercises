#include <iostream>

using namespace std;

enum class DivisionError
{
    DivisionByZero
};

int divide(int num1, int num2);

int main()
{
    int num1 = 3;
    int num2 = 0;
    try
    {
        cout << divide(num1, num2);
    }
    catch (const DivisionError& error)
    {
        if (error == DivisionError::DivisionByZero)
        {
            cout << "Division by zero is not allowed!";
        }
    }

    return 0;
    
}

int divide(int num1, int num2)
{
    if (num2 == 0)
    {
        throw DivisionError::DivisionByZero;
    }
    return num1 / num2;
}
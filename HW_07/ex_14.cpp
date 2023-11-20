#include <iostream>
#include <exception>

using namespace std;

int divide(int num1, int num2);

int main()
{
    int num1 = 4;
    int num2 = 0;
    try
    {
        cout << divide(num1, num2);
    }
    catch (exception& ex)
    {
        cout << "Exeption: " << ex.what();
    }
    return 0;
}

int divide(int num1, int num2)
{
    if (num2 == 0)
    {
        throw exception();
    }
    return num1 / num2;
}
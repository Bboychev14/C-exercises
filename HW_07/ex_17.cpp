#include <iostream>
#include <stdexcept>

using namespace std;

int divide (int divident, int divisor);

void PerformDivision();

int main()
{
    try
    {
        PerformDivision();
    }
    catch (const exception& e)
    {
        cout << "Error: " << e.what() << endl;
    }

    return 0;
}

void PerformDivision()
{
    int divident, divisor;
    while (cin >> divident >> divisor)
    {
        try
        {
            int result = divide(divident, divisor);
            cout << "Result: " << result << endl;
        }
        catch (const invalid_argument& e)
        {
            cout << "Invalid argument: " << e.what() << endl;
            throw;
        }
        catch (const exception& e)
        {
            cout << "Exception: " << e.what() << endl;
            throw;
        }
        
    }
}

int divide (int divident, int divisor)
{
    if ((divident > 0 && divisor < 0) || (divident < 0 && divisor > 0))
    {
        throw invalid_argument("Exception: Arguments have different signs.");
    }
    if (divisor == 0)
    {
        throw invalid_argument("Exception: Division by zero is not allowed.");
    }
    return divident / divisor;
}
#include <iostream>
#include <string>
#include <sstream>
#include <stdexcept>

using namespace std;

int main()
{
    while (true)
    {
        cout << "Enter an expression: ";
        string input;
        if (!getline(cin, input) || input == "q")
        {
            break;
        }
        istringstream iss(input);
        int num1 = 0, num2 = 0;
        char operation = ' ';
        iss >> num1 >> operation >> num2;

        try
        {
            if (iss.fail())
            {
                throw invalid_argument("Invalid input!");
            }
            int result = 0;
            if (operation == '+')
            {
                result = num1 + num2;
            }
            else if (operation == '-')
            {
                result = num1 - num2;
            }
            else if (operation == '*')
            {
                result = num1 * num2;
            }
            else if (operation == '/')
            {
                if (num2 == 0)
                {
                    throw runtime_error("Division by zero");
                }
                result = num1 / num2;
            }
            else
            {
                throw invalid_argument("Invalid operator!");
            }
            cout << "Result: " << result << endl;
        }
        catch (const exception& e)
        {
            cout << "Error: " << e.what() << endl;
            continue;
        }
    }
    return 0;
}
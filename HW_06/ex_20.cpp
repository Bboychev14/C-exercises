#include <iostream>
#include <string>
#include <bitset>
#include <sstream>

using namespace std;

int main()
{
    while (true)
    {
        cout << "Enter and expression: q-toquit!" << endl;
        string input;
        if (getline(cin, input) || input == "q")
        {
            break;
        }
        istringstream iss(input);
        string operand1, operatorSymbol, operand2;
        iss >> operand1 >> operatorSymbol >> operand2;
        int num1 = 0, num2 = 0;
        // Saw the if statements in the internet.
        if (operand1.substr(0, 2) != "0b")
        {
            num1 = stoi(operand1);
        }
        else
        {
            bitset<32> bits(operand1.substr(2));
            num1 = bits.to_ulong();
        }

        if (operand2.substr(0, 2) != "0b")
        {
            num2 = stoi(operand2);
        }
        else
        {
            bitset<32> bits(operand2.substr(2));
            num2 = bits.to_ulong();
        }

        int result = 0;

        if (operatorSymbol == "+")
        {
            result = num1 + num2;
        }
        else if (operatorSymbol == "-")
        {
            result = num1 - num2;
        }
        else if (operatorSymbol == "*")
        {
            result = num1 * num2;
        }
        else if (operatorSymbol == "/")
        {
            result = num1 / num2;
        }
        else if (operatorSymbol == "%")
        {
            result = num1 & num2;
        }
        else if (operatorSymbol == "&")
        {
            result = num1 & num2;
        }
        else if (operatorSymbol == "|")
        {
            result = num1 | num2;
        }
        else if (operatorSymbol == "^")
        {
            result = num1 ^ num2;
        }
        else
        {
            cout << "Invalid operator!" << endl;
            continue;
        }
        cout << "Result: " << result << endl;
    }
    
    return 0;

}
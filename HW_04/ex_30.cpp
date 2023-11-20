#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
#include <bitset>

using namespace std;

int main()
{
    string numStr1, numStr2;
    string operation;

    cout << "Enter first number: ";
    cin >> numStr1;
    cout << "Enter operation: ";
    cin >> operation;
    cout << "Enter second number: ";
    cin >> numStr2;

    int num1, num2;

    // Should make functions for these convertions.
    if (numStr1.substr(0, 2) == "0b")
    {
        num1 = stoi(numStr1.substr(2), nullptr, 2);
    }
    else if (numStr1.substr(0, 2) == "0o")
    {
        num1 = stoi(numStr1.substr(2), nullptr, 8);
    }
    else if (numStr1.substr(0, 2) == "0x")
    {
        num1 = stoi(numStr1.substr(2), nullptr, 16);
    }
    else
    {
        num1 = stoi(numStr1);
    }

    if (numStr2.substr(0, 2) == "0b")
    {
        num1 = stoi(numStr2.substr(2), nullptr, 2);
    }
    else if (numStr2.substr(0, 2) == "0o")
    {
        num1 = stoi(numStr2.substr(2), nullptr, 8);
    }
    else if (numStr2.substr(0, 2) == "0x")
    {
        num1 = stoi(numStr2.substr(2), nullptr, 16);
    }
    else
    {
        num1 = stoi(numStr2);
    }

    int result = 0;
    if (operation == "+")
    {
        result = num1 + num2;
    }
    else if (operation == "-")
    {
        result = num1 - num2;
    }
    else if (operation == "*")
    {
        result = num1 * num2;
    }
    else if (operation == "/")
    {
        if (num2 == 0)
        {
            cout << "Devision by zero!!!" << endl;
        }
        else
        {
            result = num1 / num2;
        }
    }
    else
    {
        cout << "Invalid input!" << endl;
    }

    // Got this part from the internet.
    stringstream binStream, octStream, hexStream;
    binStream << bitset<32>(result);
    octStream << oct << result;
    hexStream << hex << uppercase << result;

    cout << "Result (binary): 0b" << binStream.str() << endl;
    cout << "Result (octal): 0o" << octStream.str() << endl;
    cout << "Result (hexadecimal): 0x" << hexStream.str() << endl;

    
    return 0;

}
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    string input;
    cout << "Enter an integer literal: ";
    cin >> input;
    int base = 10;
    size_t start = 0;

    if (input.size() >= 2 && input[0] == '0')
    {
        if (input[1] == 'b' || input [1] == 'B')
        {
            base = 2;
            start = 2;
        }
        else if (input[1] == 'o' || input[1] == 'O')
        {
            base = 8;
            start = 2;
        }
        else if (input[1] == 'x' || input[1] == 'X')
        {
            base = 16;
            start = 2;   
        }
        else
        {
            base = 8;
            start = 1;
        }
    }
    unsigned long long decimal = 0;
    for (size_t i = start; i < input.size(); ++i)
    {
        decimal *= base;
        decimal += input[i] - '0';
    }
    cout << "Decimal value: " << decimal << endl;

    return 0;

}
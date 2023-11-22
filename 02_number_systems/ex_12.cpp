#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    string hexadecimal;
    cout << "Enter hexadecimal number: ";
    cin >> hexadecimal;
    size_t sum = 0;

    for (int i = 0; i < size(hexadecimal); i++)
    {
        char digit = hexadecimal[size(hexadecimal) - (i + 1)];
        if (digit < 58 && digit > 47)
        {
            sum += int(digit - '0' * pow(16,i));
        }
        else if (digit < 71 && digit > 64)
        {
            sum += int(digit - 55) * pow(16, i);
        }
        else
        {
            throw invalid_argument("Invalid hexadecimal!");
            break;
        }
    }
    cout << sum;

    return 0;
}
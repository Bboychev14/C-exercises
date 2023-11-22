#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string ToBinary(int number);

string ToOctal(int number);

string ToHexadecimal(int number);

bool IsPrime(int number);

bool IsPalindrome(int number);

void PrintNumberInfo(int number);

int main()
{
    PrintNumberInfo(12);
}

void PrintNumberInfo(int number)
{
    cout << "Decimal: " << number << endl;
    cout << "Binary: " << ToBinary(number) << endl;
    cout << "Hex: " << ToHexadecimal(number) << endl;
    cout << "Octal: " << ToOctal(number) << endl;
    cout << "Even/Odd: " << (number % 2 == 0 ? "Even" : "Odd") << endl;
    cout << "Prime: " << (IsPrime(number) ? "Yes" : "No") << endl;
    cout << "Number of digits: " << to_string(number).length() << endl;
    string reversed = to_string(number);
    reverse(reversed.begin(), reversed.end());
    int reversedNum = stoi(reversed);
    cout << "Reversed number: " << reversedNum << endl;
    cout << "Is Palindrome: " << (IsPalindrome(number) ? "Yes" : "No") << endl;
}

bool IsPalindrome(int number)
{
    string str = to_string(number);
    int i = 0;
    int j = str.length() - 1;
    while (i < j)
    {
        if (str[i] != str[j])
        {
            return false;
        }
        ++i;
        --j;
    }
    return true;
}

bool IsPrime(int number)
{
    if (number <= 1)
    {
        return false;
    }
    for (int i = 2; i * i <= number; ++i)
    {
        if (number % i == 0)
        {
            return false;
        }
    }
    return true;
}

string ToHexadecimal(int number)
{
    string hexadecimal;

    while (number > 0)
    {
        int remainder = number % 16;
        if (remainder < 10)
        {
            hexadecimal += '0' + remainder;
        }
        else
        {
            hexadecimal += 'A' + remainder - 10;
        }
        number /= 16;
    }
    reverse(hexadecimal.begin(), hexadecimal.end());
    return hexadecimal;
}

string ToOctal(int number)
{
    string octal;

    while (number > 0)
    {
        octal += to_string(number % 8);
        number /= 8;
    }
    reverse(octal.begin(), octal.end());
    return octal;
}

string ToBinary(int number)
{
    string binary;

    while (number > 0)
    {
        binary += to_string(number % 2);
        number /= 2;
    }
    reverse(binary.begin(), binary.end());
    return binary;
}
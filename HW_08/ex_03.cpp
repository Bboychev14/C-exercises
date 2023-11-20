#include <iostream>
#include <string>

using namespace std;

string ReverseString(string& str);

int main()
{
    string input = "qwert";
    cout << ReverseString(input);
    return 0;
}

string ReverseString(string& str)
{
    string reversedString;
    string::const_iterator iter = str.end();
    while (iter != str.begin())
    {
        --iter;
        reversedString += *iter;
    }
    return reversedString;
}
#include <iostream>
#include <string>

using namespace std;

string LongestUniqueSubstring(const string& str);

int main()
{
    string str = "asdfhhasdbgji";
    cout << LongestUniqueSubstring(str);
    return 0;
}

string LongestUniqueSubstring(const string& str)
{
    string tempString;
    string longestString;
    for (int i = 0; i < str.length(); ++i)
    {
        if (tempString.find(str[i]) != string::npos)
        {
            if (longestString.length() < tempString.length())
            {
                longestString = tempString;
            }
            tempString = "";
        }
        else
        {
            tempString += str[i];
        }
    }
    if (longestString.length() < tempString.length())
    {
        longestString = tempString;
    }
    return longestString;
}
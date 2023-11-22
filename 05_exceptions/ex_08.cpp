#include <iostream>
#include <string>

using namespace std;

bool IsAnagram(const string& str1, const string& str2);

int main()
{
    string str1 = "asdf";
    string str2 = "safd";
    cout << IsAnagram(str1, str2);

    return 0;
}

bool IsAnagram(const string& str1, const string& str2)
{
    string tempString = str1;
    if (str1.length() != str2.length())
    {
        return false;
    }
    for (int i = 0; i < str1.length(); ++i)
    {
        if (str2.find(str1[i]) != string::npos)
        {
            tempString.erase(0, 1);
        }
    }
    if (tempString.length() > 0)
    {
        return false;
    }
    return true;
}
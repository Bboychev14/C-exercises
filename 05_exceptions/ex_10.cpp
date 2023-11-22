#include <iostream>
#include <string>

using namespace std;

string FindLongestPalindromeSubstring(const string& str);

bool IsPalindrome(const string& substring);

int main()
{
    string str = "wasddsaq";
    cout << FindLongestPalindromeSubstring(str);
    
    return 0;
    
}

string FindLongestPalindromeSubstring(const string& str)
{
    string currSubstring;
    string longestSubstring;
    for (int i = 0; i < str.length(); ++i)
    {
        for (int j = 1; j < str.length() - i; ++j)
        {
            //i is the index we start from and j is the length of the substring we want.//
            currSubstring = str.substr(i, j);
            if (IsPalindrome(currSubstring) && currSubstring.length() > longestSubstring.length())
            {
                longestSubstring = currSubstring;
            }
        }
    }
    return longestSubstring;
}

bool IsPalindrome(const string& substring)
{
    int len = substring.length();
    for (int i = 0; i < len / 2; ++i)
    {
        if (substring[i] != substring[len - i - 1])
        {
            return false;
        }
    }
    return true;
}
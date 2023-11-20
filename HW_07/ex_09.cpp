#include <iostream>
#include <string>

using namespace std;

string FindLongestCommonSubstring(const string& str1, const string& str2);

int main()
{
    string str1 = "asdfgh";
    string str2 = "wsdfgqwe";
    cout << FindLongestCommonSubstring(str1, str2);

    return 0;

}

string FindLongestCommonSubstring(const string& str1, const string& str2)
{
    string currentSubstring;
    string longestSubstring;
    for (int i = 0; i < str1.length(); ++i)
    {
        for (int j = 1; j < str1.length() - i; ++j)
        {
            //i is the index we start from and j is the length of the substring we want.//
            currentSubstring = str1.substr(i, j);
            if (str2.find(currentSubstring) != string::npos)
            {
                if (currentSubstring.length() > longestSubstring.length())
                {
                    longestSubstring = currentSubstring;
                }
            }
            else
            {
                break;
            }
        }
    }
    return longestSubstring;
}
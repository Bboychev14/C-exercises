#include <iostream>
#include <string>

using namespace std;

bool IsPalindrome(const string& str);

int main()
{
    string input = "asdfdsa";
    cout << IsPalindrome(input);
    return 0;
}

bool IsPalindrome(const string& str)
{
    string::const_iterator leftIter = str.begin();
    string::const_iterator rightIter = str.end() - 1;
    for (int i = 0; i < str.length() / 2; ++i)
    {
        if (*leftIter != *rightIter)
        {
            return false;
        }
        ++leftIter;
        --rightIter;
    }
    return true;

}
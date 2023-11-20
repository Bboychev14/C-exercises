#include <iostream>

using namespace std;

int CompareStrings(const char* str1, const char* str2);

int main()
{
    char input1[10] = {"abdfasd"};
    char input2[10] = {"aadfasd"};
    cout << CompareStrings(input1, input2);
    return 0;
}

int CompareStrings(const char* str1, const char* str2)
{
    while (*str1 && *str2)
    {
        if (*str1 == *str2)
        {
            str1++;
            str2++;
            continue;
        }
        if (*str1 > *str2)
        {
            return 1;
        }
        else if (*str1 < *str2)
        {
            return -1;
        }
        str1++;
        str2++;
    }
    return 0;
}
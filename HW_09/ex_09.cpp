#include <iostream>

using namespace std;

int CompareStrings(const char* str1, const char* str2, size_t count);

int main()
{
    size_t count = 4;
    char input1[10] = {"asafa"};
    char input2[10] = {"asafz"};
    cout << CompareStrings(input1, input2, count);
    return 0;
}

int CompareStrings(const char* str1, const char* str2, size_t count)
{
    while (*str1 && *str2 && (count > 0))
    {
        if (*str1 == *str2)
        {
            str1++;
            str2++;
            count--;
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
    }
    return 0;
}
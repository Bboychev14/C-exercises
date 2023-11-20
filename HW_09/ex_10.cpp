#include <iostream>

using namespace std;

char* ReturnFirstOccurrenceOfChar(char* str, char ch);

int main()
{
    char str[] = {"wjeqwe"};
    char ch = 'e';
    cout << ReturnFirstOccurrenceOfChar(str, ch);
    return 0;
}

char* ReturnFirstOccurrenceOfChar(char* str, char ch)
{
    while (*str)
    {
        if (*str == ch)
        {
            return str;
        }
        str++;
    }
    return nullptr;
}
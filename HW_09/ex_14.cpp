#include <iostream>

using namespace std;

void CopyCharsFromString(char* dest, const char* str, int count);

int main()
{
    char dest[] = "";
    char input[] = "Hello World";
    int count = 20;
    CopyCharsFromString(dest, input, count);
    cout << dest;
    return 0;
}

void CopyCharsFromString(char* dest, const char* str, int count)
{
    int chars = 0;
    for (int i = 0; i < count; ++i)
    {
        if (*str)
        {
            dest[i] = *str;
            str++;
            chars += 1;
        }
        else
        {
            while (count > chars)
            {
                dest[i] = '\0';
                --count;
            }
            break;
        }
    }
}
#include <iostream>

using namespace std;

void ApendCopyOfStringToString(char* dest, const char* head);

int main()
{
    char dest[] = "Learning C++ is fun";
    char head[] = ": JK";
    ApendCopyOfStringToString(dest, head);
    cout << dest;
    return 0;
}

void ApendCopyOfStringToString(char* dest, const char* head)
{
    while (*dest)
    {
        dest++;
    }
    while (*head)
    {
        *dest = *head;
        dest++;
        head++;
    }
}
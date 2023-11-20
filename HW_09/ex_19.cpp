#include <iostream>

using namespace std;

bool CheckIndex(const char** strings, int rows);

int main()
{
    const char* strings[] = {"", "w", "as", "gre"};
    int rows = sizeof(strings) / sizeof(strings[0]);
    cout << CheckIndex(strings, rows);
    return 0;
}

bool CheckIndex(const char** strings, int rows)
{
    for (int i = 0; i < rows; ++i)
    {
        int tempChar = 0;
        while (strings[i][tempChar] != '\0')
        {
            ++tempChar;
        }
        if (tempChar != i)
        {
            return false;
        }
    }
    return true;
}
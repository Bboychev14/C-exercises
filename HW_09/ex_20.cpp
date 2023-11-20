#include <iostream>
#include <cstring>

using namespace std;

void ReverseStrings(char** strings, int rows);

int main()
{
    const char* strings[] = {"asd", "qwer", "zxcvb"};
    int rows = sizeof(strings) / sizeof(strings[0]);
    char** stringArray = new char*[rows];
    for (int i = 0; i < rows; ++i)
    {
        stringArray[i] = new char[strlen(strings[i]) + 1];
        strcpy(stringArray[i], strings[i]);
    }

    ReverseStrings(stringArray, rows);
    for (int i = 0; i < rows; ++i)
    {
        cout << stringArray[i] << endl;
    }
    return 0;
}

void ReverseStrings(char** strings, int rows)
{
    for (int i = 0; i < rows; ++i)
    {
        int length = strlen(strings[i]);
        for (int j = 0; j < length / 2; ++j)
        {
            char temp = strings[i][j];
            strings[i][j] = strings[i][length - j - 1];
            strings[i][length - j - 1] = temp;
        }
    }
}
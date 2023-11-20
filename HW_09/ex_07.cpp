#include <iostream>

using namespace std;

int ReturnsLengthOfString(const char* input);

int main()
{
    char input[10] = {"Aqwedsq"};
    cout << ReturnsLengthOfString(input);
    return 0;
}

int ReturnsLengthOfString(const char* input)
{
    const char* ch = input;
    while (*ch)
    {
        ch++;
    }
    return ch - input;
}

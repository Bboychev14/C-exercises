#include <iostream>

using namespace std;

const char* ReturnSubstringPointer(const char* input, const char* target);

int main()
{
    char str[] = "qsdw asd e1we";
    char target[] = "asd";
    cout << ReturnSubstringPointer(str, target);
    return 0;
}

const char* ReturnSubstringPointer(const char* input, const char* target)
{
    while (*input != '\0')
    {
        const char* inputCh = input;
        const char* targetCh = target;
        while (*inputCh == *targetCh)
        {
            inputCh++;
            targetCh ++;
        }
        if (*targetCh == '\0')
        {
            return input;
        }
        input++;
    }
    return nullptr;
}
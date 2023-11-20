#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char text[20] = "a";
    bool isPalindrome = true;

    cout << "Enter a text: ";
    cin >> text;
    int textLength = strlen(text);

    for (int i = 0; i < textLength / 2; i++)
    {
        if (text[i] != text[textLength - i - 1])
        {
            isPalindrome = false;
            cout << "The word is not palindrome!";
            break;
        }
    }

    if (isPalindrome)
    {
        cout << "The word is palindrome!";
    }

    return 0;
}
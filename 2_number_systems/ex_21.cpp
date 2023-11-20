#include <iostream>
#include <string>
#include <string.h>

using namespace std;

int main()
{
    string text = "a";
    string newString = "";
    bool isPalindrome = true;

    cout << "Enter a text: ";
    getline(cin, text);
    int textLength = text.length();

    for (int i = 0; i < textLength; i++)
    {
        if (isalnum(text[i]))
        {
            newString += tolower(text[i]);
        }
    }
    int lengthOfNewString = newString.length();

    for (int i = 0; i < lengthOfNewString / 2; i++)
    {
        if (newString[i] != newString[lengthOfNewString - i - 1])
        {
            isPalindrome = false;
            cout << "The text is not palindrome!";
            break;
        }
    }

    if (isPalindrome)
    {
        cout << "The text is palindrome!";
    }

    return 0;

}
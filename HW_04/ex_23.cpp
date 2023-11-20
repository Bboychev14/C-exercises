#include <iostream>
#include <string>

using namespace std;

int countCharsInString(const string& input, char a)
{
    int counter = 0;
    for(char c : input)
    {
        if(c == a)
        {
            counter++;
        }
    }
    return counter;
}

/* This function returns the number of times a string contains a character. */

/* int main()
{
    string input;
    char a;
    cout << "Enter a string and character: ";
    cin >> input >> a;
    cout << countCharsInString(input, a);

    return 0;
} */
#include <iostream>
#include <cstring>
#include <climits>

using namespace std;

int main()
{
    string text = "a";
    char letter = 'a';
    bool foundLetter = false;
    int firstPosition = INT_MAX;
    int lastPosition = -1;
    cout << "Enter a text and the letter we are surching for: ";
    cin >> text >> letter;

    for (int i = 0; i < text.length(); i++)
    {
        if (text[i] == letter && i < firstPosition)
        {
            firstPosition = i;
            foundLetter = true;
        }
        else if (text[i] == letter)
        {
            lastPosition = i;
        }
    }
    if (foundLetter)
    {
        if (lastPosition > -1)
        {
            cout << "The first possition is: " << firstPosition << endl;
            cout << "The last possition is: " << lastPosition;
        }
        else
        {
            cout << "The first possition is: " << firstPosition << endl;
            cout << "There wasn't a second appearence of the letter in this text!";
        }
    }
    else
    {
        cout << "There is no such letter in this text!";
    }

    return 0;
}
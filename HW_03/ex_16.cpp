#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char letter = 'a';
    string text = "a";
    int counter = 0;

    cout << "Enter a text and the letter we are serching for: ";
    cin >> text >> letter;

    for (int i = 0; i < text.length(); i++)
    {
        if (text[i] == letter)
        {
            counter++;
        }
    }
    cout << counter;
    return 0;

}
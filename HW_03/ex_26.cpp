#include <iostream>
#include <string>

using namespace std;

int main()
{
    string input;
    string result;
    cout << "Enter a text: ";
    getline(cin, input);

    char previousSymbol = 'a';
    for(char c : input)
    {
        if(isspace(c) && isspace(previousSymbol))
        {
            continue;
        }
        else
        {
            result += c;
            previousSymbol = c;
        }
    }

    cout << result;

    return 0;

}
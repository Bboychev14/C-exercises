#include <iostream>

using namespace std;

int main()
{
    string input = "a";
    string result = "";
    cout << "Enter a text: ";
    getline(cin, input);
    int inputLength = input.length();

    for (int i = 0; i < inputLength; i++)
    {
        if (input[i] == '.')
        {
            result += "!!!";
        }
        else if (isalpha(input[i]))
        {
            result += toupper(input[i]);
        }
        else
        {
            result += input[i];
        }
    }

    cout << result;

    return 0;
    
}
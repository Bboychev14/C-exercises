#include <iostream>
#include <string>

using namespace std;

int firstUniqueSymbol(const string& input)
{
    for(int i = 0; i < input.length(); i++)
    {
        bool isUnique = true;
        for(int j = 0; j < input.length(); j++) // j could start from i
        {
            if(input[i] == input[j] && j != i)
            {
                isUnique = false;
                break;
            }
        }
        if(isUnique)
        {
            return i;
        }
    }
    return input.length();
}

/* This function receives a string and returns the index of the first unique symbol.
If there is no unique symbol it returns the length of the string. */

/* int main()
{
    string input;
    cout << "Enter a string: ";
    cin >> input;
    cout << firstUniqueSymbol(input);

    return 0;

} */
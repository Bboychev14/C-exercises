#include <iostream>
#include <string>

using namespace std;

string reverseString(const string& input)
{
    string reversedInput;
    for(int i = input.length() - 1; i >= 0; i--)
    {
        reversedInput += input[i];
    }
    return reversedInput;
}

int main()
{
    string input;
    cout << "Enter a string: ";
    cin >> input;
    cout << "The reversed string is: " << reverseString(input);

    return 0;
}

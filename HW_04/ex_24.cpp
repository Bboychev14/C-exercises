#include <iostream>
#include <string>

using namespace std;

string replace(string& input, char a, char b)
{
    for(int i = 0; i < input.length(); i++)
    {
        if(input[i] == a)
        {
            input[i] = b;
        }
    }
    return input;
}

/* This function serches for a certain char in a string
and replaces it with another char. */

/* int main()
{
    string input;
    char a;
    char b;
    cout << "Enter a string and two chars: ";
    cin >> input >> a >> b;
    cout << replace(input, a, b);

    return 0;

} */
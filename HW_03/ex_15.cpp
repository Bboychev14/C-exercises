#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    string input = "a";
    cout << "Enter a string: ";
    cin >> input;
    for (unsigned i = input.length(); i > 0; i--)
    {
        cout << input[i - 1];
    }

    return 0;

}
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string input;
    int finalNumber = 0;
    cout << "Enter a string containing only 0's and 1's: ";
    cin >> input;

    for (int i = 0; i < input.length(); i++)
    {
        if (input[i] == '1')
        {
            finalNumber += (1 << (input.length() - i - 1));
        }
    }
    cout << finalNumber;

}
#include <iostream>
#include <string>

using namespace std;

string encrypt(string& input, int step)
{
    for(char& ch : input)
    {
        char head = isupper(ch) ? 'A' : 'a';
        ch = head + (((ch - head) - step + 26) % 26);
    }
    return input;
}

/* This function encrypts a string using the cipher of Ceasar */

/* int main()
{
    string input;
    int step = 0;
    cout << "Enter a string and a step: ";
    cin >> input >> step;

    cout << encrypt(input, step);

    return 0;

} */
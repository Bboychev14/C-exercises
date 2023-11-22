#include <iostream>
#include <string>

using namespace std;

string encrypt(string& input, int step)
{
    for(char& ch : input)
    {
        char head = isupper(ch) ? 'A' : 'a';
        ch = ((ch - head + step) % 26) + head;
    }
    return input;
}

/* This is the same func as the one in ex 26.
I just change the algorithm in line 11. */

int main()
{
    string input;
    int step = 0;
    cout << "Enter a string and a step: ";
    cin >> input >> step;

    cout << encrypt(input, step);

    return 0;

}
#include <iostream>
#include <string>

using namespace std;

string atbashEncrypt(string& input)
{
    for(char& ch : input)
    {
        char head = isupper(ch) ? 'A' : 'a';
        ch = head + 25 - (ch - head);
    }
    return input;
}

/* This functions encrypts a string using the cipher of Atbash */

/* int main()
{
    string input;
    cout << "Enter a string: ";
    cin >> input;
    cout << atbashEncrypt(input);

    return 0;

} */
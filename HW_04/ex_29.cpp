#include <iostream>
#include <string>

using namespace std;

string atbashEncrypt(string& input)
{
    string decriptedString;
    for(char& ch : input)
    {
        char head = isupper(ch) ? 'Z' : 'z';
        // got this from the internet
        decriptedString += head - (ch - head);
    }
    return decriptedString;
}

int main()
{
    string input;
    cout << "Enter a string: ";
    cin >> input;
    cout << atbashEncrypt(input);

    return 0;

}

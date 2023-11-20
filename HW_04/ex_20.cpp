#include <iostream>
#include <string>

using namespace std;

string inputString()
{
    string result;
    string tempLine;

    while(getline(cin, tempLine))
    {
        result += tempLine + "\n";
    }
    return result;
}

/* This function lets you enter a multiple line string. */

/* int main()
{
    cout << "Start entering lines with text: " << endl;
    cout << inputString();

    return 0;

} */
#include <iostream>
#include <string>

using namespace std;

void PrintSubstrings(const string& str);

int main()
{
    string str = "asdf";
    PrintSubstrings(str);

    return 0;
    
}

void PrintSubstrings(const string& str)
{
    for (int i = 1; i < str.length(); ++i)
    {
        for (int j = 0; j <= str.length() - i; ++j)
        // j is the starting point and i is the number of chars
        cout << str.substr(j, i) << endl;
    }
}
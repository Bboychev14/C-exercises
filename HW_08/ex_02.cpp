#include <iostream>
#include <string>

using namespace std;

void ReverseString(string& str);

int main()
{
    string input = "asdfg";
    ReverseString(input);
    return 0;
}

void ReverseString(string& str)
{
    auto iter = str.begin();
    auto iter2 = str.end() - 1;
    while (iter < iter2)
    {
        auto tempIter = *iter2;
        *iter2 = *iter;
        *iter = tempIter;
        ++iter;
        --iter2;
    }
    cout << str;
}
#include <string>
#include <iostream>
#include <vector>

using namespace std;

string ReverseString(string& str); // copied my function from the previous exercise.

int main()
{
    vector<string> vec;
    string line;

    while (cin >> line)
    {
        vec.push_back(ReverseString(line));
    }

    for (auto iter = vec.cbegin(); iter != vec.cend(); ++iter)
    {
        cout << *iter << endl;
    }

    return 0;

}

string ReverseString(string& str)
{
    for (auto iter1 = str.begin(), iter2 = str.end() - 1; iter1 <= iter2; ++iter1, --iter2)
    {
        swap(*iter1, *iter2);
    }

    return str;

}
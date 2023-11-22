#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <list>

using namespace std;

int main()
{
    vector<string> words;
    string word;
    list<string> result;

    while (cin >> word)
    {
        words.push_back(word);
    }

    sort(words.begin(), words.end());
    unique_copy(words.begin(), words.end(), back_inserter(result));

    for (string str : result)
    {
        cout << str << "   ";
    }

    return 0;
    
}
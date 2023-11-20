#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<string> words;
    string word;

    while (cin >> word)
    {
        words.push_back(word);
    }

    sort(words.begin(), words.end());
    auto last = unique(words.begin(), words.end());

    for (auto iter = words.begin(); iter < last; ++iter)
    {
        cout << *iter << endl;
    }

    return 0;
    
}
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

void WordReverser(string& str);

int main()
{
    string text;
    getline(cin, text);
    vector<string> words;
    string word;

    for (char ch : text)
    {
        if (isalpha(ch) || ch == ' ')
        {
            word += ch;
        }
        if (ch == ' ' && !word.empty())
        {
            words.push_back(word);
            word.clear();
        }
    }
    if (!word.empty())
    {
        words.push_back(word);
    }

    for_each(words.begin(), words.end(), WordReverser);

    for (const string& word : words)
    {
        cout << word << ' ';
    }

    return 0;

}

void WordReverser(string& str)
{
    reverse(str.begin(), str.end());
}
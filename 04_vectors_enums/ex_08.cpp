#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>

using namespace std;

void printLongestUniqueString(vector<string>& vec);
int returnCharsOfString(string& word);

int main()
{
    vector<string> vec = {"asdq", "qwertqqq", "ds", "asdq", "ds", "asdfgaa"};
    printLongestUniqueString(vec);
    return 0;
}

void printLongestUniqueString(vector<string>& vec)
{
    int countUniqueChars = 0;
    vector<string> result;

    for (int i = 0; i < vec.size(); ++i)
    {
        int currentCount = returnCharsOfString(vec[i]);
        if (currentCount > countUniqueChars)
        {
            countUniqueChars = currentCount;
            result.clear();
            result.push_back(vec[i]);
        }
        else if (currentCount == countUniqueChars)
        {
            result.push_back(vec[i]);
        }
    }
    for (int i = 0; i < result.size(); ++i)
    {
        cout << result[i] << endl;
    }  
}

int returnCharsOfString(string& word)
{
    unordered_set<char> s;

    for (int i = 0; i < word.size(); ++i)
    {
        s.insert(word[i]);
    }

    return s.size();
}
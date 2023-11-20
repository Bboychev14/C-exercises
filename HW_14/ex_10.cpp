#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

using namespace std;

bool canFormWord(const string& word, const string& candidate);

int main()
{
    string word;
    cout << "Enter a word: ";
    cin >> word;
    ifstream wordListFile("words_alpha.txt");
    if (!wordListFile)
    {
        cout << "Couldn't open the file!" << endl;
        return 0;
    }
    string candidate;
    cout << "Possible words formed by: " << word << endl;

    while (wordListFile >> candidate)
    {
        if (canFormWord(word, candidate))
        {
            cout << candidate << endl;
        }
    }

    wordListFile.close();

    return 0;

}

bool canFormWord(const string& word, const string& candidate)
{
    if (word.length() != candidate.length())
    {
        return false;
    }
    string sortedWord = word;
    string sortedCandidate = candidate;
    sort(sortedWord.begin(), sortedWord.end());
    sort(sortedCandidate.begin(), sortedCandidate.end());
    return sortedWord == sortedCandidate;
}

#include <iostream>
#include <string>
#include <map>

using namespace std;

map<string, int> CalculateWordsCount(const string& text);

void PrintMap(const map<string, int>& wordsCount);

int main()
{
    string input;
    cout << "Enter you'r input: ";
    while (getline(cin, input))
    {
        map<string, int> wordsCount = CalculateWordsCount(input);
        PrintMap(wordsCount);
        cout << endl;
    }

    return 0;

}

map<string, int> CalculateWordsCount(const string& text)
{
    map<string, int> wordsCount;
    string tempWord;
    for (int i = 0; i < text.length(); ++i)
    {
        if ((text[i] != ' ') && (text[i] != ','))
        {
            tempWord += text[i];
        }
        else
        {
            if (wordsCount.count(tempWord))
            {
                wordsCount[tempWord] += 1;
            }
            else
            {
                if (tempWord.length() > 0)
                // Withou this if statement the function adds empty string to the result.
                {
                    wordsCount[tempWord] = 1;
                }
            }
            tempWord = "";
        }
    }
    return wordsCount;
}

void PrintMap(const map<string, int>& wordsCount)
{
    for (const auto& pair : wordsCount)
    {
        cout << pair.first << ": " << pair.second << endl;
    }
}
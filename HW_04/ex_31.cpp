#include <iostream>
#include <string>
#include <unordered_set>
#include <unordered_map>

using namespace std;

void PrintStringInfo(const string& str);
char FirstUniqueElement(const string& str);
bool IsMadeOfUniqueChars(const string& str);

int main()
{
    string input = "asdff asdfg asdfghh";
    PrintStringInfo(input);
    return 0;
}

void PrintStringInfo(const string& str)
{
    int totalSymbols = 0;
    int totalLetters = 0;
    int totalUpperLetters = 0;
    int totalLowerLetters = 0;
    int totalConsonantLetters = 0;
    int totalVowelLetters = 0;
    int wordsCount = 1;
    int integersCount = 0;
    string vowels = "ayoueiAYOUEI";
    int tempWordLength = 0;
    int longestWordLength = 0;
    string longestWord;
    string tempWord;
    string longestUniqueWord;

    for (char ch : str)
    {
        totalSymbols += 1;
        if (isalpha(ch))
        {
            tempWord += ch;
            tempWordLength += 1;
            totalLetters += 1;
            if(isupper(ch))
            {
                totalUpperLetters += 1;
            }
            else
            {
                totalLowerLetters += 1;
            }
            if (vowels.find(ch) != string::npos)
            {
                totalVowelLetters += 1;
            }
            else
            {
                totalConsonantLetters += 1;
            }
        }
        else if (ch == ' ')
        {
            if (tempWordLength > longestWordLength)
            {
                if (IsMadeOfUniqueChars(tempWord))
                {
                    longestUniqueWord = tempWord;
                }
                longestWordLength = tempWordLength;
                tempWordLength = 0;
                longestWord = tempWord;
            }
            wordsCount += 1;
        }
        else if (isdigit(ch))
        {
            tempWord += ch;
            tempWordLength += 1;
            integersCount += 1;
        }
    }
    if (tempWordLength > longestWordLength)
    {
        if(IsMadeOfUniqueChars(tempWord))
        {
            longestUniqueWord = tempWord;
        }
        longestWord = tempWord;
    }
    char firstUniqueChar = FirstUniqueElement(str);

    cout << "Total symbols: " << totalSymbols << endl;
    cout << "Total letters: " << totalLetters << endl;
    cout << "Total upercase letter: " << totalUpperLetters << endl;
    cout << "Total lowercase letters: " << totalLowerLetters << endl;
    cout << "Total vowel letters: " << totalVowelLetters << endl;
    cout << "Total consonant letters: " << totalConsonantLetters << endl;
    cout << "Total words count: " << wordsCount << endl;
    cout << "Total digits cout: " << integersCount << endl;
    cout << "First unique element is: " << firstUniqueChar << endl;
    cout << "Longest word is: " << longestWord << endl;
    cout << "Longest word with unique symbols is: " << longestUniqueWord;
}

char FirstUniqueElement(const string& str)
{
    unordered_map<char, int> charCount;
    
    for (char ch : str)
    {
        charCount[ch] ++;
    }

    for (char ch : str)
    {
        if (charCount[ch] == 1)
        {
            return ch;
        }
    }
    return '\0';
}

bool IsMadeOfUniqueChars(const string& str)
{
    unordered_set<char> seenChars;

    for (char ch : str)
    {
        if (seenChars.count(ch) > 0)
        {
            return false;
        }
        seenChars.insert(ch);
    }
    return true;
}
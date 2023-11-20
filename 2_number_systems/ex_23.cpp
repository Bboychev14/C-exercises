#include <iostream>

using namespace std;

int main()
{
    int linesCount, charsCount = 0, wordsCount = 0;
    string input = "a";
    cout << "Start entering lines with text: ";

    while (getline(cin, input))
    {
        int tempCharsCount = input.length();
        charsCount += tempCharsCount;
        for (int i = 0; i < tempCharsCount; i++)
        {
            if (input[i] == ' ')
            {
                wordsCount ++;
            }
        }
        wordsCount ++;
        linesCount ++;    
    }

    cout << "Number of lines: " << linesCount << endl;
    cout << "Number of words: " << wordsCount << endl;
    cout << "Number of characters: " << charsCount << endl;

    return 0;

}
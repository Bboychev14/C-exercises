#include <iostream>
#include <string>

using namespace std;

int main()
{
    int longestLineLength = 0;
    int longestWordLength = 0;
    int shortestLineLength = INT_MAX;
    string longestWord, longestLine, shortestLine, input;
    cout << "Enter text on multiple lines: ";

    while(getline(cin, input))
    {
        int tempLineLength = 0;
        tempLineLength = input.length();
        if(tempLineLength < shortestLineLength)
        {
            shortestLineLength = tempLineLength;
            shortestLine = input;
        }
        if(tempLineLength > longestLineLength)
        {
            longestLineLength = tempLineLength;
            longestLine = input;
        }

        int currentWordLength = 0;
        string currentWord;
        for (char c : input) {
            if (isalnum(c)) {
                currentWord += c;
                currentWordLength++;
            } else {
                if (currentWordLength > longestWordLength) {
                    longestWord = currentWord;
                    longestWordLength = currentWordLength;
                }
                currentWordLength = 0;
                currentWord.clear();
            }
        }

        if (currentWordLength > longestWordLength) {
            longestWord = currentWord;
            longestWordLength = currentWordLength;
        }
    }

    cout << "Shortest line: " << shortestLine << " (" << shortestLineLength << " characters)" << endl;
    cout << "Longest line: " << longestLine << " (" << longestLineLength << " characters)" << endl;;
    cout << "Longest word: " << longestWord << " (" << longestWordLength << " characters)" << endl;

}
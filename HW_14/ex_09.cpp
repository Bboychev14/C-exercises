#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(int argc, char* argv[])
{
    string wordToCheck = argv[1];
    ifstream wordListFile("words_alpha.txt");
    if (!wordListFile)
    {
        cout << "Failed to open word list file." << endl;
        return 0;
    }

    string word;
    bool found = false;

    while (getline(wordListFile, word))
    {
        if (word == wordToCheck)
        {
            found = true;
            break;
        }
    }

    if (found)
    {
        cout << "The word \"" << wordToCheck << "\" is spelled correctly." << endl;
    }
    else
    {
        cout << "The word \"" << wordToCheck << "\" is misspelled." << endl;
    }

    wordListFile.close();

    return 0;

}
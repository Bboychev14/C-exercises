#include <iostream>
#include <string>

using namespace std;

int main()
{
    string input;
    double average = 0.0;
    double wordsCount = 0.0;
    double symbolsCount = 0.0;
    cout << "Enter a text: ";
    getline(cin, input);

    for(char c : input)
    {
        if(isalnum(c))
        {
            symbolsCount ++;
        }
        else
        {
            wordsCount ++;
        }
    }
    wordsCount ++;

    average = symbolsCount / wordsCount;
    cout << average;

    return 0;

}
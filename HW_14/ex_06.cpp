#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>
#include <random>

using namespace std;

vector<string> ShufleText(string& str);

int GenerateRandomNumber(int upperLimit, int lowerLimit=0);

int main()
{
    string input = "Some random bullsht text we want to shuffle";
    vector<string> result = ShufleText(input);
    for (auto iter = result.cbegin(); iter != result.cend(); ++iter)
    {
        cout << *iter << ' ';
    }

    return 0;

}

vector<string> ShufleText(string& str)
{
    istringstream iss(str); // Separetes the whole string to a separate words.
    vector<string> words;
    string word;
    while (iss >> word)
    {
        words.push_back(word);
    }

//For some reason the shuffle didn't work with iterators. Probably somehow they get invalidated.

/*     for (auto iter = words.begin(); iter != words.end(); ++iter)
    {
        swap(*iter, *(iter + GenerateRandomNumber(words.size() - 1)));
    }
    return words; */

    for (int i = 0; i < words.size(); ++i)
    {
        swap(words[i], words[GenerateRandomNumber(words.size() - 1)]);
    }

    return words;
}

int GenerateRandomNumber(int upperLimit, int lowerLimit)
{
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(lowerLimit, upperLimit);

    return dis(gen);
}
#include <iostream>
#include <string>
#include <vector>
#include <random>

using namespace std;

void SplitTextIntoSentences(const string& str, vector<string>& vec);

int GenerateRandomNumber(int upperLimit, int lowerLimit=0);

void ShufleVector(vector<string>& vec);

int main()
{
    string input = "First sentece. Second Sentence. So on.";
    vector<string> v {""};
    SplitTextIntoSentences(input, v);
    ShufleVector(v);
    for (auto iter = v.cbegin(); iter != v.cend(); ++iter)
    {
        cout << *iter << endl;
    }

    return 0;

}

void SplitTextIntoSentences(const string& str, vector<string>& vec)
{
    int sentencesCount = 0;
    for (char ch : str)
    {
        if (ch != '.')
        {
            vec[sentencesCount] += ch;
        }
        else
        {
            ++sentencesCount;
            vec.push_back("");
        }
    }
}

int GenerateRandomNumber(int upperLimit, int lowerLimit)
{
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(lowerLimit, upperLimit);

    return dis(gen);
}

void ShufleVector(vector<string>& vec)
{
    for (int i = 0; i < vec.size(); ++i)
    {
        swap(vec[i], vec[GenerateRandomNumber(vec.size() - 1)]);
    }
}
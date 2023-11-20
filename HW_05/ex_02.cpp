#include <iostream>
#include <vector>

using namespace std;

void evenAndOddVectors(vector<int>& vec1, vector<int>& evens, vector<int>& odds);
void printVectors(vector<int>& vec);

int main()
{
    vector<int> vec = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    vector<int> vectorOfEvens;
    vector<int> vectorOfOdds;
    evenAndOddVectors(vec, vectorOfEvens, vectorOfOdds);
    printVectors(vectorOfEvens);
    printVectors(vectorOfOdds);

    return 0;
}

void evenAndOddVectors(vector<int>& vec1, vector<int>& evens, vector<int>& odds)
{
    for (int i = 0; i < vec1.size(); ++i)
    {
        if (vec1[i] % 2 == 0)
        {
            evens.push_back(vec1[i]);
        }
        else
        {
            odds.push_back(vec1[i]);
        }
    }
}

void printVectors(vector<int>& vec)
{
    for (int i = 0; i < vec.size(); ++i)
    {
        cout << vec[i] << " ";
    }
    cout << endl;
}
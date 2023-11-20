#include <iostream>
#include <vector>

using namespace std;

void vectorAdding(vector<int>& vec1, vector<int>& vec2);

void printVectors(vector<int>& vec);

int main()
{
    vector<int> vec1{1, 2, 3};
    vector<int> vec2{4, 5, 6, 7, 8};
    vectorAdding(vec1, vec2);
    printVectors(vec1);
    printVectors(vec2);

    return 0;

}

void vectorAdding(vector<int>& vec1, vector<int>& vec2)
{
    for(int i = 0; i < vec2.size(); i++)
    {
        vec1.push_back(vec2[i]);
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
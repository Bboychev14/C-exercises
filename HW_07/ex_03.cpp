#include <iostream>
#include <vector>

using namespace std;

vector<int> ReturnSubVector(const vector<int>& vec, int subVectorSum);

int main()
{
    vector<int> vec = {4, 7, 9, 1, -2};
    int finalSum = 17;
    vector<int> finalVector = ReturnSubVector(vec, finalSum);
    for (int i = 0; i < finalVector.size(); ++i)
    {
        cout << finalVector[i] << " ";
    }
    return 0;
}

vector<int> ReturnSubVector(const vector<int>& vec, int subVectorSum)
{
    for (int i = 0; i < vec.size(); ++i)
    {
        int tempSum = 0;
        for (int j = i; j < vec.size(); ++j)
        {
            tempSum += vec[j];
            if (tempSum == subVectorSum)
            {
                auto start = vec.begin() + i;
                auto end = vec.begin() + j + 1;
                std::vector<int> result(start, end);
                return result;
            }
        }
    }
    return {};
}
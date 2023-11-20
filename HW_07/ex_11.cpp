#include <iostream>
#include <vector>

using namespace std;

void RefactorVector(vector<double>& vec, double num);

int main()
{
    vector<double> vec = {1.0, 2.1, 0.0, 1.0, 0.0, 3.0};
    double number = 0.0;
    RefactorVector(vec, number);
    for (int i = 0; i < vec.size(); ++i)
    {
        cout << vec[i] << " ";
    }

    return 0;

}

void RefactorVector(vector<double>& vec, double num)
{
    for (int i = 0; i < vec.size(); ++i)
    {
        if (vec[i] == num)
        {
            vec.push_back(num);
            vec.erase(vec.begin()+i);
        }
    }
}
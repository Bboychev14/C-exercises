#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

bool IsUnique(const vector<char*>& v, const char* number, int& current_index);

int main(int argc, char* argv[])
{
    vector<char*> v;
    vector<string> f;
    int count = 0;

    for (int i = 1; i < argc; i++)
    {
        int current_index = 0;
        if (IsUnique(v, argv[i], current_index))
        {
            v.push_back(argv[i]);
            string one = "*";
            f.push_back(one);
        }
        else
        {
            f[current_index].push_back('*');
        }
    }
    for (size_t i = 0; i < f.size(); i++)
    {
        cout << v[i] << ": ";
        cout << f[i] << '\n';
    }

    return 0;
    
}

bool IsUnique(const vector<char*>& v, const char* number, int& current_index)
{
    for (size_t i = 0; i < v.size(); i++)
    {
        if (strcmp(v[i], number) == 0)
        {
            current_index = i;
            return false;
        }
    }
    return true;
}
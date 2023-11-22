#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Person
{
    string name;  
};

void SortPeople(vector<Person>& vec)
{
    int size = vec.size();
    for (int i = 0; i < size - 1; ++i)
    {
        int minIndex = i;
        for (int j = i + 1; j < size; ++j)
        {
            if (vec[j].name < vec[minIndex].name)
            {
                minIndex = j;
            }
        }
        if (i != minIndex)
        {
            swap(vec[i], vec[minIndex]);
        }
    }
}

int main()
{
    vector<Person> people = {
        {"Todor"},
        {"Ivan"},
        {"Gosho"},
        {"Atanas"}
    };
    SortPeople(people);
    
    return 0;
}
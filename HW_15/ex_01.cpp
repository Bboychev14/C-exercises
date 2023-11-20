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
        for (int j = 0; j < size - 1 - i; ++j)
        {
            if (vec[j].name > vec[j + 1].name)
            {
                swap(vec[j], vec[j + 1]);
            }
        }
    }
}

int main()
{
    vector<Person> people = {
        {"Todor"},
        {"Ivan"},
        {"Gosho"}
    };
    SortPeople(people);
    
    return 0;
}
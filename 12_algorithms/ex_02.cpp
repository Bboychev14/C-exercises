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
        bool isSorted = true;
        for (int j = 0; j < size - 1 - i; ++j)
        {
            if (vec[j].name > vec[j + 1].name)
            {
                swap(vec[j], vec[j + 1]);
                isSorted = false;
            }
        }
        if (isSorted)
        {
            break;
        }
    }
}

int main()
{
    vector<Person> people = {
        {"Gosho"},
        {"Ivan"},
        {"Tod"}
    };
    SortPeople(people);
    
    return 0;
}
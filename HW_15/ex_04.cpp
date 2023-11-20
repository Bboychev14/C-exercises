#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Person
{
    string name;  
};

void SortPeople(vector<Person*>& vec)
{
    int size = vec.size();
    for (int i = 0; i < size - 1; ++i)
    {
        int minIndex = i;
        for (int j = i + 1; j < size; ++j)
        {
            if (vec[j]->name < vec[minIndex]->name)
            {
                minIndex = j;
            }
        }
        if (i != minIndex)
        {
            swap(*vec[i], *vec[minIndex]);
        }
    }
}

int main()
{
    Person p1;
    p1.name = "Gosho";
    Person p2;
    p2.name = "Az";
    Person p3;
    p3.name = "Bsz";
    Person p4;
    p4.name = "Ivan";
    Person p5;
    p5.name = "Dimo";
    Person* ptrp1 = &p1;
    Person* ptrp2 = &p2;
    Person* ptrp3 = &p3;
    Person* ptrp4 = &p4;
    Person* ptrp5 = &p5;
    vector<Person*> people = {ptrp1, ptrp2, ptrp3, ptrp4, ptrp5};
    SortPeople(people);
    for (auto guy : people)
    {
        cout << guy->name << endl;
    }
    
    return 0;
}
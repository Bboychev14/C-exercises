#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Person
{
    string name;  
};

Person* FindPerson(vector<Person*>& vec, string target)
{
    int low = 0;
    int high = vec.size();
    
    while ((high - low) > 1)
    {
        int medium = (high - low) / 2;
        if (target > vec[medium]->name)
        {
            low = medium + 1;
        }
        else if (target <= vec[medium]->name)
        {
            high = medium;
        }
        if (vec[low]->name == target)
        {
            return vec[low];
        }
        else if (vec[high]->name == target)
        {
            return vec[high];
        }
    }
    return nullptr;
}

int main()
{
    Person p1;
    p1.name = "Az";
    Person p2;
    p2.name = "Bsz";
    Person p3;
    p3.name = "Dimo";
    Person p4;
    p4.name = "Gosho";
    Person p5;
    p5.name = "Ivan";
    Person* ptrp1 = &p1;
    Person* ptrp2 = &p2;
    Person* ptrp3 = &p3;
    Person* ptrp4 = &p4;
    Person* ptrp5 = &p5;
    vector<Person*> people = {ptrp1, ptrp2, ptrp3, ptrp4, ptrp5};
    Person* result = FindPerson(people, "Gosho");
    cout << result->name;
    
    
    return 0;
}
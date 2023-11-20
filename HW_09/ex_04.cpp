#include <iostream>

using namespace std;

struct Person
{
    float height;
};

void SortArray(Person** people, int size);

int main()
{
    Person p1;
    p1.height = 1.73;
    Person p2;
    p2.height = 1.42;
    Person p3;
    p3.height = 1.41;

    Person *people[] = {&p1, &p2, &p3};

    int size = sizeof(people) / sizeof(people[0]);
    SortArray(people, size);
    for (int i = 0; i < size; i++)
    {
        cout << people[i]->height << " ";
    }
    return 0;
}

void SortArray(Person** people, int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (people[j]->height > people[j + 1]->height)
            {
                Person temp = *people[j];
                *people[j] = *people[j + 1];
                *people[j + 1] = temp;
            }
        }
    }
}

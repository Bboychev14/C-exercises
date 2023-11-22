#include <iostream>

using namespace std;

struct Person
{
    float height;
};

bool IsEqual(const Person * ptr1, const Person * ptr2, int size);

int main()
{
    Person people[] = {1.90, 1.85, 1.80, 1.71};
    Person people2[] = {1.90, 1.85, 1.80, 1.70};
    int size = sizeof(people) / sizeof(people[0]);
    cout << IsEqual(people, people2, size);
    return 0;
}

bool IsEqual(const Person * ptr1, const Person * ptr2, int size)
{
    const Person* p1 = ptr1;
    const Person* p2 = ptr2;
    for (; p1 < ptr1 + size; p1++, p2++)
    {
        if (p1->height != p2->height)
        {
            return false;
        }
    }
    return true;
}
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

class Person
{
public:
    Person(const std::string name, int age) : m_name(name), m_age(age) {}
    std::string m_name;
    int m_age;
};

int CountPeopleInRange(std::vector<Person>& people, int minAge, int maxAge);

int main()
{
    std::vector<Person> people = {Person("Az", 22), Person("Gosho", 17), Person("Ivan", 54), Person("Radka", 23)};

    std::cout << CountPeopleInRange(people, 19, 25);

}

int CountPeopleInRange(std::vector<Person>& people, int minAge, int maxAge)
{
    int result = std::count_if(people.begin(), people.end(), [minAge, maxAge] (const Person& p)
    {
        return p.m_age >= minAge && p.m_age <= maxAge;
    });
    return result;
}
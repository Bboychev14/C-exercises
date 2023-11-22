#include <iostream>
#include <vector>

using namespace std;

enum class Gender
{
    Male,
    Female
};

struct Person
{
    string name;
    int age = 0; // need to be default initialized because of 'PrintGroupData' func.
    Gender gender;
    int heigth;
};

using People = vector<Person>;

void InputPersonData(Person& person);

void PrintGroupData(const People& vec);

void PrintPersonData(const Person& person);

int main()
{
    People people;
    cout << "Enter person data: " << endl;
    Person person;
    while (1)
    {
        InputPersonData(person);
        people.push_back(person);
        cout << "Do you want to add more people? y/n: ";
        char ch;
        cin >> ch;
        if (ch == 'n')
        {
            break;
        }
        cin.ignore();
    }
    cout << "--- Data about the whole group! ---" << endl;
    PrintGroupData(people);

    return 0;

}

void InputPersonData(Person& person)
{
    cout << "Enter name: ";
    getline(cin, person.name);
    cout << "Enter age: ";
    cin >> person.age;
    cout << "Enter gender -> 0 for Male / 1 for Female: ";
    int genderInput = 2;
    cin >> genderInput;
    person.gender = static_cast<Gender>(genderInput);
    cout << "Enter heigth: ";
    cin >> person.heigth;
}

void PrintGroupData(const People& vec)
{
    int malesCount = 0;
    int femalesCount = 0;
    double sumOfAges = 0.0;
    double sumOfHeigths = 0.0;
    Person oldestMan;
    Person oldestWoman;

    for (const auto& guy : vec)
    {
        if (guy.gender == Gender::Male)
        {
            ++malesCount;
            if (guy.age > oldestMan.age)
            {
                oldestMan = guy;
            }
        }
        else
        {
            ++femalesCount;
            if (guy.age > oldestWoman.age)
            {
                oldestWoman = guy;
            }
        }
        sumOfAges += guy.age;
        sumOfHeigths += guy.heigth;
    }

    //Could use vec.size() instead of the addition in the brackets, but i think it's faster that way.
    double averageAge = sumOfAges / (malesCount + femalesCount);
    double averageHeigth = sumOfHeigths / (malesCount + femalesCount);
    cout << "Count of men: " << malesCount << endl;
    cout << "Count of women: " << femalesCount << endl;
    cout << "Average age: " << averageAge << endl;
    cout << "Average heigth: " << averageHeigth << endl;
    cout << "Oldest man: " << endl;
    PrintPersonData(oldestMan);
    cout << "Oldest woman: " << endl;
    PrintPersonData(oldestWoman);
}

void PrintPersonData(const Person& person)
{
    string gender = (person.gender == Gender::Male) ? "Male" : "Female";
    cout << "Name: " << person.name << endl;
    cout << "Age: " << person.age << endl;
    cout << "Gender: " << gender << endl;
    cout << "Heigth: " << person.heigth << endl;
}
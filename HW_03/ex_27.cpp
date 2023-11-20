#include <iostream>
#include <string>

using namespace std;


int main()
{
    string gender;
    int age = 0;
    cout << "Enter gender and age: ";

    while(cin >> gender >> age)
    {
        if(gender == "Female" && age <= 35 && age >= 25)
        {
            cout << "Your profile matches our criteria!" << endl;
        }
        else if(gender == "Male" && age >= 30 && age <= 40)
        {
            cout << "Your profile matches our griteria!" << endl;
        }
        else
        {
            cout << "Your profile doesn't match our criteria!" << endl;
        }
        cout << "Enter gender and age:" << endl;
    }

    return 0;

}
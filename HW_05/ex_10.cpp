#include <iostream>
#include <string>

using namespace std;

enum class Days
{
    Monday = 1,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday,
    Sunday
};

string dayToString(Days day);

int main()
{
    int startDay = 0;
    int endDay = 0;
    int difference = 0;
    cout << "Enter start and end days: " << endl;
    cin >> startDay >> endDay;

    difference = endDay - startDay;
    if (difference < 0)
    {
        difference += 7;
    }
    Days start = static_cast<Days>(startDay);
    Days end = static_cast<Days>(endDay);

    std::cout << "There are " << difference << " days between " << dayToString(start)
              << " and " << dayToString(end) << std::endl;

    return 0;
}

string dayToString(Days day)
{
    if (day == Days::Monday)
    {
        return "Monday";
    }
    else if (day == Days::Tuesday)
    {
        return "Tuesday";
    }
    else if (day == Days::Wednesday)
    {
        return "Wednesday";
    }
    else if (day == Days::Thursday)
    {
        return "Thursday";
    }
    else if (day == Days::Friday)
    {
        return "Friday";
    }
    else if (day == Days::Saturday)
    {
        return "Saturday";
    }
    else if (day == Days::Sunday)
    {
        return "Sunday";
    }
    else
    {
        return "Invalid day!";
    }
}
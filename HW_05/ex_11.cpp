#include <iostream>
#include <string>
#include <vector>

using namespace std;

enum class YearType
{
    NonLeap,
    Leap
};

struct MonthInfo
{
    vector<string> names;
    int daysNonLeap;
    int daysLeap;
};

int getDaysInMonth(const string& month, YearType YearType);

YearType getYearType(int year);


int main()
{
    string month = "Feb";
    int year = 2019;
    YearType yearType = getYearType(year);
    int days = getDaysInMonth(month, yearType);
    cout << "Number of days in " << month << " for the year " << year << ": " << days;
    return 0;
}

int getDaysInMonth(const string& month, YearType yearType)
{
    static const vector<MonthInfo> months = {
        { {"Jan", "January"}, 31, 31 },
        { {"Feb", "February"}, 28, 29 },
        { {"Mar", "March"}, 31, 31 },
        { {"Apr", "April"}, 30, 30 },
        { {"May", "May"}, 31, 31 },
        { {"Jun", "June"}, 30, 30 },
        { {"Jul", "July"}, 31, 31 },
        { {"Aug", "August"}, 31, 31 },
        { {"Sep", "September"}, 30, 30 },
        { {"Oct", "October"}, 31, 31 },
        { {"Nov", "November"}, 30, 30 },
        { {"Dec", "December"}, 31, 31 }
    };

    for (const auto& info : months)
    {
        for (const string& name : info.names)
        {
            if (name == month)
            {
                return (yearType == YearType::Leap) ? info.daysLeap : info.daysNonLeap;
            }
        }
    }
    return -1;
}

YearType getYearType(int year)
{
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
    {
        return YearType::Leap;
    }
    return YearType::NonLeap;
}
#include <iostream>

using namespace std;

int main()
{
    int milliseconds, seconds, minutes, hours, days = 0;

    cout << "Enter milliseconds: ";
    cin >> milliseconds;

    seconds = milliseconds / 1000;
    minutes = seconds / 60;
    hours = minutes / 60;
    days = hours / 24;

    milliseconds %= 1000;
    seconds %= 60;
    minutes %= 60;
    hours %= 24;

    cout << days << " " << hours << " " << minutes << " " << seconds << " " << milliseconds;

    return 0;
}
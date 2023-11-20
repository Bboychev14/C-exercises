#include <iostream>

using namespace std;

int main()
{
    const int days = 365;
    const int hours = 24;
    const int minutes = 60;
    const int seconds = 60;
    
    const int secondsInAYear = days * hours * minutes * seconds;

    cout << "There are " << secondsInAYear << " seconds in a year.";

    return 0;

}
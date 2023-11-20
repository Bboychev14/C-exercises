#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int GenerateRandomNumber(int min, int max);

int main()
{
    int min = 2;
    int max = 7;
    cout << GenerateRandomNumber(min, max);
    return 0;
}

int GenerateRandomNumber(int min, int max)
{
    srand(time(0));
    int randomNumber = min + (rand() % max);
    return randomNumber;
}
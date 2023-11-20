#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int base = 0;
    int digitCount = 0;
    int resultNum = 0;
    cout << "Enter base and number of digits: ";
    cin >> base >> digitCount;
    resultNum = pow(base, digitCount) - 1;
    cout << "The biggest number is: " << resultNum;
    
    return 0;
}
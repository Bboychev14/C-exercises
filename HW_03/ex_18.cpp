#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    string text = "a";
    int firstPosition, secondPosition = 0;
    string finalString = "";
    cout << "Enter a text and two numbers: ";
    cin >> text >> firstPosition >> secondPosition;
    if (firstPosition > secondPosition)
    {
        int tempNum = 0;
        tempNum = secondPosition;
        secondPosition = firstPosition;
        firstPosition = tempNum;
    }

    for (int i = firstPosition; i < secondPosition; i++)
    {
        finalString += text[i];
    }

    cout << finalString;

    return 0;


}
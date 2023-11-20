#include <iostream>
#include <string>

using namespace std;

int ConvertingStringsAndInts(const string& str)
{
    return stoi(str);
}

string ConvertingStringsAndInts(int num)
{
    return to_string(num);
}

int main()
{
    string str = "123";
    int num = ConvertingStringsAndInts(str);
    cout << num << endl;
    int num2 = 321;
    string str2 = ConvertingStringsAndInts(num2);
    cout << str2;
}
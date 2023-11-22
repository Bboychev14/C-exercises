#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

void RemoveDuplicates(char* str)
{
    char* end = unique(str, str + strlen(str));
    *end = '\0';
}

int main()
{
    char str[] = "aaaabbbbccccdeee";
    RemoveDuplicates(str);
    cout << str;
    return 0;
    
}
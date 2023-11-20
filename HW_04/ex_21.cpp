#include <iostream>
#include <string>

using namespace std;

bool isPalindrome(const string& input, bool ignore = false)
{
    for(int i = 0, j = input.length() - 1; i < j; i++, j--)
    {
        if(ignore)
        {
            if(!isalpha(input[i]) && input[i] != input[j])
            {
                return false;
            }
        }
        else if(input[i] != input[j])
        {
            return false;
        }
    }
    return true;
}

/* int main()
{
    string input;
    cout << "Enter a string: ";
    cin >> input;
    cout << isPalindrome(input);

    return 0;

} */
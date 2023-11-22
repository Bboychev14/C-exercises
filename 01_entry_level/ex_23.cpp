#include <iostream>

using namespace std;

int main() {
    int number = 0;
    cout << "Enter a number: ";
    cin >> number;
    
    for (int row = number + 1; row >= 0; row--) {
        for (int num = 0; num < row; num++) {
            cout << num;
        }
        cout << endl;
    }
    return 0;

}
#include <iostream>

using namespace std;

int main(){
    char symbol;
    int length = 0;
    cout << "Enter symbol and length: ";
    cin >> symbol;
    cin >> length;

    for (int i = 1; i < length + 1; i++){
        for (int x = 1; x < i + 1; x++){
            cout << symbol;
        }
        cout << endl;
    }
    return 0;

}
#include <iostream>

using namespace std;

int main(){
    char symbol_1, symbol_2;
    int length = 0;
    cout << "Enter symbols and length: ";
    cin >> symbol_1;
    cin >> symbol_2;
    cin >> length;

    for (int i = length; i > 0; i--){
        for (int x = 1; x <= i; x++){
            cout << symbol_1;
        }
        for (int y = length - i; y > 0; y--){
            cout << symbol_2;
        }
        cout << endl;
    }
    return 0;

}
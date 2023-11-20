#include <iostream>

using namespace std;

int main(){
    char symbol;
    int length = 0;
    cout << "Enter symbol and length: ";
    cin >> symbol;
    cin >> length;

    for (int i = length; i > 0; i--){
        for (int x = 1; x <= i; x++){
            cout << symbol;
        }
        cout << endl;
    }
    return 0;

}
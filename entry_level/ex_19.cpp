# include <iostream>

using namespace std;

int main(){
    char symbol_1, symbol_2;
    int width = 0;
    int length = 0;
    cout << "Enter a symbol, width and length: ";
    cin >> symbol_1;
    cin >> symbol_2;
    cin >> width;
    cin >> length;

    for (int a = 1; a <= width; a++){
        for (int b = 1; b <= length; b++){
            if ((a + b) % 2 == 0){
                cout << symbol_1;
            }
            else {
                cout << symbol_2;
            }
        }
        cout << endl;
    }
    return 0;
}
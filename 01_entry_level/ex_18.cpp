# include <iostream>

using namespace std;

int main(){
    char symbol;
    int width = 0;
    int length = 0;
    cout << "Enter a symbol, width and length: ";
    cin >> symbol;
    cin >> width;
    cin >> length;

    for (int a = 0; a < width; a++){
        for (int b = 0; b < length; b++){
            cout << symbol;
        }
        cout << endl;
    }
    return 0;
}
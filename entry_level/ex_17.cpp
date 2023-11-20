#include <iostream>

using namespace std;

int main(){
    for (int x = 9; x > 0; x--){
        for (int y = 9; y > 0; y--){
            cout << x << "*" << y << "=" << x * y << " / ";
        }
        cout << endl;
    }

    return 0;
}
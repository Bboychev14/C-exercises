#include <iostream>
#include <string>

using namespace std;

int main()
{
    const float avocadoPrice = 1.23f;
    const float oilPrice = 2.53f;
    const float tomatoesPrice = 0.27f;
    const float onionsPrice = 0.15f;
    const float lemonsPrice = 8.99f;
    float bill = 0.0f;

    cout << "Enter a product and quantity: ";
    string product;
    int quantity =0;

    while(cin >> product >> quantity)
    {
        if(product == "avocado")
        {
            bill += quantity * avocadoPrice;
        }
        else if(product == "oil")
        {
            bill += quantity * oilPrice;
        }
        else if(product == "tomatoes")
        {
            bill += quantity * tomatoesPrice;
        }
        else if(product == "onions")
        {
            bill += quantity * onionsPrice;
        }
        else if(product == "lemons")
        {
            bill += quantity * lemonsPrice;
        }
        else
        {
            cout << "We don't have this product!" << endl;
        }
        cout << "Your current bill is: " << bill << endl;
        cout << "Enter a product and quantity: " << endl;
    }

    cout << "Your final bill is: " << bill;

    return 0;
}
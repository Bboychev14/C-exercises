#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Product
{
public:
    Product(const string& Name, double Price, int Quantity)
    {
        name = Name;
        price = Price;
        quantity = Quantity;
    }
    void SetName(string tempName)
    {
        name = tempName;
    }
    string GetName() const
    {
        return name;
    }
    void SetPrice(double tempPrice)
    {
        price = tempPrice;
    }
    double GetPrice() const 
    {
        return price;
    }
    void SetQuantity(int tempQuantity)
    {
        quantity = tempQuantity;
    }
    int GetQuantity() const 
    {
        return quantity;
    }

private:
    string name;
    double price;
    int quantity;
};

class Inventory
{
public:
    void AddProduct(Product product)
    {
        products.push_back(product);
    }
    void ChangeQuantity(const string& productName, int newQuantity)
    {
        for (Product& product : products)
        {
            if (product.GetName() == productName)
            {
                product.SetQuantity(newQuantity);
            }
        }
    }
    void PrintCombinedPrice() const 
    {
        double result = 0;
        for (const Product& product : products)
        {
            result += product.GetPrice() * product.GetQuantity();
        }
        cout << "The total price of all products is: " << result << endl;
    }
private:
    vector<Product> products;

};

int main()
{
    Inventory inventory;
    Product p1("Eggs", 5.5, 2);
    Product p2("Skyr", 3.7, 3);
    inventory.AddProduct(p1);
    inventory.AddProduct(p2);
    inventory.PrintCombinedPrice();
    inventory.ChangeQuantity("Eggs", 10); // using count 10 so that the calculations are easier.
    inventory.PrintCombinedPrice();
    inventory.ChangeQuantity("Skyr", 9);
    inventory.PrintCombinedPrice();

    return 0;

}
#ifndef PRODUCT_H
#define PRODUCT_H

#include <string>

using namespace std;

class Product
{
public:
    Product ();
    Product(const string& Name, double Price, int Quantity);
    void SetName(string tempName);
    string GetName() const;
    void SetPrice(double tempPrice);
    double GetPrice() const;
    void SetQuantity(int tempQuantity);
    int GetQuantity() const;
    string Serialize() const;
    void Deserialize(const string& data);

private:
    string name;
    double price;
    int quantity;
};

#endif
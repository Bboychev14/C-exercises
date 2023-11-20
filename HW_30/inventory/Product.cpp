#include "Product.h"
#include <sstream>

Product::Product()
{
    name = "";
    price = 0.0;
    quantity = 0;
}

Product::Product(const string& Name, double Price, int Quantity) // The constructor works but still needs to be fixed.
{
    name = Name;
    price = Price;
    quantity = Quantity;
}

void Product::SetName(string tempName)
{
    name = tempName;
}

string Product::GetName() const
{
    return name;
}

void Product::SetPrice(double tempPrice)
{
    price = tempPrice;
}

double Product::GetPrice() const 
{
    return price;
}

void Product::SetQuantity(int tempQuantity)
{
    quantity = tempQuantity;
}

int Product::GetQuantity() const 
{
    return quantity;
}

string Product::Serialize() const
{
    stringstream ss;
    ss << name << ',' << price << ',' << quantity;
    return ss.str();
}

void Product::Deserialize(const string& data)
{
    stringstream ss(data);
    string tempName;
    double tempPrice;
    int tempQuantity;
    getline(ss, tempName, ',');
    ss >> tempPrice;
    ss.ignore();
    ss >> tempQuantity;
    name = tempName;
    price = tempPrice;
    quantity = tempQuantity;
}

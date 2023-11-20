#ifndef INVENTORY_H
#define INVENTORY_H

#include "Product.h"
#include <string>
#include <vector>
#include <iostream>

using namespace std;

class Inventory
{
public:
    void AddProduct(Product product);
    void ChangeQuantity(const string& productName, int newQuantity);
    void PrintCombinedPrice() const;
    void SerializeInventory(const string& filename);
    void Deserialization(const string& filename);

private:
    vector<Product> products;
};

#endif
#include "Inventory.h"
#include <fstream>


void Inventory::AddProduct(Product product)
{
    products.push_back(product);
}

void Inventory::ChangeQuantity(const string& productName, int newQuantity)
{
    for (Product& product : products)
    {
        if (product.GetName() == productName)
        {
            product.SetQuantity(newQuantity);
        }
    }
}

void Inventory::PrintCombinedPrice() const 
{
    double result = 0;
    for (const Product& product : products)
    {
        result += product.GetPrice() * product.GetQuantity();
    }
    cout << "The total price of all products is: " << result << endl;
}

void Inventory::SerializeInventory(const string &filename)
{
    ofstream outputFile(filename);
    if (outputFile.is_open())
    {
        for (const Product p : products)
        {
            outputFile << p.Serialize() << endl;
        }
        outputFile.close();
    }
    else
    {
        cout << "Could't open the file for serialization!" << endl;
    }
}

void Inventory::Deserialization(const string &filename)
{
    ifstream inputFile(filename);
    if (inputFile.is_open())
    {
        products.clear();
        string line;
        while (getline(inputFile, line))
        {
            Product p;
            p.Deserialize(line);
            products.push_back(p);
        }
        inputFile.close();
    }
    else
    {
        cout << "Couldn't open the file!" << endl;
    }
}
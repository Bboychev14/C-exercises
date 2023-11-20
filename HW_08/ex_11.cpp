#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <sstream>

using namespace std;

class Product
{
public:
    Product ()
    {
        name = "";
        price = 0.0;
        quantity = 0;   
    }
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
    string Serialize() const
    {
        stringstream ss;
        ss << name << "," << price << "," << quantity;
        return ss.str();
    }
    void Deserialize(const string& data)
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
    void SerializeInventory(const string& filename)
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
    void Deserialization(const string& filename)
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
private:
    vector<Product> products;

};

int main()
{
//All this input is commented so that I can test if the program reads from the .txt file correctly.
/*     Inventory inventory;
    Product p1("Eggs", 5.5, 2);
    Product p2("Skyr", 3.7, 3);
    inventory.AddProduct(p1);
    inventory.AddProduct(p2);
    inventory.PrintCombinedPrice();
    inventory.ChangeQuantity("Eggs", 10); // using count 10 so that the calculations are easier.
    inventory.PrintCombinedPrice();
    inventory.ChangeQuantity("Skyr", 9);
    inventory.PrintCombinedPrice(); */
    Inventory inventory;

//    inventory.SerializeInventory("inventory.txt");
    inventory.PrintCombinedPrice();
    
    inventory.Deserialization("inventory.txt");
    inventory.PrintCombinedPrice();

    return 0;

}
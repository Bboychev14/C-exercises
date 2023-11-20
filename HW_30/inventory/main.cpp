#include "Product.h"
#include "Inventory.h"

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

    inventory.SerializeInventory("inventory.txt");
    inventory.PrintCombinedPrice();
    
    inventory.Deserialization("inventory.txt");
    inventory.PrintCombinedPrice();

    return 0;
    
}